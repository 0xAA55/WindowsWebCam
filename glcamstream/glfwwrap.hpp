#pragma once

#include "glcore.hpp"

#include <memory>
#include <stdexcept>
#include <mutex>
#include <unordered_map>

// 不装了，直接声明我就是这个结构体的封装
struct GLFWwindow;

namespace GLFWWrap
{
	class GLFWwindowType;

	class GLFWError : public std::runtime_error
	{
	public:
		int error;
		GLFWError(int error, const char* description) noexcept;
	};

	class GLCtxType : public GL::Version46
	{
	protected:
		GLFWwindowType& w;
		std::mutex CtxLock;

	public:
		GLCtxType(GLFWwindowType& w);
		void MakeCurrent();
	};

	class GLFWwindowType
	{
	protected:
		friend class GLCtxType;
		std::shared_ptr<GLFWwindow*> Internal = nullptr;
		std::shared_ptr<GLCtxType> GLCtx = nullptr;
		static std::unordered_map<GLFWwindow*, GLFWwindowType&> Instances;
		static std::mutex InstancesLock;
		static void ErrorCallBack(int error, const char* description);
		static void KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);

	public:
		GLFWwindowType();
		~GLFWwindowType();

		void SetWindowShouldClose() const;
		void EnterMainLoop();
		GLCtxType& GetMakeCurrent() const;
		void SwapBuffers() const;

		virtual void OnKeyDown(int key, int scancode, int action, int mods);
		virtual bool OnMainLoop(uint32_t Width, uint32_t Height, double Time);
	};

	
};

