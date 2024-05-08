#include "webcam.hpp"
#include "imfcb.hpp"

#include <locale>
#include <codecvt>

namespace WindowsWebCamTypeLib
{
	void OnFrameInternal(void* Userdata, WebCamTypeInternal& wci, bool FrameUpdated)
	{
		auto& wc = *reinterpret_cast<WebCamType*>(Userdata);
		wc.OnFrameCB(wc.Userdata, wc, FrameUpdated);
	}

	WebCamType::WebCamType(OnFrameCBType OnFrameCB, void* Userdata, bool Verbose) :
		Internal(std::make_shared<WebCamTypeInternal>(OnFrameInternal, this, Verbose)),
		Verbose(Verbose),
		Userdata(Userdata),
		OnFrameCB(OnFrameCB)
	{
		SetDevice(0);
	}

	void WebCamType::SetDevice(size_t Index)
	{
		auto enumerated = EnumeratedDevices();
		if (Index >= enumerated.Count) throw SetDeviceFailed(std::string("Device index `") + std::to_string(Index) + "` is out of bound.");
		reinterpret_cast<WebCamTypeInternal*>(Internal.get())->SetDevice(enumerated.Devices[Index]);
	}

	void WebCamType::SetDevice(std::string DevPath)
	{
		auto enumerated = EnumeratedDevices();
		for (size_t i = 0; i < enumerated.Count; i++)
		{
			if (GetDevicePath(enumerated.Devices[i]) == DevPath)
			{
				reinterpret_cast<WebCamTypeInternal*>(Internal.get())->SetDevice(enumerated.Devices[i]);
				return;
			}
		}
		throw SetDeviceFailed(std::string("No devices match the path `") + DevPath + "`.");
	}

	std::vector<std::string> WebCamType::EnumerateDevices()
	{
		auto enumerated = EnumerateDevicesW();
		auto ret = std::vector<std::string>();

		ret.resize(enumerated.size());
		for (size_t i = 0; i < enumerated.size(); i++)
		{
			ret[i] = std::wstring_convert<std::codecvt_utf8<wchar_t>>().to_bytes(enumerated[i]);
		}

		return ret;
	}

	std::vector<std::wstring> WebCamType::EnumerateDevicesW()
	{
		auto enumerated = EnumeratedDevices();
		auto ret = std::vector<std::wstring>();
		ret.resize(enumerated.Count);

		for (size_t i = 0; i < enumerated.Count; i++)
		{
			ret[i] = GetDevicePathW(enumerated.Devices[i]);
		}

		return ret;
	}

	Image_RGBA8& WebCamType::GetFrameBuffer()
	{
		return *reinterpret_cast<WebCamTypeInternal*>(Internal.get())->FrameBuffer;
	}

	const Image_RGBA8& WebCamType::GetFrameBuffer() const
	{
		return *reinterpret_cast<WebCamTypeInternal*>(Internal.get())->FrameBuffer;
	}

	void WebCamType::QueryFrame()
	{
		reinterpret_cast<WebCamTypeInternal*>(Internal.get())->QueryFrame();
	}

	bool WebCamType::IsFrameUpdated() const
	{
		return reinterpret_cast<WebCamTypeInternal*>(Internal.get())->IsFrameUpdated();
	}

	void WebCamType::SetIsFrameUpdated(bool IsUpdated)
	{
		reinterpret_cast<WebCamTypeInternal*>(Internal.get())->SetIsFrameUpdated(IsUpdated);
	}

	std::string WebCamType::GetCurRawFrameType() const
	{
		return reinterpret_cast<WebCamTypeInternal*>(Internal.get())->GetCurRawFrameTypeStr();
	}
	bool WebCamType::SetCurRawFrameTypeRGB32()
	{
		return reinterpret_cast<WebCamTypeInternal*>(Internal.get())->SetRawFrameType(RawFrameType::RGB32);
	}
	bool WebCamType::SetCurRawFrameTypeRGB24()
	{
		return reinterpret_cast<WebCamTypeInternal*>(Internal.get())->SetRawFrameType(RawFrameType::RGB24);
	}
	bool WebCamType::SetCurRawFrameTypeYUY2()
	{
		return reinterpret_cast<WebCamTypeInternal*>(Internal.get())->SetRawFrameType(RawFrameType::YUY2);
	}
	bool WebCamType::SetCurRawFrameTypeNV12()
	{
		return reinterpret_cast<WebCamTypeInternal*>(Internal.get())->SetRawFrameType(RawFrameType::NV12);
	}
}
