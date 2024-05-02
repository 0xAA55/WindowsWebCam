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
	while (MyData.NumFrames < 100) std::cout << "";
	

	return 0;
}

