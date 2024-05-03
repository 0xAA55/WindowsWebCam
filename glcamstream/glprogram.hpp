#pragma once

#include "glfwwrap.hpp"

#include <glm/glm/glm.hpp>

#include <filesystem>
#include <istream>
#include <stdexcept>

namespace GLRenderer
{
	using namespace GL;
	using GLCtxType = GLFWWrap::GLCtxType;
	using namespace glm;

	class ShaderCompilationError : std::runtime_error
	{
	public:
		ShaderCompilationError(const std::string& what) noexcept;
	};

	class ProgramLinkageError : std::runtime_error
	{
	public:
		ProgramLinkageError(const std::string& what) noexcept;
	};

	class Program
	{
	protected:
		const GLCtxType& gl;
		GLuint ShaderProgram = 0;

		GLuint CompileShader(GLenum ShaderType, const std::string& ShaderSource);

		Program(const GLCtxType& GLCtx);
	public:
		Program(const GLCtxType& GLCtx, const std::string& VertexShaderProgram, const std::string& GeometryShaderProgram, const std::string& FragmentShaderProgram);
		Program(const GLCtxType& GLCtx, const std::filesystem::path& VertexShaderProgramFile, const std::filesystem::path& GeometryShaderProgramFile, const std::filesystem::path& FragmentShaderProgramFile, bool RootIsExePath);
		Program(const GLCtxType& GLCtx, std::istream& VertexShaderProgramFile, std::istream& GeometryShaderProgramFile, std::istream& FragmentShaderProgramFile);
		~Program();

		static std::string ReadTextFile(const std::filesystem::path& Path, bool RootIsExePath);
		static std::string ReadTextFile(std::istream& ifs);

		GLint GetUniformLocation(const std::string& Uniform) const;
		GLint GetAttribLocation(const std::string& Attrib) const;

		operator GLuint() const;
		void Use() const;

		template<glm::length_t L, typename T>
		inline void SetUniform(GLint location, const vec<L, T>& v) const
		{
			if constexpr (std::is_same_v<T, GLfloat>)
			{
				switch (L)
				{
				case 1: gl.Uniformf(location, v.x);
				case 2: gl.Uniformf(location, v.x, v.y);
				case 3: gl.Uniformf(location, v.x, v.y, v.z);
				case 4: gl.Uniformf(location, v.x, v.y, v.z, v.w);
				}
			}
			else if constexpr (std::is_same_v<T, GLdouble>)
			{
				switch (L)
				{
				case 1: gl.Uniformd(location, v.x);
				case 2: gl.Uniformd(location, v.x, v.y);
				case 3: gl.Uniformd(location, v.x, v.y, v.z);
				case 4: gl.Uniformd(location, v.x, v.y, v.z, v.w);
				}
			}
			else if constexpr (std::is_same_v<T, GLint>)
			{
				switch (L)
				{
				case 1: gl.Uniformi(location, v.x);
				case 2: gl.Uniformi(location, v.x, v.y);
				case 3: gl.Uniformi(location, v.x, v.y, v.z);
				case 4: gl.Uniformi(location, v.x, v.y, v.z, v.w);
				}
			}
			else if constexpr (std::is_same_v<T, GLuint>)
			{
				switch (L)
				{
				case 1: gl.Uniformui(location, v.x);
				case 2: gl.Uniformui(location, v.x, v.y);
				case 3: gl.Uniformui(location, v.x, v.y, v.z);
				case 4: gl.Uniformui(location, v.x, v.y, v.z, v.w);
				}
			}
		}

		template<glm::length_t L, typename T>
		inline void SetVertexAttrib(GLint location, const vec<L, T>& v) const
		{
			if constexpr (std::is_same_v<T, GLfloat>)
			{
				switch (L)
				{
				case 1: gl.VertexAttribf(location, v.x);
				case 2: gl.VertexAttribf(location, v.x, v.y);
				case 3: gl.VertexAttribf(location, v.x, v.y, v.z);
				case 4: gl.VertexAttribf(location, v.x, v.y, v.z, v.w);
				}
			}
			else if constexpr (std::is_same_v<T, GLdouble>)
			{
				switch (L)
				{
				case 1: gl.VertexAttribd(location, v.x);
				case 2: gl.VertexAttribd(location, v.x, v.y);
				case 3: gl.VertexAttribd(location, v.x, v.y, v.z);
				case 4: gl.VertexAttribd(location, v.x, v.y, v.z, v.w);
				}
			}
			else if constexpr (std::is_same_v<T, GLint>)
			{
				switch (L)
				{
				case 1: gl.VertexAttribIi(location, v.x);
				case 2: gl.VertexAttribIi(location, v.x, v.y);
				case 3: gl.VertexAttribIi(location, v.x, v.y, v.z);
				case 4: gl.VertexAttribIi(location, v.x, v.y, v.z, v.w);
				}
			}
			else if constexpr (std::is_same_v<T, GLuint>)
			{
				switch (L)
				{
				case 1: gl.VertexAttribIui(location, v.x);
				case 2: gl.VertexAttribIui(location, v.x, v.y);
				case 3: gl.VertexAttribIui(location, v.x, v.y, v.z);
				case 4: gl.VertexAttribIui(location, v.x, v.y, v.z, v.w);
				}
			}
		}

