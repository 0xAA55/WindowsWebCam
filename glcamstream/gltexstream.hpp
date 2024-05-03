#pragma once

#include "glfwwrap.hpp"

#include <unibmp/unibmp.hpp>

#include <string>
#include <stdexcept>

namespace GLRenderer
{
	using namespace GL;
	using GLCtxType = GLFWWrap::GLCtxType;
	using namespace UniformBitmap;

	class UpdateError : public std::runtime_error
	{
	public:
		UpdateError(const std::string& what) noexcept;
	};

	class Program;

	class TexStream
	{
	protected:
		const GLCtxType& gl;
		const Image_RGBA8& Image;
		GLuint Texture = 0;
		GLuint StreamerPBO = 0;

	public:
		TexStream(const GLCtxType& GLCtx, const Image_RGBA8& Image);

		void BindUniform(const Program& p, const std::string& UniformName, int BindPoint) const;

		void Update();

		GLuint GetTexture() const;
		GLuint GetStreamerPBO() const;
	};

}

