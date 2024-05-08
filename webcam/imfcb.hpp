#pragma once

#include "comptr.hpp"

#include <unibmp/unibmp.hpp>

#include <shlwapi.h>

#include <mfapi.h>
#include <mfidl.h>
#include <mfreadwrite.h>
#include <mferror.h>
#include <Dbt.h>

#include <unordered_map>
#include <mutex>

namespace WindowsWebCamTypeLib
{
	using namespace UniformBitmap;

	class EnumerateDevicesFailed : public std::runtime_error
	{
	public:
		EnumerateDevicesFailed(const std::string& what) noexcept;
	};

	class SetDeviceFailed : public std::runtime_error
	{
	public:
		SetDeviceFailed(const std::string& what) noexcept;
	};

	class SetupFrameBufferFailed : public std::runtime_error
	{
	public:
		SetupFrameBufferFailed(const std::string& what) noexcept;
	};

	class FetchFrameFailed : public std::runtime_error
	{
	public:
		FetchFrameFailed(const std::string& what) noexcept;
	};

	enum class RawFrameType
	{
		Unknown,
		RGB32,
		RGB24,
		YUY2,
		NV12
	};

	class WebCamTypeInternal;
	using OnFrameCBInternalType = void (*)(void* Userdata, WebCamTypeInternal& wc, bool FrameUpdated);

	using ConverterFuncType = void(*)(Image_RGBA8& FrameBuffer, const BYTE* pSrc, int32_t SrcPitch, uint32_t Width, uint32_t Height);
	void TransformImage_RGB32(Image_RGBA8& FrameBuffer, const BYTE* pSrc, int32_t SrcPitch, uint32_t Width, uint32_t Height);
	void TransformImage_RGB24(Image_RGBA8& FrameBuffer, const BYTE* pSrc, int32_t SrcPitch, uint32_t Width, uint32_t Height);
	void TransformImage_YUY2(Image_RGBA8& FrameBuffer, const BYTE* pSrc, int32_t SrcPitch, uint32_t Width, uint32_t Height);
	void TransformImage_NV12(Image_RGBA8& FrameBuffer, const BYTE* pSrc, int32_t SrcPitch, uint32_t Width, uint32_t Height);

	struct GUID_Hash
	{
		size_t operator () (const GUID& g) const;
	};

	extern const std::unordered_map<GUID, ConverterFuncType, GUID_Hash> VideoFormatConverters;
	extern const std::unordered_map<GUID, RawFrameType, GUID_Hash> VideoFormatEnumMap;
	extern const std::unordered_map<RawFrameType, GUID> VideoFormatToGUIDMap;

	std::wstring GetDevicePathW(IMFActivate* Device);
	std::string GetDevicePath(IMFActivate* Device);

	class EnumeratedDevices
	{
	public:
		IMFActivate** Devices;
		uint32_t Count;

	public:
		EnumeratedDevices();
		~EnumeratedDevices();
	};

	class WebCamTypeInternal : public ::IMFSourceReaderCallback
	{
	protected:
		COMPtr<IMFSourceReader> Reader = nullptr;
		std::shared_ptr<std::mutex> Lock = std::make_shared<std::mutex>();
		RawFrameType CurRawFrameType = RawFrameType::Unknown;
		uint32_t NumRef = 1;
		bool FrameUpdated = false;
		uint32_t SrcWidth = 0, SrcHeight = 0;
		int32_t SrcPitch = 0;
		ConverterFuncType FormatConverter = nullptr;

		void GetSrcPitch(IMFMediaType* Type, GUID& subtype, int32_t* SrcPitch);
		void SetupFrameBuffer(IMFMediaType* Type);

	public:
		WebCamTypeInternal(OnFrameCBInternalType OnFrameCB, void* Userdata, bool Verbose);
		~WebCamTypeInternal();

		RawFrameType PreferredRawFrameType = RawFrameType::Unknown;

		std::shared_ptr<Image_RGBA8> FrameBuffer;

		STDMETHODIMP QueryInterface(const IID& riid, void** v) override;
		STDMETHODIMP_(ULONG) AddRef() override;
		STDMETHODIMP_(ULONG) Release() override;
		STDMETHODIMP OnReadSample(
			HRESULT hrStatus,
			DWORD dwStreamIndex,
			DWORD dwStreamFlags,
			LONGLONG llTimestamp,
			IMFSample* Sample
		) override;
		STDMETHODIMP OnEvent(DWORD, IMFMediaEvent*) override;
		STDMETHODIMP OnFlush(DWORD) override;

		bool IsReleased();

		void CloseDevice();

		bool IsFormatSupported(REFGUID subtype);

		HRESULT TryMediaType(IMFMediaType* Type);

		void SetDevice(IMFActivate* Device);

		void QueryFrame();
		bool IsFrameUpdated() const;
		void SetIsFrameUpdated(bool IsUpdated);
		RawFrameType GetCurRawFrameType() const;
		bool SetRawFrameType(RawFrameType RFT);
		void SetNativeRawFrameType();
		std::string GetCurRawFrameTypeStr() const;

		bool Verbose = false;
		bool VerboseOnQueryFrame = false;
		bool VerboseOnGetFrame = false;
		void* Userdata = nullptr;
		OnFrameCBInternalType OnFrameCB = nullptr;

	public:
		static std::string GetRawFrameTypeStr(RawFrameType RFT);
		static std::string GetRawFrameTypeStr(const GUID& guid);
	};
}