		template<glm::length_t C, glm::length_t R, typename T>
		inline void SetUniform(GLint location, const mat<C, R, T>& m) const
		{
			for (int i = 0; i < R; i++)
			{
				SetUniform(location + i, m[i]);
			}
		}

		template<glm::length_t L, typename T>
		inline void SetUniform(const std::string& Uniform, const vec<L, T>& v) const
		{
			auto Location = GetUniformLocation(Uniform);
			if (Location >= 0) SetUniform(Location, v);
		}

		template<glm::length_t L, typename T>
		inline void SetVertexAttrib(const std::string& Attrib, const vec<L, T>& v) const
		{
			auto Location = GetAttribLocation(Attrib);
			if (Location >= 0) SetVertexAttrib(Location, v);
		}

		template<glm::length_t C, glm::length_t R, typename T>
		inline void SetUniform(const std::string& Uniform, const mat<C, R, T>& m) const
		{
			auto Location = GetUniformLocation(Uniform);
			if (Location >= 0) SetUniform(Location, m);
		}

		template<glm::length_t L, typename T> requires std::is_integral_v<T> && (!std::is_same_v<T, bool>)
		void SetVertexAttrib(const std::string& Attrib, void* PointerOrOffset, bool KeepInteger, bool Normalized, GLsizei Stride) const
		{
			auto Location = GetAttribLocation(Attrib);
			GLenum Type;
			if constexpr (std::is_same_v<T, GLbyte>) Type = gl.BYTE;
			else if constexpr (std::is_same_v<T, GLubyte>) Type = gl.UNSIGNED_BYTE;
			else if constexpr (std::is_same_v<T, GLshort>) Type = gl.SHORT;
			else if constexpr (std::is_same_v<T, GLushort>) Type = gl.UNSIGNED_SHORT;
			else if constexpr (std::is_same_v<T, GLint>) Type = gl.INT;
			else if constexpr (std::is_same_v<T, GLuint>) Type = gl.UNSIGNED_INT;
			if (Location >= 0)
			{
				gl.EnableVertexAttribArray(Location);
				if (KeepInteger) gl.VertexAttribIPointer(Location, L, Type, Normalized, Stride, PointerOrOffset);
				else VertexAttribPointer(Location, L, Type, Normalized, Stride, PointerOrOffset);
			}
		}

		template<glm::length_t L, typename T> requires std::is_floating_point_v<T>
		void SetVertexAttrib(const std::string& Attrib, void* PointerOrOffset, bool Normalized, GLsizei Stride) const
		{
			auto Location = GetAttribLocation(Attrib);
			if (Location >= 0)
			{
				gl.EnableVertexAttribArray(Location);
				if constexpr (std::is_same_v<T, GLfloat>) gl.VertexAttribPointer(Location, L, gl.FLOAT, Normalized, Stride, PointerOrOffset);
				else if constexpr (std::is_same_v<T, GLdouble>) gl.VertexAttribLPointer(Location, L, gl.DOUBLE, Normalized, Stride, PointerOrOffset);
			}
		}

		template<glm::length_t C, glm::length_t R, typename T> requires std::is_floating_point_v<T>
		void SetVertexAttrib(const std::string& Attrib, void* PointerOrOffset, bool Normalized, GLsizei Stride) const
		{
			auto Location = GetAttribLocation(Attrib);
			if (Location >= 0)
			{
				for(int i = 0; i < C; i++)
				{
					gl.EnableVertexAttribArray(Location + i);
					if constexpr (std::is_same_v<T, GLfloat>) gl.VertexAttribPointer(Location + i, R, gl.FLOAT, Normalized, Stride, PointerOrOffset);
					else if constexpr (std::is_same_v<T, GLdouble>) gl.VertexAttribLPointer(Location + i, R, gl.DOUBLE, Normalized, Stride, PointerOrOffset);
				}
			}
		}
	};

}
