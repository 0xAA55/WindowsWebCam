#include "gltexstream.hpp"

#include "glprogram.hpp"

namespace GLRenderer
{
	UpdateError::UpdateError(const std::string& what) noexcept :
		std::runtime_error(what)
	{
	}

	TexStream::TexStream(const GLCtxType& GLCtx, const Image_RGBA8& Image) :
		gl(GLCtx),
		Image(Image)
	{
		gl.GenBuffers(1, &StreamerPBO);
		gl.BindBuffer(gl.PIXEL_UNPACK_BUFFER, StreamerPBO);
		gl.BufferData(gl.PIXEL_UNPACK_BUFFER, Image.GetBitmapSizeInTotal(), Image.GetBitmapDataPtr(), gl.STREAM_DRAW);

		gl.GenTextures(1, &Texture);
		gl.BindTexture(gl.TEXTURE_2D, Texture);
		gl.TexParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_S, gl.CLAMP_TO_EDGE);
		gl.TexParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_T, gl.CLAMP_TO_EDGE);
		gl.TexParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR);
		gl.TexParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);
		gl.TexImage2D(gl.TEXTURE_2D, 0, gl.RGBA, Image.GetWidth(), Image.GetHeight(), 0, gl.RGBA, gl.UNSIGNED_BYTE, nullptr);
		gl.BindTexture(gl.TEXTURE_2D, 0);

		gl.BindBuffer(gl.PIXEL_UNPACK_BUFFER, 0);
	}

	void TexStream::Update()
	{
		gl.BindBuffer(gl.PIXEL_UNPACK_BUFFER, StreamerPBO);
		void* MapPtr = gl.MapBuffer(gl.PIXEL_UNPACK_BUFFER, gl.WRITE_ONLY);
		if (!MapPtr) throw UpdateError("`TexStream::Update()` failed to map PBO.");

		size_t Pitch = Image.GetPitch();
// #pragma omp parallel for
		// 此处不应使用 OpenMP
		// 会变卡。
		for (int y = 0; y < int(Image.GetHeight()); y++)
		{
			void* DstRow = reinterpret_cast<void*>(reinterpret_cast<size_t>(MapPtr) + Pitch * y);
			memcpy(DstRow, Image.GetBitmapRowPtr(y), Pitch);
		}
		gl.UnmapBuffer(gl.PIXEL_UNPACK_BUFFER);

		gl.BindTexture(gl.TEXTURE_2D, Texture);
		gl.TexImage2D(gl.TEXTURE_2D, 0, gl.RGBA, Image.GetWidth(), Image.GetHeight(), 0, gl.RGBA, gl.UNSIGNED_BYTE, nullptr);
		gl.BindTexture(gl.TEXTURE_2D, 0);

		gl.BindBuffer(gl.PIXEL_UNPACK_BUFFER, 0);
	}

	void TexStream::BindUniform(const Program& p, const std::string& UniformName, int BindPoint) const
	{
		auto Location = p.GetUniformLocation(UniformName);

		if (Location >= 0)
		{
			gl.ActiveTexture(gl.TEXTURE0 + BindPoint);
			gl.BindTexture(gl.TEXTURE_2D, Texture);
			gl.Uniform1i(Location, BindPoint);
		}
	}

	GLuint TexStream::GetTexture() const
	{
		return Texture;
	}

	GLuint TexStream::GetStreamerPBO() const
	{
		return StreamerPBO;
	}
}