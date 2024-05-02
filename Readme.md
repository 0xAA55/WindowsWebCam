# Windows Web Camera Example

## Usage
### API
See `webcam.hpp`
```C++
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
```

### Example
See `test.cpp`, this will  **capture 100 images** and save to JPEG files then exit.
```C++
#include "webcam.hpp"

#include <iostream>

using namespace WindowsWebCamTypeLib;

struct UserStruct
{
	int NumFrames = 0;
};

void OnFrame(void* Userdata, WebCamType& wc, bool FrameUpdated)
{
	auto& US = *reinterpret_cast<UserStruct*>(Userdata);
	if (FrameUpdated)
	{
		wc.GetFrameBuffer().SaveToJPG(std::string("test_") + std::to_string(++US.NumFrames) + ".jpg", 100);
	}
	if(US.NumFrames < 100) wc.QueryFrame();
}

int main()
{
	auto enumerated = WebCamType::EnumerateDevicesW();
	for (auto& devpath : enumerated)
	{
		std::wcout << devpath << L"\n";
	}

	auto MyData = UserStruct();
	auto WebCam = WebCamType(OnFrame, &MyData, true);
	WebCam.QueryFrame(); // Start sampling the camera
	while (MyData.NumFrames < 100) std::cout << "";
	

	return 0;
}
```
