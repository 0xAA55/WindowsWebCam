#pragma once

#include <unibmp/unibmp.hpp>

#include <string>
#include <vector>
#include <memory>
#include <stdexcept>

namespace WindowsWebCamTypeLib
{
	using namespace UniformBitmap;

	class WebCamType;
	using OnFrameCBType = void (*)(void* Userdata, WebCamType& wc, bool FrameUpdated);

	class WebCamType
	{
	protected:
		std::shared_ptr<void> Internal = nullptr;

	public:
		WebCamType(OnFrameCBType OnFrameCB, void* Userdata, bool Verbose);

		void SetDevice(size_t Index);
		void SetDevice(std::string DevPath);

		static std::vector<std::string> EnumerateDevices();
		static std::vector<std::wstring> EnumerateDevicesW();

		Image_RGBA8& GetFrameBuffer();
		const Image_RGBA8& GetFrameBuffer() const;

		void QueryFrame();
		bool IsFrameUpdated() const;
		void SetIsFrameUpdated(bool IsUpdated);
		std::string GetCurRawFrameType() const;

		bool Verbose = false;
		void* Userdata = nullptr;
		OnFrameCBType OnFrameCB = nullptr;
	};
}
