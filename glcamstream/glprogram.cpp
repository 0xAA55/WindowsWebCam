#include "glprogram.hpp"

#include <fstream>
#include <iostream>

namespace GLRenderer
{
	ShaderCompilationError::ShaderCompilationError(const std::string& what) noexcept :
		std::runtime_error(what)
	{
	}

	ProgramLinkageError::ProgramLinkageError(const std::string& what) noexcept :
		std::runtime_error(what)
	{
	}
	
	std::string Program::ReadTextFile(const std::filesystem::path& Path, bool RootIsExePath)
	{
		if (RootIsExePath)
		{
			auto ifs = std::ifstream(Path);
			return ReadTextFile(ifs);
		}
		else
		{
			auto ifs = std::ifstream(Path);
			return ReadTextFile(ifs);
		}
	}

	std::string Program::ReadTextFile(std::istream& ifs)
	{
		ifs.exceptions(std::ios::badbit | std::ios::failbit);
		ifs.seekg(0, std::ios::end);
		auto file_size = ifs.tellg();
		ifs.seekg(0, std::ios::beg);
		std::string buf;
		buf.resize(file_size);
		ifs.read(&buf[0], file_size);
		return buf;
	}

	Program::Program(const GLCtxType& GLCtx, std::istream& VertexShaderProgramFile, std::istream& GeometryShaderProgramFile, std::istream& FragmentShaderProgramFile) :
		Program(GLCtx, ReadTextFile(VertexShaderProgramFile), ReadTextFile(GeometryShaderProgramFile), ReadTextFile(FragmentShaderProgramFile))
	{
	}

	Program::Program(const GLCtxType& GLCtx, const std::filesystem::path& VertexShaderProgramFile, const std::filesystem::path& GeometryShaderProgramFile, const std::filesystem::path& FragmentShaderProgramFile, bool RootIsExePath) :
		Program(GLCtx, ReadTextFile(VertexShaderProgramFile, RootIsExePath), ReadTextFile(GeometryShaderProgramFile, RootIsExePath), ReadTextFile(FragmentShaderProgramFile, RootIsExePath))
	{
	}

	GLuint Program::CompileShader(GLenum ShaderType, const std::string& ShaderSource)
	{
		auto shader = gl.CreateShader(ShaderType);
		const GLchar* shader_sources = { ShaderSource.c_str() };
		GLint shader_lengths = { GLint(ShaderSource.length()) };
		gl.ShaderSource(shader, 1, &shader_sources, &shader_lengths);
		gl.CompileShader(shader);

		GLint compiled = 0;
		GLint infolog_len = 0;
		gl.GetShaderiv(shader, gl.COMPILE_STATUS, &compiled);

		std::string info_log;
		GLsizei info_log_len = infolog_len;
		gl.GetShaderiv(shader, gl.INFO_LOG_LENGTH, &infolog_len);
		if (infolog_len)
		{
			info_log.resize(infolog_len);
			gl.GetShaderInfoLog(shader, GLsizei(info_log.size()), &info_log_len, &info_log[0]);
		}

		if (compiled)
		{
			if (infolog_len)
			{
				std::cout << info_log + "\n";
			}
		}
		else
		{
			throw ShaderCompilationError(info_log);
		}

		return shader;
	}

	Program::Program(const GLCtxType& GLCtx, const std::string& VertexShaderProgram, const std::string& GeometryShaderProgram, const std::string& FragmentShaderProgram) :
		Program(GLCtx)
	{
		if (VertexShaderProgram.length())
		{
			auto shader = CompileShader(gl.VERTEX_SHADER, VertexShaderProgram);
			gl.AttachShader(ShaderProgram, shader);
			gl.DeleteShader(shader);
		}
		if (GeometryShaderProgram.length())
		{
			auto shader = CompileShader(gl.GEOMETRY_SHADER, GeometryShaderProgram);
			gl.AttachShader(ShaderProgram, shader);
			gl.DeleteShader(shader);
		}
		if (FragmentShaderProgram.length())
		{
			auto shader = CompileShader(gl.FRAGMENT_SHADER, FragmentShaderProgram);
			gl.AttachShader(ShaderProgram, shader);
			gl.DeleteShader(shader);
		}

		gl.LinkProgram(ShaderProgram);

		GLint linked = 0;
		GLint infolog_len = 0;
		gl.GetProgramiv(ShaderProgram, gl.LINK_STATUS, &linked);

		std::string info_log;
		GLsizei info_log_len = infolog_len;
		gl.GetProgramiv(ShaderProgram, gl.INFO_LOG_LENGTH, &infolog_len);
		if (infolog_len)
		{
			info_log.resize(infolog_len);
			gl.GetProgramInfoLog(ShaderProgram, GLsizei(info_log.size()), &info_log_len, &info_log[0]);
		}

		if (linked)
		{
			if (infolog_len)
			{
				std::cout << info_log + "\n";
			}
		}
		else
		{
			throw ProgramLinkageError(info_log);
		}
	}

	Program::~Program()
	{
		gl.DeleteProgram(ShaderProgram);
	}

	Program::Program(const GLCtxType& GLCtx) :
		gl(GLCtx)
	{
		ShaderProgram = gl.CreateProgram();
	}

	GLint Program::GetUniformLocation(const std::string& Uniform) const
	{
		return gl.GetUniformLocation(ShaderProgram, Uniform.c_str());
	}

	GLint Program::GetAttribLocation(const std::string& Attrib) const
	{
		return gl.GetAttribLocation(ShaderProgram, Attrib.c_str());
	}

	Program::operator GLuint() const
	{
		return ShaderProgram;
	}

	void Program::Use() const
	{
		gl.UseProgram(ShaderProgram);
	}
}
