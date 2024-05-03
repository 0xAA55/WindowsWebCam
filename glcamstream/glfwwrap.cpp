#include "glfwwrap.hpp"

#include <GLFW/glfw3.h>

#include <atomic>

namespace GLFWWrap
{
	GLFWError::GLFWError(int error, const char* description) noexcept:
		error(error),
		std::runtime_error(description)
	{
	}

	void* APIENTRY glfw_GetProcAddress(const char* symbol)
	{
		return reinterpret_cast<void*>(glfwGetProcAddress(symbol));
	}

	GLCtxType::GLCtxType(GLFWwindowType& w) :
		w(w),
		Version46(glfw_GetProcAddress)
	{
	}

	void GLCtxType::MakeCurrent()
	{
		auto window = *w.Internal;
		glfwMakeContextCurrent(window);
	}

	std::unordered_map<GLFWwindow*, GLFWwindowType&> GLFWwindowType::Instances;
	std::mutex GLFWwindowType::InstancesLock;

	GLFWwindowType::GLFWwindowType()
	{
		auto lock = std::scoped_lock(InstancesLock);
		glfwSetErrorCallback(ErrorCallBack);
		if (!Instances.size())
		{
			glfwInit();
		}

		Internal = std::make_shared<GLFWwindow*>(glfwCreateWindow(640, 480, "Simple example", NULL, NULL));
		auto window = *Internal;
		if (!Instances.try_emplace(window, *this).second)
		{
			throw std::invalid_argument("The instances map already has this new GLFWwindow key.");
		}
		glfwSetKeyCallback(window, KeyCallback);
		glfwMakeContextCurrent(window);
		GLCtx = std::make_shared<GLCtxType>(*this);
	}

	void GLFWwindowType::ErrorCallBack(int error, const char* description)
	{
		throw GLFWError(error, description);
	}

	void GLFWwindowType::KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
	{
		auto lock = std::scoped_lock(InstancesLock);
		Instances.at(window).OnKeyDown(key, scancode, action, mods);
	}

	void GLFWwindowType::SetWindowShouldClose() const
	{
		auto window = *Internal;
		glfwSetWindowShouldClose(window, GL_TRUE);
	}

	GLCtxType& GLFWwindowType::GetMakeCurrent() const
	{
		GLCtx->MakeCurrent();
		return *GLCtx;
	}

	void GLFWwindowType::SwapBuffers() const
	{
		auto window = *Internal;
		glfwSwapBuffers(window);
	}

	void GLFWwindowType::EnterMainLoop()
	{
		auto window = *Internal;
		while (!glfwWindowShouldClose(window))
		{
			int Width, Height;
			glfwGetFramebufferSize(window, &Width, &Height);
			if (!OnMainLoop(Width, Height, glfwGetTime())) break;
			glfwPollEvents();
		}
	}

	GLFWwindowType::~GLFWwindowType()
	{
		auto lock = std::scoped_lock(InstancesLock);
		auto window = *Internal;
		glfwDestroyWindow(window);
		Internal.reset();
		if (!Instances.size())
		{
			glfwTerminate();
		}
	}

	void GLFWwindowType::OnKeyDown(int key, int scancode, int action, int mods)
	{
		if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
			SetWindowShouldClose();
	}

	bool GLFWwindowType::OnMainLoop(uint32_t Width, uint32_t Height, double Time)
	{
		return true;
	}
};

