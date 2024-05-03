#include "glcore.hpp"
#ifndef GLAPI
#  if defined(__MINGW32__) || defined(__CYGWIN__)
#    define GLAPI extern "C"
#  else
#    define GLAPI extern "C" __declspec(dllimport)
#  endif
#endif

namespace GL
{
	NullFuncPtrException::NullFuncPtrException(std::string what) noexcept:
		std::runtime_error(what)
	{
	}

	static void NullFuncPtr()
	{
		throw NullFuncPtrException("OpenGL function pointer is null.\n");
	}

	GLAPI void APIENTRY glCullFace (GLenum mode);
	GLAPI void APIENTRY glFrontFace (GLenum mode);
	GLAPI void APIENTRY glHint (GLenum target, GLenum mode);
	GLAPI void APIENTRY glLineWidth (GLfloat width);
	GLAPI void APIENTRY glPointSize (GLfloat size);
	GLAPI void APIENTRY glPolygonMode (GLenum face, GLenum mode);
	GLAPI void APIENTRY glScissor (GLint x, GLint y, GLsizei width, GLsizei height);
	GLAPI void APIENTRY glTexParameterf (GLenum target, GLenum pname, GLfloat param);
	GLAPI void APIENTRY glTexParameterfv (GLenum target, GLenum pname, const GLfloat* params);
	GLAPI void APIENTRY glTexParameteri (GLenum target, GLenum pname, GLint param);
	GLAPI void APIENTRY glTexParameteriv (GLenum target, GLenum pname, const GLint* params);
	GLAPI void APIENTRY glTexImage1D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void* pixels);
	GLAPI void APIENTRY glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void* pixels);
	GLAPI void APIENTRY glDrawBuffer (GLenum buf);
	GLAPI void APIENTRY glClear (GLbitfield mask);
	GLAPI void APIENTRY glClearColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	GLAPI void APIENTRY glClearStencil (GLint s);
	GLAPI void APIENTRY glClearDepth (GLdouble depth);
	GLAPI void APIENTRY glStencilMask (GLuint mask);
	GLAPI void APIENTRY glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
	GLAPI void APIENTRY glDepthMask (GLboolean flag);
	GLAPI void APIENTRY glDisable (GLenum cap);
	GLAPI void APIENTRY glEnable (GLenum cap);
	GLAPI void APIENTRY glFinish (void);
	GLAPI void APIENTRY glFlush (void);
	GLAPI void APIENTRY glBlendFunc (GLenum sfactor, GLenum dfactor);
	GLAPI void APIENTRY glLogicOp (GLenum opcode);
	GLAPI void APIENTRY glStencilFunc (GLenum func, GLint ref, GLuint mask);
	GLAPI void APIENTRY glStencilOp (GLenum fail, GLenum zfail, GLenum zpass);
	GLAPI void APIENTRY glDepthFunc (GLenum func);
	GLAPI void APIENTRY glPixelStoref (GLenum pname, GLfloat param);
	GLAPI void APIENTRY glPixelStorei (GLenum pname, GLint param);
	GLAPI void APIENTRY glReadBuffer (GLenum src);
	GLAPI void APIENTRY glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void* pixels);
	GLAPI void APIENTRY glGetBooleanv (GLenum pname, GLboolean* data);
	GLAPI void APIENTRY glGetDoublev (GLenum pname, GLdouble* data);
	GLAPI GLenum APIENTRY glGetError (void);
	GLAPI void APIENTRY glGetFloatv (GLenum pname, GLfloat* data);
	GLAPI void APIENTRY glGetIntegerv (GLenum pname, GLint* data);
	GLAPI const GLubyte* APIENTRY glGetString (GLenum name);
	GLAPI void APIENTRY glGetTexImage (GLenum target, GLint level, GLenum format, GLenum type, void* pixels);
	GLAPI void APIENTRY glGetTexParameterfv (GLenum target, GLenum pname, GLfloat* params);
	GLAPI void APIENTRY glGetTexParameteriv (GLenum target, GLenum pname, GLint* params);
	GLAPI void APIENTRY glGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloat* params);
	GLAPI void APIENTRY glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint* params);
	GLAPI GLboolean APIENTRY glIsEnabled (GLenum cap);
	GLAPI void APIENTRY glDepthRange (GLdouble n, GLdouble f);
	GLAPI void APIENTRY glViewport (GLint x, GLint y, GLsizei width, GLsizei height);
	const Version10::PFNGLCULLFACEPROC Version10::CullFace = glCullFace;
	const Version10::PFNGLFRONTFACEPROC Version10::FrontFace = glFrontFace;
	const Version10::PFNGLHINTPROC Version10::Hint = glHint;
	const Version10::PFNGLLINEWIDTHPROC Version10::LineWidth = glLineWidth;
	const Version10::PFNGLPOINTSIZEPROC Version10::PointSize = glPointSize;
	const Version10::PFNGLPOLYGONMODEPROC Version10::PolygonMode = glPolygonMode;
	const Version10::PFNGLSCISSORPROC Version10::Scissor = glScissor;
	const Version10::PFNGLTEXPARAMETERFPROC Version10::TexParameterf = glTexParameterf;
	const Version10::PFNGLTEXPARAMETERFVPROC Version10::TexParameterfv = glTexParameterfv;
	const Version10::PFNGLTEXPARAMETERIPROC Version10::TexParameteri = glTexParameteri;
	const Version10::PFNGLTEXPARAMETERIVPROC Version10::TexParameteriv = glTexParameteriv;
	const Version10::PFNGLTEXIMAGE1DPROC Version10::TexImage1D = glTexImage1D;
	const Version10::PFNGLTEXIMAGE2DPROC Version10::TexImage2D = glTexImage2D;
	const Version10::PFNGLDRAWBUFFERPROC Version10::DrawBuffer = glDrawBuffer;
	const Version10::PFNGLCLEARPROC Version10::Clear = glClear;
	const Version10::PFNGLCLEARCOLORPROC Version10::ClearColor = glClearColor;
	const Version10::PFNGLCLEARSTENCILPROC Version10::ClearStencil = glClearStencil;
	const Version10::PFNGLCLEARDEPTHPROC Version10::ClearDepth = glClearDepth;
	const Version10::PFNGLSTENCILMASKPROC Version10::StencilMask = glStencilMask;
	const Version10::PFNGLCOLORMASKPROC Version10::ColorMask = glColorMask;
	const Version10::PFNGLDEPTHMASKPROC Version10::DepthMask = glDepthMask;
	const Version10::PFNGLDISABLEPROC Version10::Disable = glDisable;
	const Version10::PFNGLENABLEPROC Version10::Enable = glEnable;
	const Version10::PFNGLFINISHPROC Version10::Finish = glFinish;
	const Version10::PFNGLFLUSHPROC Version10::Flush = glFlush;
	const Version10::PFNGLBLENDFUNCPROC Version10::BlendFunc = glBlendFunc;
	const Version10::PFNGLLOGICOPPROC Version10::LogicOp = glLogicOp;
	const Version10::PFNGLSTENCILFUNCPROC Version10::StencilFunc = glStencilFunc;
	const Version10::PFNGLSTENCILOPPROC Version10::StencilOp = glStencilOp;
	const Version10::PFNGLDEPTHFUNCPROC Version10::DepthFunc = glDepthFunc;
	const Version10::PFNGLPIXELSTOREFPROC Version10::PixelStoref = glPixelStoref;
	const Version10::PFNGLPIXELSTOREIPROC Version10::PixelStorei = glPixelStorei;
	const Version10::PFNGLREADBUFFERPROC Version10::ReadBuffer = glReadBuffer;
	const Version10::PFNGLREADPIXELSPROC Version10::ReadPixels = glReadPixels;
	const Version10::PFNGLGETBOOLEANVPROC Version10::GetBooleanv = glGetBooleanv;
	const Version10::PFNGLGETDOUBLEVPROC Version10::GetDoublev = glGetDoublev;
	const Version10::PFNGLGETERRORPROC Version10::GetError = glGetError;
	const Version10::PFNGLGETFLOATVPROC Version10::GetFloatv = glGetFloatv;
	const Version10::PFNGLGETINTEGERVPROC Version10::GetIntegerv = glGetIntegerv;
	const Version10::PFNGLGETSTRINGPROC Version10::GetString = glGetString;
	const Version10::PFNGLGETTEXIMAGEPROC Version10::GetTexImage = glGetTexImage;
	const Version10::PFNGLGETTEXPARAMETERFVPROC Version10::GetTexParameterfv = glGetTexParameterfv;
	const Version10::PFNGLGETTEXPARAMETERIVPROC Version10::GetTexParameteriv = glGetTexParameteriv;
	const Version10::PFNGLGETTEXLEVELPARAMETERFVPROC Version10::GetTexLevelParameterfv = glGetTexLevelParameterfv;
	const Version10::PFNGLGETTEXLEVELPARAMETERIVPROC Version10::GetTexLevelParameteriv = glGetTexLevelParameteriv;
	const Version10::PFNGLISENABLEDPROC Version10::IsEnabled = glIsEnabled;
	const Version10::PFNGLDEPTHRANGEPROC Version10::DepthRange = glDepthRange;
	const Version10::PFNGLVIEWPORTPROC Version10::Viewport = glViewport;
	Version10::Version10(Func_GetProcAddress GetProcAddress):
		GetProcAddress(GetProcAddress),
		Ver_Major(0),
		Ver_Minor(0),
		Ver_Release(0)
	{
		Available = true;
		auto Ver = (const char*)GetString(VERSION);
		Vendor = (const char*)GetString(VENDOR);
		Renderer = (const char*)GetString(RENDERER);
		Version = Ver;
		if (Ver)
		{
			auto ch = Ver;
			Ver_Major = atoi(ch);
			while (isdigit(*ch)) ch++;
			if (*ch == '.')
			{
				ch++;
				Ver_Minor = atoi(ch);
				while (isdigit(*ch)) ch++;
				if (*ch == '.')
				{
					ch++;
					Ver_Release = atoi(ch);
				}
			}
		}
	}


	static void APIENTRY Null_glDrawArrays (GLenum mode, GLint first, GLsizei count){ NullFuncPtr(); }
	static void APIENTRY Null_glDrawElements (GLenum mode, GLsizei count, GLenum type, const void* indices){ NullFuncPtr(); }
	static void APIENTRY Null_glGetPointerv (GLenum pname, void** params){ NullFuncPtr(); }
	static void APIENTRY Null_glPolygonOffset (GLfloat factor, GLfloat units){ NullFuncPtr(); }
	static void APIENTRY Null_glCopyTexImage1D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border){ NullFuncPtr(); }
	static void APIENTRY Null_glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border){ NullFuncPtr(); }
	static void APIENTRY Null_glCopyTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width){ NullFuncPtr(); }
	static void APIENTRY Null_glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height){ NullFuncPtr(); }
	static void APIENTRY Null_glTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void* pixels){ NullFuncPtr(); }
	static void APIENTRY Null_glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels){ NullFuncPtr(); }
	static void APIENTRY Null_glBindTexture (GLenum target, GLuint texture){ NullFuncPtr(); }
	static void APIENTRY Null_glDeleteTextures (GLsizei n, const GLuint* textures){ NullFuncPtr(); }
	static void APIENTRY Null_glGenTextures (GLsizei n, GLuint* textures){ NullFuncPtr(); }
	static GLboolean APIENTRY Null_glIsTexture (GLuint texture){ NullFuncPtr(); return NULL; }
	Version11::Version11(Func_GetProcAddress GetProcAddress):
		Version10(GetProcAddress),
		DrawArrays(Null_glDrawArrays),
		DrawElements(Null_glDrawElements),
		GetPointerv(Null_glGetPointerv),
		PolygonOffset(Null_glPolygonOffset),
		CopyTexImage1D(Null_glCopyTexImage1D),
		CopyTexImage2D(Null_glCopyTexImage2D),
		CopyTexSubImage1D(Null_glCopyTexSubImage1D),
		CopyTexSubImage2D(Null_glCopyTexSubImage2D),
		TexSubImage1D(Null_glTexSubImage1D),
		TexSubImage2D(Null_glTexSubImage2D),
		BindTexture(Null_glBindTexture),
		DeleteTextures(Null_glDeleteTextures),
		GenTextures(Null_glGenTextures),
		IsTexture(Null_glIsTexture)
	{
		Available = Ver_Major > 1 || (Ver_Major == 1 && (Ver_Minor > 1 || (Ver_Minor == 1 && Ver_Release >= 0)));
		try
		{
			DrawArrays = GetProc<PFNGLDRAWARRAYSPROC>("glDrawArrays");
			DrawElements = GetProc<PFNGLDRAWELEMENTSPROC>("glDrawElements");
			GetPointerv = GetProc<PFNGLGETPOINTERVPROC>("glGetPointerv");
			PolygonOffset = GetProc<PFNGLPOLYGONOFFSETPROC>("glPolygonOffset");
			CopyTexImage1D = GetProc<PFNGLCOPYTEXIMAGE1DPROC>("glCopyTexImage1D");
			CopyTexImage2D = GetProc<PFNGLCOPYTEXIMAGE2DPROC>("glCopyTexImage2D");
			CopyTexSubImage1D = GetProc<PFNGLCOPYTEXSUBIMAGE1DPROC>("glCopyTexSubImage1D");
			CopyTexSubImage2D = GetProc<PFNGLCOPYTEXSUBIMAGE2DPROC>("glCopyTexSubImage2D");
			TexSubImage1D = GetProc<PFNGLTEXSUBIMAGE1DPROC>("glTexSubImage1D");
			TexSubImage2D = GetProc<PFNGLTEXSUBIMAGE2DPROC>("glTexSubImage2D");
			BindTexture = GetProc<PFNGLBINDTEXTUREPROC>("glBindTexture");
			DeleteTextures = GetProc<PFNGLDELETETEXTURESPROC>("glDeleteTextures");
			GenTextures = GetProc<PFNGLGENTEXTURESPROC>("glGenTextures");
			IsTexture = GetProc<PFNGLISTEXTUREPROC>("glIsTexture");
		}
		catch (const NullFuncPtrException&)
		{
			Available = false;
		}
	}


	static void APIENTRY Null_glDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void* indices){ NullFuncPtr(); }
	static void APIENTRY Null_glTexImage3D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void* pixels){ NullFuncPtr(); }
	static void APIENTRY Null_glTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void* pixels){ NullFuncPtr(); }
	static void APIENTRY Null_glCopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height){ NullFuncPtr(); }
	Version12::Version12(Func_GetProcAddress GetProcAddress):
		Version11(GetProcAddress),
		DrawRangeElements(Null_glDrawRangeElements),
		TexImage3D(Null_glTexImage3D),
		TexSubImage3D(Null_glTexSubImage3D),
		CopyTexSubImage3D(Null_glCopyTexSubImage3D)
	{
		Available = Ver_Major > 1 || (Ver_Major == 1 && (Ver_Minor > 2 || (Ver_Minor == 2 && Ver_Release >= 0)));
		try
		{
			DrawRangeElements = GetProc<PFNGLDRAWRANGEELEMENTSPROC>("glDrawRangeElements");
			TexImage3D = GetProc<PFNGLTEXIMAGE3DPROC>("glTexImage3D");
			TexSubImage3D = GetProc<PFNGLTEXSUBIMAGE3DPROC>("glTexSubImage3D");
			CopyTexSubImage3D = GetProc<PFNGLCOPYTEXSUBIMAGE3DPROC>("glCopyTexSubImage3D");
		}
		catch (const NullFuncPtrException&)
		{
			Available = false;
		}
	}


	static void APIENTRY Null_glActiveTexture (GLenum texture){ NullFuncPtr(); }
	static void APIENTRY Null_glSampleCoverage (GLfloat value, GLboolean invert){ NullFuncPtr(); }
	static void APIENTRY Null_glCompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void* data){ NullFuncPtr(); }
	static void APIENTRY Null_glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void* data){ NullFuncPtr(); }
	static void APIENTRY Null_glCompressedTexImage1D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void* data){ NullFuncPtr(); }
	static void APIENTRY Null_glCompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void* data){ NullFuncPtr(); }
	static void APIENTRY Null_glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void* data){ NullFuncPtr(); }
	static void APIENTRY Null_glCompressedTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void* data){ NullFuncPtr(); }
	static void APIENTRY Null_glGetCompressedTexImage (GLenum target, GLint level, void* img){ NullFuncPtr(); }
	static void APIENTRY Null_glClientActiveTexture (GLenum texture){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord1d (GLenum target, GLdouble s){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord1dv (GLenum target, const GLdouble* v){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord1f (GLenum target, GLfloat s){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord1fv (GLenum target, const GLfloat* v){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord1i (GLenum target, GLint s){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord1iv (GLenum target, const GLint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord1s (GLenum target, GLshort s){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord1sv (GLenum target, const GLshort* v){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord2d (GLenum target, GLdouble s, GLdouble t){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord2dv (GLenum target, const GLdouble* v){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord2f (GLenum target, GLfloat s, GLfloat t){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord2fv (GLenum target, const GLfloat* v){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord2i (GLenum target, GLint s, GLint t){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord2iv (GLenum target, const GLint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord2s (GLenum target, GLshort s, GLshort t){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord2sv (GLenum target, const GLshort* v){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord3d (GLenum target, GLdouble s, GLdouble t, GLdouble r){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord3dv (GLenum target, const GLdouble* v){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord3f (GLenum target, GLfloat s, GLfloat t, GLfloat r){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord3fv (GLenum target, const GLfloat* v){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord3i (GLenum target, GLint s, GLint t, GLint r){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord3iv (GLenum target, const GLint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord3s (GLenum target, GLshort s, GLshort t, GLshort r){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord3sv (GLenum target, const GLshort* v){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord4d (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord4dv (GLenum target, const GLdouble* v){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord4f (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord4fv (GLenum target, const GLfloat* v){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord4i (GLenum target, GLint s, GLint t, GLint r, GLint q){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord4iv (GLenum target, const GLint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord4s (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoord4sv (GLenum target, const GLshort* v){ NullFuncPtr(); }
	static void APIENTRY Null_glLoadTransposeMatrixf (const GLfloat* m){ NullFuncPtr(); }
	static void APIENTRY Null_glLoadTransposeMatrixd (const GLdouble* m){ NullFuncPtr(); }
	static void APIENTRY Null_glMultTransposeMatrixf (const GLfloat* m){ NullFuncPtr(); }
	static void APIENTRY Null_glMultTransposeMatrixd (const GLdouble* m){ NullFuncPtr(); }
	Version13::Version13(Func_GetProcAddress GetProcAddress):
		Version12(GetProcAddress),
		ActiveTexture(Null_glActiveTexture),
		SampleCoverage(Null_glSampleCoverage),
		CompressedTexImage3D(Null_glCompressedTexImage3D),
		CompressedTexImage2D(Null_glCompressedTexImage2D),
		CompressedTexImage1D(Null_glCompressedTexImage1D),
		CompressedTexSubImage3D(Null_glCompressedTexSubImage3D),
		CompressedTexSubImage2D(Null_glCompressedTexSubImage2D),
		CompressedTexSubImage1D(Null_glCompressedTexSubImage1D),
		GetCompressedTexImage(Null_glGetCompressedTexImage),
		ClientActiveTexture(Null_glClientActiveTexture),
		MultiTexCoord1d(Null_glMultiTexCoord1d),
		MultiTexCoord1dv(Null_glMultiTexCoord1dv),
		MultiTexCoord1f(Null_glMultiTexCoord1f),
		MultiTexCoord1fv(Null_glMultiTexCoord1fv),
		MultiTexCoord1i(Null_glMultiTexCoord1i),
		MultiTexCoord1iv(Null_glMultiTexCoord1iv),
		MultiTexCoord1s(Null_glMultiTexCoord1s),
		MultiTexCoord1sv(Null_glMultiTexCoord1sv),
		MultiTexCoord2d(Null_glMultiTexCoord2d),
		MultiTexCoord2dv(Null_glMultiTexCoord2dv),
		MultiTexCoord2f(Null_glMultiTexCoord2f),
		MultiTexCoord2fv(Null_glMultiTexCoord2fv),
		MultiTexCoord2i(Null_glMultiTexCoord2i),
		MultiTexCoord2iv(Null_glMultiTexCoord2iv),
		MultiTexCoord2s(Null_glMultiTexCoord2s),
		MultiTexCoord2sv(Null_glMultiTexCoord2sv),
		MultiTexCoord3d(Null_glMultiTexCoord3d),
		MultiTexCoord3dv(Null_glMultiTexCoord3dv),
		MultiTexCoord3f(Null_glMultiTexCoord3f),
		MultiTexCoord3fv(Null_glMultiTexCoord3fv),
		MultiTexCoord3i(Null_glMultiTexCoord3i),
		MultiTexCoord3iv(Null_glMultiTexCoord3iv),
		MultiTexCoord3s(Null_glMultiTexCoord3s),
		MultiTexCoord3sv(Null_glMultiTexCoord3sv),
		MultiTexCoord4d(Null_glMultiTexCoord4d),
		MultiTexCoord4dv(Null_glMultiTexCoord4dv),
		MultiTexCoord4f(Null_glMultiTexCoord4f),
		MultiTexCoord4fv(Null_glMultiTexCoord4fv),
		MultiTexCoord4i(Null_glMultiTexCoord4i),
		MultiTexCoord4iv(Null_glMultiTexCoord4iv),
		MultiTexCoord4s(Null_glMultiTexCoord4s),
		MultiTexCoord4sv(Null_glMultiTexCoord4sv),
		LoadTransposeMatrixf(Null_glLoadTransposeMatrixf),
		LoadTransposeMatrixd(Null_glLoadTransposeMatrixd),
		MultTransposeMatrixf(Null_glMultTransposeMatrixf),
		MultTransposeMatrixd(Null_glMultTransposeMatrixd)
	{
		Available = Ver_Major > 1 || (Ver_Major == 1 && (Ver_Minor > 3 || (Ver_Minor == 3 && Ver_Release >= 0)));
		try
		{
			ActiveTexture = GetProc<PFNGLACTIVETEXTUREPROC>("glActiveTexture");
			SampleCoverage = GetProc<PFNGLSAMPLECOVERAGEPROC>("glSampleCoverage");
			CompressedTexImage3D = GetProc<PFNGLCOMPRESSEDTEXIMAGE3DPROC>("glCompressedTexImage3D");
			CompressedTexImage2D = GetProc<PFNGLCOMPRESSEDTEXIMAGE2DPROC>("glCompressedTexImage2D");
			CompressedTexImage1D = GetProc<PFNGLCOMPRESSEDTEXIMAGE1DPROC>("glCompressedTexImage1D");
			CompressedTexSubImage3D = GetProc<PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC>("glCompressedTexSubImage3D");
			CompressedTexSubImage2D = GetProc<PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC>("glCompressedTexSubImage2D");
			CompressedTexSubImage1D = GetProc<PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC>("glCompressedTexSubImage1D");
			GetCompressedTexImage = GetProc<PFNGLGETCOMPRESSEDTEXIMAGEPROC>("glGetCompressedTexImage");
			ClientActiveTexture = GetProc<PFNGLCLIENTACTIVETEXTUREPROC>("glClientActiveTexture");
			MultiTexCoord1d = GetProc<PFNGLMULTITEXCOORD1DPROC>("glMultiTexCoord1d");
			MultiTexCoord1dv = GetProc<PFNGLMULTITEXCOORD1DVPROC>("glMultiTexCoord1dv");
			MultiTexCoord1f = GetProc<PFNGLMULTITEXCOORD1FPROC>("glMultiTexCoord1f");
			MultiTexCoord1fv = GetProc<PFNGLMULTITEXCOORD1FVPROC>("glMultiTexCoord1fv");
			MultiTexCoord1i = GetProc<PFNGLMULTITEXCOORD1IPROC>("glMultiTexCoord1i");
			MultiTexCoord1iv = GetProc<PFNGLMULTITEXCOORD1IVPROC>("glMultiTexCoord1iv");
			MultiTexCoord1s = GetProc<PFNGLMULTITEXCOORD1SPROC>("glMultiTexCoord1s");
			MultiTexCoord1sv = GetProc<PFNGLMULTITEXCOORD1SVPROC>("glMultiTexCoord1sv");
			MultiTexCoord2d = GetProc<PFNGLMULTITEXCOORD2DPROC>("glMultiTexCoord2d");
			MultiTexCoord2dv = GetProc<PFNGLMULTITEXCOORD2DVPROC>("glMultiTexCoord2dv");
			MultiTexCoord2f = GetProc<PFNGLMULTITEXCOORD2FPROC>("glMultiTexCoord2f");
			MultiTexCoord2fv = GetProc<PFNGLMULTITEXCOORD2FVPROC>("glMultiTexCoord2fv");
			MultiTexCoord2i = GetProc<PFNGLMULTITEXCOORD2IPROC>("glMultiTexCoord2i");
			MultiTexCoord2iv = GetProc<PFNGLMULTITEXCOORD2IVPROC>("glMultiTexCoord2iv");
			MultiTexCoord2s = GetProc<PFNGLMULTITEXCOORD2SPROC>("glMultiTexCoord2s");
			MultiTexCoord2sv = GetProc<PFNGLMULTITEXCOORD2SVPROC>("glMultiTexCoord2sv");
			MultiTexCoord3d = GetProc<PFNGLMULTITEXCOORD3DPROC>("glMultiTexCoord3d");
			MultiTexCoord3dv = GetProc<PFNGLMULTITEXCOORD3DVPROC>("glMultiTexCoord3dv");
			MultiTexCoord3f = GetProc<PFNGLMULTITEXCOORD3FPROC>("glMultiTexCoord3f");
			MultiTexCoord3fv = GetProc<PFNGLMULTITEXCOORD3FVPROC>("glMultiTexCoord3fv");
			MultiTexCoord3i = GetProc<PFNGLMULTITEXCOORD3IPROC>("glMultiTexCoord3i");
			MultiTexCoord3iv = GetProc<PFNGLMULTITEXCOORD3IVPROC>("glMultiTexCoord3iv");
			MultiTexCoord3s = GetProc<PFNGLMULTITEXCOORD3SPROC>("glMultiTexCoord3s");
			MultiTexCoord3sv = GetProc<PFNGLMULTITEXCOORD3SVPROC>("glMultiTexCoord3sv");
			MultiTexCoord4d = GetProc<PFNGLMULTITEXCOORD4DPROC>("glMultiTexCoord4d");
			MultiTexCoord4dv = GetProc<PFNGLMULTITEXCOORD4DVPROC>("glMultiTexCoord4dv");
			MultiTexCoord4f = GetProc<PFNGLMULTITEXCOORD4FPROC>("glMultiTexCoord4f");
			MultiTexCoord4fv = GetProc<PFNGLMULTITEXCOORD4FVPROC>("glMultiTexCoord4fv");
			MultiTexCoord4i = GetProc<PFNGLMULTITEXCOORD4IPROC>("glMultiTexCoord4i");
			MultiTexCoord4iv = GetProc<PFNGLMULTITEXCOORD4IVPROC>("glMultiTexCoord4iv");
			MultiTexCoord4s = GetProc<PFNGLMULTITEXCOORD4SPROC>("glMultiTexCoord4s");
			MultiTexCoord4sv = GetProc<PFNGLMULTITEXCOORD4SVPROC>("glMultiTexCoord4sv");
			LoadTransposeMatrixf = GetProc<PFNGLLOADTRANSPOSEMATRIXFPROC>("glLoadTransposeMatrixf");
			LoadTransposeMatrixd = GetProc<PFNGLLOADTRANSPOSEMATRIXDPROC>("glLoadTransposeMatrixd");
			MultTransposeMatrixf = GetProc<PFNGLMULTTRANSPOSEMATRIXFPROC>("glMultTransposeMatrixf");
			MultTransposeMatrixd = GetProc<PFNGLMULTTRANSPOSEMATRIXDPROC>("glMultTransposeMatrixd");
		}
		catch (const NullFuncPtrException&)
		{
			Available = false;
		}
	}


	static void APIENTRY Null_glBlendFuncSeparate (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiDrawArrays (GLenum mode, const GLint* first, const GLsizei* count, GLsizei drawcount){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiDrawElements (GLenum mode, const GLsizei* count, GLenum type, const void* const* indices, GLsizei drawcount){ NullFuncPtr(); }
	static void APIENTRY Null_glPointParameterf (GLenum pname, GLfloat param){ NullFuncPtr(); }
	static void APIENTRY Null_glPointParameterfv (GLenum pname, const GLfloat* params){ NullFuncPtr(); }
	static void APIENTRY Null_glPointParameteri (GLenum pname, GLint param){ NullFuncPtr(); }
	static void APIENTRY Null_glPointParameteriv (GLenum pname, const GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glFogCoordf (GLfloat coord){ NullFuncPtr(); }
	static void APIENTRY Null_glFogCoordfv (const GLfloat* coord){ NullFuncPtr(); }
	static void APIENTRY Null_glFogCoordd (GLdouble coord){ NullFuncPtr(); }
	static void APIENTRY Null_glFogCoorddv (const GLdouble* coord){ NullFuncPtr(); }
	static void APIENTRY Null_glFogCoordPointer (GLenum type, GLsizei stride, const void* pointer){ NullFuncPtr(); }
	static void APIENTRY Null_glSecondaryColor3b (GLbyte red, GLbyte green, GLbyte blue){ NullFuncPtr(); }
	static void APIENTRY Null_glSecondaryColor3bv (const GLbyte* v){ NullFuncPtr(); }
	static void APIENTRY Null_glSecondaryColor3d (GLdouble red, GLdouble green, GLdouble blue){ NullFuncPtr(); }
	static void APIENTRY Null_glSecondaryColor3dv (const GLdouble* v){ NullFuncPtr(); }
	static void APIENTRY Null_glSecondaryColor3f (GLfloat red, GLfloat green, GLfloat blue){ NullFuncPtr(); }
	static void APIENTRY Null_glSecondaryColor3fv (const GLfloat* v){ NullFuncPtr(); }
	static void APIENTRY Null_glSecondaryColor3i (GLint red, GLint green, GLint blue){ NullFuncPtr(); }
	static void APIENTRY Null_glSecondaryColor3iv (const GLint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glSecondaryColor3s (GLshort red, GLshort green, GLshort blue){ NullFuncPtr(); }
	static void APIENTRY Null_glSecondaryColor3sv (const GLshort* v){ NullFuncPtr(); }
	static void APIENTRY Null_glSecondaryColor3ub (GLubyte red, GLubyte green, GLubyte blue){ NullFuncPtr(); }
	static void APIENTRY Null_glSecondaryColor3ubv (const GLubyte* v){ NullFuncPtr(); }
	static void APIENTRY Null_glSecondaryColor3ui (GLuint red, GLuint green, GLuint blue){ NullFuncPtr(); }
	static void APIENTRY Null_glSecondaryColor3uiv (const GLuint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glSecondaryColor3us (GLushort red, GLushort green, GLushort blue){ NullFuncPtr(); }
	static void APIENTRY Null_glSecondaryColor3usv (const GLushort* v){ NullFuncPtr(); }
	static void APIENTRY Null_glSecondaryColorPointer (GLint size, GLenum type, GLsizei stride, const void* pointer){ NullFuncPtr(); }
	static void APIENTRY Null_glWindowPos2d (GLdouble x, GLdouble y){ NullFuncPtr(); }
	static void APIENTRY Null_glWindowPos2dv (const GLdouble* v){ NullFuncPtr(); }
	static void APIENTRY Null_glWindowPos2f (GLfloat x, GLfloat y){ NullFuncPtr(); }
	static void APIENTRY Null_glWindowPos2fv (const GLfloat* v){ NullFuncPtr(); }
	static void APIENTRY Null_glWindowPos2i (GLint x, GLint y){ NullFuncPtr(); }
	static void APIENTRY Null_glWindowPos2iv (const GLint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glWindowPos2s (GLshort x, GLshort y){ NullFuncPtr(); }
	static void APIENTRY Null_glWindowPos2sv (const GLshort* v){ NullFuncPtr(); }
	static void APIENTRY Null_glWindowPos3d (GLdouble x, GLdouble y, GLdouble z){ NullFuncPtr(); }
	static void APIENTRY Null_glWindowPos3dv (const GLdouble* v){ NullFuncPtr(); }
	static void APIENTRY Null_glWindowPos3f (GLfloat x, GLfloat y, GLfloat z){ NullFuncPtr(); }
	static void APIENTRY Null_glWindowPos3fv (const GLfloat* v){ NullFuncPtr(); }
	static void APIENTRY Null_glWindowPos3i (GLint x, GLint y, GLint z){ NullFuncPtr(); }
	static void APIENTRY Null_glWindowPos3iv (const GLint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glWindowPos3s (GLshort x, GLshort y, GLshort z){ NullFuncPtr(); }
	static void APIENTRY Null_glWindowPos3sv (const GLshort* v){ NullFuncPtr(); }
	static void APIENTRY Null_glBlendColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha){ NullFuncPtr(); }
	static void APIENTRY Null_glBlendEquation (GLenum mode){ NullFuncPtr(); }
	Version14::Version14(Func_GetProcAddress GetProcAddress):
		Version13(GetProcAddress),
		BlendFuncSeparate(Null_glBlendFuncSeparate),
		MultiDrawArrays(Null_glMultiDrawArrays),
		MultiDrawElements(Null_glMultiDrawElements),
		PointParameterf(Null_glPointParameterf),
		PointParameterfv(Null_glPointParameterfv),
		PointParameteri(Null_glPointParameteri),
		PointParameteriv(Null_glPointParameteriv),
		FogCoordf(Null_glFogCoordf),
		FogCoordfv(Null_glFogCoordfv),
		FogCoordd(Null_glFogCoordd),
		FogCoorddv(Null_glFogCoorddv),
		FogCoordPointer(Null_glFogCoordPointer),
		SecondaryColor3b(Null_glSecondaryColor3b),
		SecondaryColor3bv(Null_glSecondaryColor3bv),
		SecondaryColor3d(Null_glSecondaryColor3d),
		SecondaryColor3dv(Null_glSecondaryColor3dv),
		SecondaryColor3f(Null_glSecondaryColor3f),
		SecondaryColor3fv(Null_glSecondaryColor3fv),
		SecondaryColor3i(Null_glSecondaryColor3i),
		SecondaryColor3iv(Null_glSecondaryColor3iv),
		SecondaryColor3s(Null_glSecondaryColor3s),
		SecondaryColor3sv(Null_glSecondaryColor3sv),
		SecondaryColor3ub(Null_glSecondaryColor3ub),
		SecondaryColor3ubv(Null_glSecondaryColor3ubv),
		SecondaryColor3ui(Null_glSecondaryColor3ui),
		SecondaryColor3uiv(Null_glSecondaryColor3uiv),
		SecondaryColor3us(Null_glSecondaryColor3us),
		SecondaryColor3usv(Null_glSecondaryColor3usv),
		SecondaryColorPointer(Null_glSecondaryColorPointer),
		WindowPos2d(Null_glWindowPos2d),
		WindowPos2dv(Null_glWindowPos2dv),
		WindowPos2f(Null_glWindowPos2f),
		WindowPos2fv(Null_glWindowPos2fv),
		WindowPos2i(Null_glWindowPos2i),
		WindowPos2iv(Null_glWindowPos2iv),
		WindowPos2s(Null_glWindowPos2s),
		WindowPos2sv(Null_glWindowPos2sv),
		WindowPos3d(Null_glWindowPos3d),
		WindowPos3dv(Null_glWindowPos3dv),
		WindowPos3f(Null_glWindowPos3f),
		WindowPos3fv(Null_glWindowPos3fv),
		WindowPos3i(Null_glWindowPos3i),
		WindowPos3iv(Null_glWindowPos3iv),
		WindowPos3s(Null_glWindowPos3s),
		WindowPos3sv(Null_glWindowPos3sv),
		BlendColor(Null_glBlendColor),
		BlendEquation(Null_glBlendEquation)
	{
		Available = Ver_Major > 1 || (Ver_Major == 1 && (Ver_Minor > 4 || (Ver_Minor == 4 && Ver_Release >= 0)));
		try
		{
			BlendFuncSeparate = GetProc<PFNGLBLENDFUNCSEPARATEPROC>("glBlendFuncSeparate");
			MultiDrawArrays = GetProc<PFNGLMULTIDRAWARRAYSPROC>("glMultiDrawArrays");
			MultiDrawElements = GetProc<PFNGLMULTIDRAWELEMENTSPROC>("glMultiDrawElements");
			PointParameterf = GetProc<PFNGLPOINTPARAMETERFPROC>("glPointParameterf");
			PointParameterfv = GetProc<PFNGLPOINTPARAMETERFVPROC>("glPointParameterfv");
			PointParameteri = GetProc<PFNGLPOINTPARAMETERIPROC>("glPointParameteri");
			PointParameteriv = GetProc<PFNGLPOINTPARAMETERIVPROC>("glPointParameteriv");
			FogCoordf = GetProc<PFNGLFOGCOORDFPROC>("glFogCoordf");
			FogCoordfv = GetProc<PFNGLFOGCOORDFVPROC>("glFogCoordfv");
			FogCoordd = GetProc<PFNGLFOGCOORDDPROC>("glFogCoordd");
			FogCoorddv = GetProc<PFNGLFOGCOORDDVPROC>("glFogCoorddv");
			FogCoordPointer = GetProc<PFNGLFOGCOORDPOINTERPROC>("glFogCoordPointer");
			SecondaryColor3b = GetProc<PFNGLSECONDARYCOLOR3BPROC>("glSecondaryColor3b");
			SecondaryColor3bv = GetProc<PFNGLSECONDARYCOLOR3BVPROC>("glSecondaryColor3bv");
			SecondaryColor3d = GetProc<PFNGLSECONDARYCOLOR3DPROC>("glSecondaryColor3d");
			SecondaryColor3dv = GetProc<PFNGLSECONDARYCOLOR3DVPROC>("glSecondaryColor3dv");
			SecondaryColor3f = GetProc<PFNGLSECONDARYCOLOR3FPROC>("glSecondaryColor3f");
			SecondaryColor3fv = GetProc<PFNGLSECONDARYCOLOR3FVPROC>("glSecondaryColor3fv");
			SecondaryColor3i = GetProc<PFNGLSECONDARYCOLOR3IPROC>("glSecondaryColor3i");
			SecondaryColor3iv = GetProc<PFNGLSECONDARYCOLOR3IVPROC>("glSecondaryColor3iv");
			SecondaryColor3s = GetProc<PFNGLSECONDARYCOLOR3SPROC>("glSecondaryColor3s");
			SecondaryColor3sv = GetProc<PFNGLSECONDARYCOLOR3SVPROC>("glSecondaryColor3sv");
			SecondaryColor3ub = GetProc<PFNGLSECONDARYCOLOR3UBPROC>("glSecondaryColor3ub");
			SecondaryColor3ubv = GetProc<PFNGLSECONDARYCOLOR3UBVPROC>("glSecondaryColor3ubv");
			SecondaryColor3ui = GetProc<PFNGLSECONDARYCOLOR3UIPROC>("glSecondaryColor3ui");
			SecondaryColor3uiv = GetProc<PFNGLSECONDARYCOLOR3UIVPROC>("glSecondaryColor3uiv");
			SecondaryColor3us = GetProc<PFNGLSECONDARYCOLOR3USPROC>("glSecondaryColor3us");
			SecondaryColor3usv = GetProc<PFNGLSECONDARYCOLOR3USVPROC>("glSecondaryColor3usv");
			SecondaryColorPointer = GetProc<PFNGLSECONDARYCOLORPOINTERPROC>("glSecondaryColorPointer");
			WindowPos2d = GetProc<PFNGLWINDOWPOS2DPROC>("glWindowPos2d");
			WindowPos2dv = GetProc<PFNGLWINDOWPOS2DVPROC>("glWindowPos2dv");
			WindowPos2f = GetProc<PFNGLWINDOWPOS2FPROC>("glWindowPos2f");
			WindowPos2fv = GetProc<PFNGLWINDOWPOS2FVPROC>("glWindowPos2fv");
			WindowPos2i = GetProc<PFNGLWINDOWPOS2IPROC>("glWindowPos2i");
			WindowPos2iv = GetProc<PFNGLWINDOWPOS2IVPROC>("glWindowPos2iv");
			WindowPos2s = GetProc<PFNGLWINDOWPOS2SPROC>("glWindowPos2s");
			WindowPos2sv = GetProc<PFNGLWINDOWPOS2SVPROC>("glWindowPos2sv");
			WindowPos3d = GetProc<PFNGLWINDOWPOS3DPROC>("glWindowPos3d");
			WindowPos3dv = GetProc<PFNGLWINDOWPOS3DVPROC>("glWindowPos3dv");
			WindowPos3f = GetProc<PFNGLWINDOWPOS3FPROC>("glWindowPos3f");
			WindowPos3fv = GetProc<PFNGLWINDOWPOS3FVPROC>("glWindowPos3fv");
			WindowPos3i = GetProc<PFNGLWINDOWPOS3IPROC>("glWindowPos3i");
			WindowPos3iv = GetProc<PFNGLWINDOWPOS3IVPROC>("glWindowPos3iv");
			WindowPos3s = GetProc<PFNGLWINDOWPOS3SPROC>("glWindowPos3s");
			WindowPos3sv = GetProc<PFNGLWINDOWPOS3SVPROC>("glWindowPos3sv");
			BlendColor = GetProc<PFNGLBLENDCOLORPROC>("glBlendColor");
			BlendEquation = GetProc<PFNGLBLENDEQUATIONPROC>("glBlendEquation");
		}
		catch (const NullFuncPtrException&)
		{
			Available = false;
		}
	}


	static void APIENTRY Null_glGenQueries (GLsizei n, GLuint* ids){ NullFuncPtr(); }
	static void APIENTRY Null_glDeleteQueries (GLsizei n, const GLuint* ids){ NullFuncPtr(); }
	static GLboolean APIENTRY Null_glIsQuery (GLuint id){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glBeginQuery (GLenum target, GLuint id){ NullFuncPtr(); }
	static void APIENTRY Null_glEndQuery (GLenum target){ NullFuncPtr(); }
	static void APIENTRY Null_glGetQueryiv (GLenum target, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetQueryObjectiv (GLuint id, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetQueryObjectuiv (GLuint id, GLenum pname, GLuint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glBindBuffer (GLenum target, GLuint buffer){ NullFuncPtr(); }
	static void APIENTRY Null_glDeleteBuffers (GLsizei n, const GLuint* buffers){ NullFuncPtr(); }
	static void APIENTRY Null_glGenBuffers (GLsizei n, GLuint* buffers){ NullFuncPtr(); }
	static GLboolean APIENTRY Null_glIsBuffer (GLuint buffer){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glBufferData (GLenum target, GLsizeiptr size, const void* data, GLenum usage){ NullFuncPtr(); }
	static void APIENTRY Null_glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const void* data){ NullFuncPtr(); }
	static void APIENTRY Null_glGetBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, void* data){ NullFuncPtr(); }
	static void* APIENTRY Null_glMapBuffer (GLenum target, GLenum access){ NullFuncPtr(); return NULL; }
	static GLboolean APIENTRY Null_glUnmapBuffer (GLenum target){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glGetBufferParameteriv (GLenum target, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetBufferPointerv (GLenum target, GLenum pname, void** params){ NullFuncPtr(); }
	Version15::Version15(Func_GetProcAddress GetProcAddress):
		Version14(GetProcAddress),
		GenQueries(Null_glGenQueries),
		DeleteQueries(Null_glDeleteQueries),
		IsQuery(Null_glIsQuery),
		BeginQuery(Null_glBeginQuery),
		EndQuery(Null_glEndQuery),
		GetQueryiv(Null_glGetQueryiv),
		GetQueryObjectiv(Null_glGetQueryObjectiv),
		GetQueryObjectuiv(Null_glGetQueryObjectuiv),
		BindBuffer(Null_glBindBuffer),
		DeleteBuffers(Null_glDeleteBuffers),
		GenBuffers(Null_glGenBuffers),
		IsBuffer(Null_glIsBuffer),
		BufferData(Null_glBufferData),
		BufferSubData(Null_glBufferSubData),
		GetBufferSubData(Null_glGetBufferSubData),
		MapBuffer(Null_glMapBuffer),
		UnmapBuffer(Null_glUnmapBuffer),
		GetBufferParameteriv(Null_glGetBufferParameteriv),
		GetBufferPointerv(Null_glGetBufferPointerv)
	{
		Available = Ver_Major > 1 || (Ver_Major == 1 && (Ver_Minor > 5 || (Ver_Minor == 5 && Ver_Release >= 0)));
		try
		{
			GenQueries = GetProc<PFNGLGENQUERIESPROC>("glGenQueries");
			DeleteQueries = GetProc<PFNGLDELETEQUERIESPROC>("glDeleteQueries");
			IsQuery = GetProc<PFNGLISQUERYPROC>("glIsQuery");
			BeginQuery = GetProc<PFNGLBEGINQUERYPROC>("glBeginQuery");
			EndQuery = GetProc<PFNGLENDQUERYPROC>("glEndQuery");
			GetQueryiv = GetProc<PFNGLGETQUERYIVPROC>("glGetQueryiv");
			GetQueryObjectiv = GetProc<PFNGLGETQUERYOBJECTIVPROC>("glGetQueryObjectiv");
			GetQueryObjectuiv = GetProc<PFNGLGETQUERYOBJECTUIVPROC>("glGetQueryObjectuiv");
			BindBuffer = GetProc<PFNGLBINDBUFFERPROC>("glBindBuffer");
			DeleteBuffers = GetProc<PFNGLDELETEBUFFERSPROC>("glDeleteBuffers");
			GenBuffers = GetProc<PFNGLGENBUFFERSPROC>("glGenBuffers");
			IsBuffer = GetProc<PFNGLISBUFFERPROC>("glIsBuffer");
			BufferData = GetProc<PFNGLBUFFERDATAPROC>("glBufferData");
			BufferSubData = GetProc<PFNGLBUFFERSUBDATAPROC>("glBufferSubData");
			GetBufferSubData = GetProc<PFNGLGETBUFFERSUBDATAPROC>("glGetBufferSubData");
			MapBuffer = GetProc<PFNGLMAPBUFFERPROC>("glMapBuffer");
			UnmapBuffer = GetProc<PFNGLUNMAPBUFFERPROC>("glUnmapBuffer");
			GetBufferParameteriv = GetProc<PFNGLGETBUFFERPARAMETERIVPROC>("glGetBufferParameteriv");
			GetBufferPointerv = GetProc<PFNGLGETBUFFERPOINTERVPROC>("glGetBufferPointerv");
		}
		catch (const NullFuncPtrException&)
		{
			Available = false;
		}
	}


	static void APIENTRY Null_glBlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha){ NullFuncPtr(); }
	static void APIENTRY Null_glDrawBuffers (GLsizei n, const GLenum* bufs){ NullFuncPtr(); }
	static void APIENTRY Null_glStencilOpSeparate (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass){ NullFuncPtr(); }
	static void APIENTRY Null_glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask){ NullFuncPtr(); }
	static void APIENTRY Null_glStencilMaskSeparate (GLenum face, GLuint mask){ NullFuncPtr(); }
	static void APIENTRY Null_glAttachShader (GLuint program, GLuint shader){ NullFuncPtr(); }
	static void APIENTRY Null_glBindAttribLocation (GLuint program, GLuint index, const GLchar* name){ NullFuncPtr(); }
	static void APIENTRY Null_glCompileShader (GLuint shader){ NullFuncPtr(); }
	static GLuint APIENTRY Null_glCreateProgram (void){ NullFuncPtr(); return NULL; }
	static GLuint APIENTRY Null_glCreateShader (GLenum type){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glDeleteProgram (GLuint program){ NullFuncPtr(); }
	static void APIENTRY Null_glDeleteShader (GLuint shader){ NullFuncPtr(); }
	static void APIENTRY Null_glDetachShader (GLuint program, GLuint shader){ NullFuncPtr(); }
	static void APIENTRY Null_glDisableVertexAttribArray (GLuint index){ NullFuncPtr(); }
	static void APIENTRY Null_glEnableVertexAttribArray (GLuint index){ NullFuncPtr(); }
	static void APIENTRY Null_glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name){ NullFuncPtr(); }
	static void APIENTRY Null_glGetActiveUniform (GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name){ NullFuncPtr(); }
	static void APIENTRY Null_glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei* count, GLuint* shaders){ NullFuncPtr(); }
	static GLint APIENTRY Null_glGetAttribLocation (GLuint program, const GLchar* name){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glGetProgramiv (GLuint program, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei* length, GLchar* infoLog){ NullFuncPtr(); }
	static void APIENTRY Null_glGetShaderiv (GLuint shader, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* infoLog){ NullFuncPtr(); }
	static void APIENTRY Null_glGetShaderSource (GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* source){ NullFuncPtr(); }
	static GLint APIENTRY Null_glGetUniformLocation (GLuint program, const GLchar* name){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glGetUniformfv (GLuint program, GLint location, GLfloat* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetUniformiv (GLuint program, GLint location, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetVertexAttribdv (GLuint index, GLenum pname, GLdouble* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetVertexAttribiv (GLuint index, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetVertexAttribPointerv (GLuint index, GLenum pname, void** pointer){ NullFuncPtr(); }
	static GLboolean APIENTRY Null_glIsProgram (GLuint program){ NullFuncPtr(); return NULL; }
	static GLboolean APIENTRY Null_glIsShader (GLuint shader){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glLinkProgram (GLuint program){ NullFuncPtr(); }
	static void APIENTRY Null_glShaderSource (GLuint shader, GLsizei count, const GLchar* const* string, const GLint* length){ NullFuncPtr(); }
	static void APIENTRY Null_glUseProgram (GLuint program){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform1f (GLint location, GLfloat v0){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform2f (GLint location, GLfloat v0, GLfloat v1){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform3f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform4f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform1i (GLint location, GLint v0){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform2i (GLint location, GLint v0, GLint v1){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform3i (GLint location, GLint v0, GLint v1, GLint v2){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform4i (GLint location, GLint v0, GLint v1, GLint v2, GLint v3){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform1fv (GLint location, GLsizei count, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform2fv (GLint location, GLsizei count, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform3fv (GLint location, GLsizei count, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform4fv (GLint location, GLsizei count, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform1iv (GLint location, GLsizei count, const GLint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform2iv (GLint location, GLsizei count, const GLint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform3iv (GLint location, GLsizei count, const GLint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform4iv (GLint location, GLsizei count, const GLint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glValidateProgram (GLuint program){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib1d (GLuint index, GLdouble x){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib1dv (GLuint index, const GLdouble* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib1f (GLuint index, GLfloat x){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib1fv (GLuint index, const GLfloat* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib1s (GLuint index, GLshort x){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib1sv (GLuint index, const GLshort* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib2d (GLuint index, GLdouble x, GLdouble y){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib2dv (GLuint index, const GLdouble* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib2f (GLuint index, GLfloat x, GLfloat y){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib2fv (GLuint index, const GLfloat* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib2s (GLuint index, GLshort x, GLshort y){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib2sv (GLuint index, const GLshort* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib3d (GLuint index, GLdouble x, GLdouble y, GLdouble z){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib3dv (GLuint index, const GLdouble* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib3f (GLuint index, GLfloat x, GLfloat y, GLfloat z){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib3fv (GLuint index, const GLfloat* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib3s (GLuint index, GLshort x, GLshort y, GLshort z){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib3sv (GLuint index, const GLshort* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib4Nbv (GLuint index, const GLbyte* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib4Niv (GLuint index, const GLint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib4Nsv (GLuint index, const GLshort* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib4Nub (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib4Nubv (GLuint index, const GLubyte* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib4Nuiv (GLuint index, const GLuint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib4Nusv (GLuint index, const GLushort* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib4bv (GLuint index, const GLbyte* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib4dv (GLuint index, const GLdouble* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib4f (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib4fv (GLuint index, const GLfloat* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib4iv (GLuint index, const GLint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib4s (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib4sv (GLuint index, const GLshort* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib4ubv (GLuint index, const GLubyte* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib4uiv (GLuint index, const GLuint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttrib4usv (GLuint index, const GLushort* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void* pointer){ NullFuncPtr(); }
	Version20::Version20(Func_GetProcAddress GetProcAddress):
		Version15(GetProcAddress),
		BlendEquationSeparate(Null_glBlendEquationSeparate),
		DrawBuffers(Null_glDrawBuffers),
		StencilOpSeparate(Null_glStencilOpSeparate),
		StencilFuncSeparate(Null_glStencilFuncSeparate),
		StencilMaskSeparate(Null_glStencilMaskSeparate),
		AttachShader(Null_glAttachShader),
		BindAttribLocation(Null_glBindAttribLocation),
		CompileShader(Null_glCompileShader),
		CreateProgram(Null_glCreateProgram),
		CreateShader(Null_glCreateShader),
		DeleteProgram(Null_glDeleteProgram),
		DeleteShader(Null_glDeleteShader),
		DetachShader(Null_glDetachShader),
		DisableVertexAttribArray(Null_glDisableVertexAttribArray),
		EnableVertexAttribArray(Null_glEnableVertexAttribArray),
		GetActiveAttrib(Null_glGetActiveAttrib),
		GetActiveUniform(Null_glGetActiveUniform),
		GetAttachedShaders(Null_glGetAttachedShaders),
		GetAttribLocation(Null_glGetAttribLocation),
		GetProgramiv(Null_glGetProgramiv),
		GetProgramInfoLog(Null_glGetProgramInfoLog),
		GetShaderiv(Null_glGetShaderiv),
		GetShaderInfoLog(Null_glGetShaderInfoLog),
		GetShaderSource(Null_glGetShaderSource),
		GetUniformLocation(Null_glGetUniformLocation),
		GetUniformfv(Null_glGetUniformfv),
		GetUniformiv(Null_glGetUniformiv),
		GetVertexAttribdv(Null_glGetVertexAttribdv),
		GetVertexAttribfv(Null_glGetVertexAttribfv),
		GetVertexAttribiv(Null_glGetVertexAttribiv),
		GetVertexAttribPointerv(Null_glGetVertexAttribPointerv),
		IsProgram(Null_glIsProgram),
		IsShader(Null_glIsShader),
		LinkProgram(Null_glLinkProgram),
		ShaderSource(Null_glShaderSource),
		UseProgram(Null_glUseProgram),
		Uniform1f(Null_glUniform1f),
		Uniform2f(Null_glUniform2f),
		Uniform3f(Null_glUniform3f),
		Uniform4f(Null_glUniform4f),
		Uniform1i(Null_glUniform1i),
		Uniform2i(Null_glUniform2i),
		Uniform3i(Null_glUniform3i),
		Uniform4i(Null_glUniform4i),
		Uniform1fv(Null_glUniform1fv),
		Uniform2fv(Null_glUniform2fv),
		Uniform3fv(Null_glUniform3fv),
		Uniform4fv(Null_glUniform4fv),
		Uniform1iv(Null_glUniform1iv),
		Uniform2iv(Null_glUniform2iv),
		Uniform3iv(Null_glUniform3iv),
		Uniform4iv(Null_glUniform4iv),
		UniformMatrix2fv(Null_glUniformMatrix2fv),
		UniformMatrix3fv(Null_glUniformMatrix3fv),
		UniformMatrix4fv(Null_glUniformMatrix4fv),
		ValidateProgram(Null_glValidateProgram),
		VertexAttrib1d(Null_glVertexAttrib1d),
		VertexAttrib1dv(Null_glVertexAttrib1dv),
		VertexAttrib1f(Null_glVertexAttrib1f),
		VertexAttrib1fv(Null_glVertexAttrib1fv),
		VertexAttrib1s(Null_glVertexAttrib1s),
		VertexAttrib1sv(Null_glVertexAttrib1sv),
		VertexAttrib2d(Null_glVertexAttrib2d),
		VertexAttrib2dv(Null_glVertexAttrib2dv),
		VertexAttrib2f(Null_glVertexAttrib2f),
		VertexAttrib2fv(Null_glVertexAttrib2fv),
		VertexAttrib2s(Null_glVertexAttrib2s),
		VertexAttrib2sv(Null_glVertexAttrib2sv),
		VertexAttrib3d(Null_glVertexAttrib3d),
		VertexAttrib3dv(Null_glVertexAttrib3dv),
		VertexAttrib3f(Null_glVertexAttrib3f),
		VertexAttrib3fv(Null_glVertexAttrib3fv),
		VertexAttrib3s(Null_glVertexAttrib3s),
		VertexAttrib3sv(Null_glVertexAttrib3sv),
		VertexAttrib4Nbv(Null_glVertexAttrib4Nbv),
		VertexAttrib4Niv(Null_glVertexAttrib4Niv),
		VertexAttrib4Nsv(Null_glVertexAttrib4Nsv),
		VertexAttrib4Nub(Null_glVertexAttrib4Nub),
		VertexAttrib4Nubv(Null_glVertexAttrib4Nubv),
		VertexAttrib4Nuiv(Null_glVertexAttrib4Nuiv),
		VertexAttrib4Nusv(Null_glVertexAttrib4Nusv),
		VertexAttrib4bv(Null_glVertexAttrib4bv),
		VertexAttrib4d(Null_glVertexAttrib4d),
		VertexAttrib4dv(Null_glVertexAttrib4dv),
		VertexAttrib4f(Null_glVertexAttrib4f),
		VertexAttrib4fv(Null_glVertexAttrib4fv),
		VertexAttrib4iv(Null_glVertexAttrib4iv),
		VertexAttrib4s(Null_glVertexAttrib4s),
		VertexAttrib4sv(Null_glVertexAttrib4sv),
		VertexAttrib4ubv(Null_glVertexAttrib4ubv),
		VertexAttrib4uiv(Null_glVertexAttrib4uiv),
		VertexAttrib4usv(Null_glVertexAttrib4usv),
		VertexAttribPointer(Null_glVertexAttribPointer)
	{
		Available = Ver_Major > 2 || (Ver_Major == 2 && (Ver_Minor > 0 || (Ver_Minor == 0 && Ver_Release >= 0)));
		try
		{
			BlendEquationSeparate = GetProc<PFNGLBLENDEQUATIONSEPARATEPROC>("glBlendEquationSeparate");
			DrawBuffers = GetProc<PFNGLDRAWBUFFERSPROC>("glDrawBuffers");
			StencilOpSeparate = GetProc<PFNGLSTENCILOPSEPARATEPROC>("glStencilOpSeparate");
			StencilFuncSeparate = GetProc<PFNGLSTENCILFUNCSEPARATEPROC>("glStencilFuncSeparate");
			StencilMaskSeparate = GetProc<PFNGLSTENCILMASKSEPARATEPROC>("glStencilMaskSeparate");
			AttachShader = GetProc<PFNGLATTACHSHADERPROC>("glAttachShader");
			BindAttribLocation = GetProc<PFNGLBINDATTRIBLOCATIONPROC>("glBindAttribLocation");
			CompileShader = GetProc<PFNGLCOMPILESHADERPROC>("glCompileShader");
			CreateProgram = GetProc<PFNGLCREATEPROGRAMPROC>("glCreateProgram");
			CreateShader = GetProc<PFNGLCREATESHADERPROC>("glCreateShader");
			DeleteProgram = GetProc<PFNGLDELETEPROGRAMPROC>("glDeleteProgram");
			DeleteShader = GetProc<PFNGLDELETESHADERPROC>("glDeleteShader");
			DetachShader = GetProc<PFNGLDETACHSHADERPROC>("glDetachShader");
			DisableVertexAttribArray = GetProc<PFNGLDISABLEVERTEXATTRIBARRAYPROC>("glDisableVertexAttribArray");
			EnableVertexAttribArray = GetProc<PFNGLENABLEVERTEXATTRIBARRAYPROC>("glEnableVertexAttribArray");
			GetActiveAttrib = GetProc<PFNGLGETACTIVEATTRIBPROC>("glGetActiveAttrib");
			GetActiveUniform = GetProc<PFNGLGETACTIVEUNIFORMPROC>("glGetActiveUniform");
			GetAttachedShaders = GetProc<PFNGLGETATTACHEDSHADERSPROC>("glGetAttachedShaders");
			GetAttribLocation = GetProc<PFNGLGETATTRIBLOCATIONPROC>("glGetAttribLocation");
			GetProgramiv = GetProc<PFNGLGETPROGRAMIVPROC>("glGetProgramiv");
			GetProgramInfoLog = GetProc<PFNGLGETPROGRAMINFOLOGPROC>("glGetProgramInfoLog");
			GetShaderiv = GetProc<PFNGLGETSHADERIVPROC>("glGetShaderiv");
			GetShaderInfoLog = GetProc<PFNGLGETSHADERINFOLOGPROC>("glGetShaderInfoLog");
			GetShaderSource = GetProc<PFNGLGETSHADERSOURCEPROC>("glGetShaderSource");
			GetUniformLocation = GetProc<PFNGLGETUNIFORMLOCATIONPROC>("glGetUniformLocation");
			GetUniformfv = GetProc<PFNGLGETUNIFORMFVPROC>("glGetUniformfv");
			GetUniformiv = GetProc<PFNGLGETUNIFORMIVPROC>("glGetUniformiv");
			GetVertexAttribdv = GetProc<PFNGLGETVERTEXATTRIBDVPROC>("glGetVertexAttribdv");
			GetVertexAttribfv = GetProc<PFNGLGETVERTEXATTRIBFVPROC>("glGetVertexAttribfv");
			GetVertexAttribiv = GetProc<PFNGLGETVERTEXATTRIBIVPROC>("glGetVertexAttribiv");
			GetVertexAttribPointerv = GetProc<PFNGLGETVERTEXATTRIBPOINTERVPROC>("glGetVertexAttribPointerv");
			IsProgram = GetProc<PFNGLISPROGRAMPROC>("glIsProgram");
			IsShader = GetProc<PFNGLISSHADERPROC>("glIsShader");
			LinkProgram = GetProc<PFNGLLINKPROGRAMPROC>("glLinkProgram");
			ShaderSource = GetProc<PFNGLSHADERSOURCEPROC>("glShaderSource");
			UseProgram = GetProc<PFNGLUSEPROGRAMPROC>("glUseProgram");
			Uniform1f = GetProc<PFNGLUNIFORM1FPROC>("glUniform1f");
			Uniform2f = GetProc<PFNGLUNIFORM2FPROC>("glUniform2f");
			Uniform3f = GetProc<PFNGLUNIFORM3FPROC>("glUniform3f");
			Uniform4f = GetProc<PFNGLUNIFORM4FPROC>("glUniform4f");
			Uniform1i = GetProc<PFNGLUNIFORM1IPROC>("glUniform1i");
			Uniform2i = GetProc<PFNGLUNIFORM2IPROC>("glUniform2i");
			Uniform3i = GetProc<PFNGLUNIFORM3IPROC>("glUniform3i");
			Uniform4i = GetProc<PFNGLUNIFORM4IPROC>("glUniform4i");
			Uniform1fv = GetProc<PFNGLUNIFORM1FVPROC>("glUniform1fv");
			Uniform2fv = GetProc<PFNGLUNIFORM2FVPROC>("glUniform2fv");
			Uniform3fv = GetProc<PFNGLUNIFORM3FVPROC>("glUniform3fv");
			Uniform4fv = GetProc<PFNGLUNIFORM4FVPROC>("glUniform4fv");
			Uniform1iv = GetProc<PFNGLUNIFORM1IVPROC>("glUniform1iv");
			Uniform2iv = GetProc<PFNGLUNIFORM2IVPROC>("glUniform2iv");
			Uniform3iv = GetProc<PFNGLUNIFORM3IVPROC>("glUniform3iv");
			Uniform4iv = GetProc<PFNGLUNIFORM4IVPROC>("glUniform4iv");
			UniformMatrix2fv = GetProc<PFNGLUNIFORMMATRIX2FVPROC>("glUniformMatrix2fv");
			UniformMatrix3fv = GetProc<PFNGLUNIFORMMATRIX3FVPROC>("glUniformMatrix3fv");
			UniformMatrix4fv = GetProc<PFNGLUNIFORMMATRIX4FVPROC>("glUniformMatrix4fv");
			ValidateProgram = GetProc<PFNGLVALIDATEPROGRAMPROC>("glValidateProgram");
			VertexAttrib1d = GetProc<PFNGLVERTEXATTRIB1DPROC>("glVertexAttrib1d");
			VertexAttrib1dv = GetProc<PFNGLVERTEXATTRIB1DVPROC>("glVertexAttrib1dv");
			VertexAttrib1f = GetProc<PFNGLVERTEXATTRIB1FPROC>("glVertexAttrib1f");
			VertexAttrib1fv = GetProc<PFNGLVERTEXATTRIB1FVPROC>("glVertexAttrib1fv");
			VertexAttrib1s = GetProc<PFNGLVERTEXATTRIB1SPROC>("glVertexAttrib1s");
			VertexAttrib1sv = GetProc<PFNGLVERTEXATTRIB1SVPROC>("glVertexAttrib1sv");
			VertexAttrib2d = GetProc<PFNGLVERTEXATTRIB2DPROC>("glVertexAttrib2d");
			VertexAttrib2dv = GetProc<PFNGLVERTEXATTRIB2DVPROC>("glVertexAttrib2dv");
			VertexAttrib2f = GetProc<PFNGLVERTEXATTRIB2FPROC>("glVertexAttrib2f");
			VertexAttrib2fv = GetProc<PFNGLVERTEXATTRIB2FVPROC>("glVertexAttrib2fv");
			VertexAttrib2s = GetProc<PFNGLVERTEXATTRIB2SPROC>("glVertexAttrib2s");
			VertexAttrib2sv = GetProc<PFNGLVERTEXATTRIB2SVPROC>("glVertexAttrib2sv");
			VertexAttrib3d = GetProc<PFNGLVERTEXATTRIB3DPROC>("glVertexAttrib3d");
			VertexAttrib3dv = GetProc<PFNGLVERTEXATTRIB3DVPROC>("glVertexAttrib3dv");
			VertexAttrib3f = GetProc<PFNGLVERTEXATTRIB3FPROC>("glVertexAttrib3f");
			VertexAttrib3fv = GetProc<PFNGLVERTEXATTRIB3FVPROC>("glVertexAttrib3fv");
			VertexAttrib3s = GetProc<PFNGLVERTEXATTRIB3SPROC>("glVertexAttrib3s");
			VertexAttrib3sv = GetProc<PFNGLVERTEXATTRIB3SVPROC>("glVertexAttrib3sv");
			VertexAttrib4Nbv = GetProc<PFNGLVERTEXATTRIB4NBVPROC>("glVertexAttrib4Nbv");
			VertexAttrib4Niv = GetProc<PFNGLVERTEXATTRIB4NIVPROC>("glVertexAttrib4Niv");
			VertexAttrib4Nsv = GetProc<PFNGLVERTEXATTRIB4NSVPROC>("glVertexAttrib4Nsv");
			VertexAttrib4Nub = GetProc<PFNGLVERTEXATTRIB4NUBPROC>("glVertexAttrib4Nub");
			VertexAttrib4Nubv = GetProc<PFNGLVERTEXATTRIB4NUBVPROC>("glVertexAttrib4Nubv");
			VertexAttrib4Nuiv = GetProc<PFNGLVERTEXATTRIB4NUIVPROC>("glVertexAttrib4Nuiv");
			VertexAttrib4Nusv = GetProc<PFNGLVERTEXATTRIB4NUSVPROC>("glVertexAttrib4Nusv");
			VertexAttrib4bv = GetProc<PFNGLVERTEXATTRIB4BVPROC>("glVertexAttrib4bv");
			VertexAttrib4d = GetProc<PFNGLVERTEXATTRIB4DPROC>("glVertexAttrib4d");
			VertexAttrib4dv = GetProc<PFNGLVERTEXATTRIB4DVPROC>("glVertexAttrib4dv");
			VertexAttrib4f = GetProc<PFNGLVERTEXATTRIB4FPROC>("glVertexAttrib4f");
			VertexAttrib4fv = GetProc<PFNGLVERTEXATTRIB4FVPROC>("glVertexAttrib4fv");
			VertexAttrib4iv = GetProc<PFNGLVERTEXATTRIB4IVPROC>("glVertexAttrib4iv");
			VertexAttrib4s = GetProc<PFNGLVERTEXATTRIB4SPROC>("glVertexAttrib4s");
			VertexAttrib4sv = GetProc<PFNGLVERTEXATTRIB4SVPROC>("glVertexAttrib4sv");
			VertexAttrib4ubv = GetProc<PFNGLVERTEXATTRIB4UBVPROC>("glVertexAttrib4ubv");
			VertexAttrib4uiv = GetProc<PFNGLVERTEXATTRIB4UIVPROC>("glVertexAttrib4uiv");
			VertexAttrib4usv = GetProc<PFNGLVERTEXATTRIB4USVPROC>("glVertexAttrib4usv");
			VertexAttribPointer = GetProc<PFNGLVERTEXATTRIBPOINTERPROC>("glVertexAttribPointer");
			ShadingLanguageVersion = (const char*)GetString(SHADING_LANGUAGE_VERSION);
		}
		catch (const NullFuncPtrException&)
		{
			Available = false;
		}
	}


	static void APIENTRY Null_glUniformMatrix2x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformMatrix3x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformMatrix2x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformMatrix4x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformMatrix3x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformMatrix4x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	Version21::Version21(Func_GetProcAddress GetProcAddress):
		Version20(GetProcAddress),
		UniformMatrix2x3fv(Null_glUniformMatrix2x3fv),
		UniformMatrix3x2fv(Null_glUniformMatrix3x2fv),
		UniformMatrix2x4fv(Null_glUniformMatrix2x4fv),
		UniformMatrix4x2fv(Null_glUniformMatrix4x2fv),
		UniformMatrix3x4fv(Null_glUniformMatrix3x4fv),
		UniformMatrix4x3fv(Null_glUniformMatrix4x3fv)
	{
		Available = Ver_Major > 2 || (Ver_Major == 2 && (Ver_Minor > 1 || (Ver_Minor == 1 && Ver_Release >= 0)));
		try
		{
			UniformMatrix2x3fv = GetProc<PFNGLUNIFORMMATRIX2X3FVPROC>("glUniformMatrix2x3fv");
			UniformMatrix3x2fv = GetProc<PFNGLUNIFORMMATRIX3X2FVPROC>("glUniformMatrix3x2fv");
			UniformMatrix2x4fv = GetProc<PFNGLUNIFORMMATRIX2X4FVPROC>("glUniformMatrix2x4fv");
			UniformMatrix4x2fv = GetProc<PFNGLUNIFORMMATRIX4X2FVPROC>("glUniformMatrix4x2fv");
			UniformMatrix3x4fv = GetProc<PFNGLUNIFORMMATRIX3X4FVPROC>("glUniformMatrix3x4fv");
			UniformMatrix4x3fv = GetProc<PFNGLUNIFORMMATRIX4X3FVPROC>("glUniformMatrix4x3fv");
		}
		catch (const NullFuncPtrException&)
		{
			Available = false;
		}
	}


	static void APIENTRY Null_glColorMaski (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a){ NullFuncPtr(); }
	static void APIENTRY Null_glGetBooleani_v (GLenum target, GLuint index, GLboolean* data){ NullFuncPtr(); }
	static void APIENTRY Null_glGetIntegeri_v (GLenum target, GLuint index, GLint* data){ NullFuncPtr(); }
	static void APIENTRY Null_glEnablei (GLenum target, GLuint index){ NullFuncPtr(); }
	static void APIENTRY Null_glDisablei (GLenum target, GLuint index){ NullFuncPtr(); }
	static GLboolean APIENTRY Null_glIsEnabledi (GLenum target, GLuint index){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glBeginTransformFeedback (GLenum primitiveMode){ NullFuncPtr(); }
	static void APIENTRY Null_glEndTransformFeedback (void){ NullFuncPtr(); }
	static void APIENTRY Null_glBindBufferRange (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size){ NullFuncPtr(); }
	static void APIENTRY Null_glBindBufferBase (GLenum target, GLuint index, GLuint buffer){ NullFuncPtr(); }
	static void APIENTRY Null_glTransformFeedbackVaryings (GLuint program, GLsizei count, const GLchar* const* varyings, GLenum bufferMode){ NullFuncPtr(); }
	static void APIENTRY Null_glGetTransformFeedbackVarying (GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLsizei* size, GLenum* type, GLchar* name){ NullFuncPtr(); }
	static void APIENTRY Null_glClampColor (GLenum target, GLenum clamp){ NullFuncPtr(); }
	static void APIENTRY Null_glBeginConditionalRender (GLuint id, GLenum mode){ NullFuncPtr(); }
	static void APIENTRY Null_glEndConditionalRender (void){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribIPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void* pointer){ NullFuncPtr(); }
	static void APIENTRY Null_glGetVertexAttribIiv (GLuint index, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetVertexAttribIuiv (GLuint index, GLenum pname, GLuint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribI1i (GLuint index, GLint x){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribI2i (GLuint index, GLint x, GLint y){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribI3i (GLuint index, GLint x, GLint y, GLint z){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribI4i (GLuint index, GLint x, GLint y, GLint z, GLint w){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribI1ui (GLuint index, GLuint x){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribI2ui (GLuint index, GLuint x, GLuint y){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribI3ui (GLuint index, GLuint x, GLuint y, GLuint z){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribI4ui (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribI1iv (GLuint index, const GLint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribI2iv (GLuint index, const GLint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribI3iv (GLuint index, const GLint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribI4iv (GLuint index, const GLint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribI1uiv (GLuint index, const GLuint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribI2uiv (GLuint index, const GLuint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribI3uiv (GLuint index, const GLuint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribI4uiv (GLuint index, const GLuint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribI4bv (GLuint index, const GLbyte* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribI4sv (GLuint index, const GLshort* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribI4ubv (GLuint index, const GLubyte* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribI4usv (GLuint index, const GLushort* v){ NullFuncPtr(); }
	static void APIENTRY Null_glGetUniformuiv (GLuint program, GLint location, GLuint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glBindFragDataLocation (GLuint program, GLuint color, const GLchar* name){ NullFuncPtr(); }
	static GLint APIENTRY Null_glGetFragDataLocation (GLuint program, const GLchar* name){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glUniform1ui (GLint location, GLuint v0){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform2ui (GLint location, GLuint v0, GLuint v1){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform3ui (GLint location, GLuint v0, GLuint v1, GLuint v2){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform4ui (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform1uiv (GLint location, GLsizei count, const GLuint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform2uiv (GLint location, GLsizei count, const GLuint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform3uiv (GLint location, GLsizei count, const GLuint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform4uiv (GLint location, GLsizei count, const GLuint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glTexParameterIiv (GLenum target, GLenum pname, const GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glTexParameterIuiv (GLenum target, GLenum pname, const GLuint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetTexParameterIiv (GLenum target, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetTexParameterIuiv (GLenum target, GLenum pname, GLuint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glClearBufferiv (GLenum buffer, GLint drawbuffer, const GLint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glClearBufferuiv (GLenum buffer, GLint drawbuffer, const GLuint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glClearBufferfv (GLenum buffer, GLint drawbuffer, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glClearBufferfi (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil){ NullFuncPtr(); }
	static const GLubyte* APIENTRY Null_glGetStringi (GLenum name, GLuint index){ NullFuncPtr(); return NULL; }
	static GLboolean APIENTRY Null_glIsRenderbuffer (GLuint renderbuffer){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glBindRenderbuffer (GLenum target, GLuint renderbuffer){ NullFuncPtr(); }
	static void APIENTRY Null_glDeleteRenderbuffers (GLsizei n, const GLuint* renderbuffers){ NullFuncPtr(); }
	static void APIENTRY Null_glGenRenderbuffers (GLsizei n, GLuint* renderbuffers){ NullFuncPtr(); }
	static void APIENTRY Null_glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height){ NullFuncPtr(); }
	static void APIENTRY Null_glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint* params){ NullFuncPtr(); }
	static GLboolean APIENTRY Null_glIsFramebuffer (GLuint framebuffer){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glBindFramebuffer (GLenum target, GLuint framebuffer){ NullFuncPtr(); }
	static void APIENTRY Null_glDeleteFramebuffers (GLsizei n, const GLuint* framebuffers){ NullFuncPtr(); }
	static void APIENTRY Null_glGenFramebuffers (GLsizei n, GLuint* framebuffers){ NullFuncPtr(); }
	static GLenum APIENTRY Null_glCheckFramebufferStatus (GLenum target){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glFramebufferTexture1D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level){ NullFuncPtr(); }
	static void APIENTRY Null_glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level){ NullFuncPtr(); }
	static void APIENTRY Null_glFramebufferTexture3D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset){ NullFuncPtr(); }
	static void APIENTRY Null_glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer){ NullFuncPtr(); }
	static void APIENTRY Null_glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGenerateMipmap (GLenum target){ NullFuncPtr(); }
	static void APIENTRY Null_glBlitFramebuffer (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter){ NullFuncPtr(); }
	static void APIENTRY Null_glRenderbufferStorageMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height){ NullFuncPtr(); }
	static void APIENTRY Null_glFramebufferTextureLayer (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer){ NullFuncPtr(); }
	static void* APIENTRY Null_glMapBufferRange (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glFlushMappedBufferRange (GLenum target, GLintptr offset, GLsizeiptr length){ NullFuncPtr(); }
	static void APIENTRY Null_glBindVertexArray (GLuint array){ NullFuncPtr(); }
	static void APIENTRY Null_glDeleteVertexArrays (GLsizei n, const GLuint* arrays){ NullFuncPtr(); }
	static void APIENTRY Null_glGenVertexArrays (GLsizei n, GLuint* arrays){ NullFuncPtr(); }
	static GLboolean APIENTRY Null_glIsVertexArray (GLuint array){ NullFuncPtr(); return NULL; }
	Version30::Version30(Func_GetProcAddress GetProcAddress):
		Version21(GetProcAddress),
		ColorMaski(Null_glColorMaski),
		GetBooleani_v(Null_glGetBooleani_v),
		GetIntegeri_v(Null_glGetIntegeri_v),
		Enablei(Null_glEnablei),
		Disablei(Null_glDisablei),
		IsEnabledi(Null_glIsEnabledi),
		BeginTransformFeedback(Null_glBeginTransformFeedback),
		EndTransformFeedback(Null_glEndTransformFeedback),
		BindBufferRange(Null_glBindBufferRange),
		BindBufferBase(Null_glBindBufferBase),
		TransformFeedbackVaryings(Null_glTransformFeedbackVaryings),
		GetTransformFeedbackVarying(Null_glGetTransformFeedbackVarying),
		ClampColor(Null_glClampColor),
		BeginConditionalRender(Null_glBeginConditionalRender),
		EndConditionalRender(Null_glEndConditionalRender),
		VertexAttribIPointer(Null_glVertexAttribIPointer),
		GetVertexAttribIiv(Null_glGetVertexAttribIiv),
		GetVertexAttribIuiv(Null_glGetVertexAttribIuiv),
		VertexAttribI1i(Null_glVertexAttribI1i),
		VertexAttribI2i(Null_glVertexAttribI2i),
		VertexAttribI3i(Null_glVertexAttribI3i),
		VertexAttribI4i(Null_glVertexAttribI4i),
		VertexAttribI1ui(Null_glVertexAttribI1ui),
		VertexAttribI2ui(Null_glVertexAttribI2ui),
		VertexAttribI3ui(Null_glVertexAttribI3ui),
		VertexAttribI4ui(Null_glVertexAttribI4ui),
		VertexAttribI1iv(Null_glVertexAttribI1iv),
		VertexAttribI2iv(Null_glVertexAttribI2iv),
		VertexAttribI3iv(Null_glVertexAttribI3iv),
		VertexAttribI4iv(Null_glVertexAttribI4iv),
		VertexAttribI1uiv(Null_glVertexAttribI1uiv),
		VertexAttribI2uiv(Null_glVertexAttribI2uiv),
		VertexAttribI3uiv(Null_glVertexAttribI3uiv),
		VertexAttribI4uiv(Null_glVertexAttribI4uiv),
		VertexAttribI4bv(Null_glVertexAttribI4bv),
		VertexAttribI4sv(Null_glVertexAttribI4sv),
		VertexAttribI4ubv(Null_glVertexAttribI4ubv),
		VertexAttribI4usv(Null_glVertexAttribI4usv),
		GetUniformuiv(Null_glGetUniformuiv),
		BindFragDataLocation(Null_glBindFragDataLocation),
		GetFragDataLocation(Null_glGetFragDataLocation),
		Uniform1ui(Null_glUniform1ui),
		Uniform2ui(Null_glUniform2ui),
		Uniform3ui(Null_glUniform3ui),
		Uniform4ui(Null_glUniform4ui),
		Uniform1uiv(Null_glUniform1uiv),
		Uniform2uiv(Null_glUniform2uiv),
		Uniform3uiv(Null_glUniform3uiv),
		Uniform4uiv(Null_glUniform4uiv),
		TexParameterIiv(Null_glTexParameterIiv),
		TexParameterIuiv(Null_glTexParameterIuiv),
		GetTexParameterIiv(Null_glGetTexParameterIiv),
		GetTexParameterIuiv(Null_glGetTexParameterIuiv),
		ClearBufferiv(Null_glClearBufferiv),
		ClearBufferuiv(Null_glClearBufferuiv),
		ClearBufferfv(Null_glClearBufferfv),
		ClearBufferfi(Null_glClearBufferfi),
		GetStringi(Null_glGetStringi),
		IsRenderbuffer(Null_glIsRenderbuffer),
		BindRenderbuffer(Null_glBindRenderbuffer),
		DeleteRenderbuffers(Null_glDeleteRenderbuffers),
		GenRenderbuffers(Null_glGenRenderbuffers),
		RenderbufferStorage(Null_glRenderbufferStorage),
		GetRenderbufferParameteriv(Null_glGetRenderbufferParameteriv),
		IsFramebuffer(Null_glIsFramebuffer),
		BindFramebuffer(Null_glBindFramebuffer),
		DeleteFramebuffers(Null_glDeleteFramebuffers),
		GenFramebuffers(Null_glGenFramebuffers),
		CheckFramebufferStatus(Null_glCheckFramebufferStatus),
		FramebufferTexture1D(Null_glFramebufferTexture1D),
		FramebufferTexture2D(Null_glFramebufferTexture2D),
		FramebufferTexture3D(Null_glFramebufferTexture3D),
		FramebufferRenderbuffer(Null_glFramebufferRenderbuffer),
		GetFramebufferAttachmentParameteriv(Null_glGetFramebufferAttachmentParameteriv),
		GenerateMipmap(Null_glGenerateMipmap),
		BlitFramebuffer(Null_glBlitFramebuffer),
		RenderbufferStorageMultisample(Null_glRenderbufferStorageMultisample),
		FramebufferTextureLayer(Null_glFramebufferTextureLayer),
		MapBufferRange(Null_glMapBufferRange),
		FlushMappedBufferRange(Null_glFlushMappedBufferRange),
		BindVertexArray(Null_glBindVertexArray),
		DeleteVertexArrays(Null_glDeleteVertexArrays),
		GenVertexArrays(Null_glGenVertexArrays),
		IsVertexArray(Null_glIsVertexArray)
	{
		Available = Ver_Major > 3 || (Ver_Major == 3 && (Ver_Minor > 0 || (Ver_Minor == 0 && Ver_Release >= 0)));
		try
		{
			ColorMaski = GetProc<PFNGLCOLORMASKIPROC>("glColorMaski");
			GetBooleani_v = GetProc<PFNGLGETBOOLEANI_VPROC>("glGetBooleani_v");
			GetIntegeri_v = GetProc<PFNGLGETINTEGERI_VPROC>("glGetIntegeri_v");
			Enablei = GetProc<PFNGLENABLEIPROC>("glEnablei");
			Disablei = GetProc<PFNGLDISABLEIPROC>("glDisablei");
			IsEnabledi = GetProc<PFNGLISENABLEDIPROC>("glIsEnabledi");
			BeginTransformFeedback = GetProc<PFNGLBEGINTRANSFORMFEEDBACKPROC>("glBeginTransformFeedback");
			EndTransformFeedback = GetProc<PFNGLENDTRANSFORMFEEDBACKPROC>("glEndTransformFeedback");
			BindBufferRange = GetProc<PFNGLBINDBUFFERRANGEPROC>("glBindBufferRange");
			BindBufferBase = GetProc<PFNGLBINDBUFFERBASEPROC>("glBindBufferBase");
			TransformFeedbackVaryings = GetProc<PFNGLTRANSFORMFEEDBACKVARYINGSPROC>("glTransformFeedbackVaryings");
			GetTransformFeedbackVarying = GetProc<PFNGLGETTRANSFORMFEEDBACKVARYINGPROC>("glGetTransformFeedbackVarying");
			ClampColor = GetProc<PFNGLCLAMPCOLORPROC>("glClampColor");
			BeginConditionalRender = GetProc<PFNGLBEGINCONDITIONALRENDERPROC>("glBeginConditionalRender");
			EndConditionalRender = GetProc<PFNGLENDCONDITIONALRENDERPROC>("glEndConditionalRender");
			VertexAttribIPointer = GetProc<PFNGLVERTEXATTRIBIPOINTERPROC>("glVertexAttribIPointer");
			GetVertexAttribIiv = GetProc<PFNGLGETVERTEXATTRIBIIVPROC>("glGetVertexAttribIiv");
			GetVertexAttribIuiv = GetProc<PFNGLGETVERTEXATTRIBIUIVPROC>("glGetVertexAttribIuiv");
			VertexAttribI1i = GetProc<PFNGLVERTEXATTRIBI1IPROC>("glVertexAttribI1i");
			VertexAttribI2i = GetProc<PFNGLVERTEXATTRIBI2IPROC>("glVertexAttribI2i");
			VertexAttribI3i = GetProc<PFNGLVERTEXATTRIBI3IPROC>("glVertexAttribI3i");
			VertexAttribI4i = GetProc<PFNGLVERTEXATTRIBI4IPROC>("glVertexAttribI4i");
			VertexAttribI1ui = GetProc<PFNGLVERTEXATTRIBI1UIPROC>("glVertexAttribI1ui");
			VertexAttribI2ui = GetProc<PFNGLVERTEXATTRIBI2UIPROC>("glVertexAttribI2ui");
			VertexAttribI3ui = GetProc<PFNGLVERTEXATTRIBI3UIPROC>("glVertexAttribI3ui");
			VertexAttribI4ui = GetProc<PFNGLVERTEXATTRIBI4UIPROC>("glVertexAttribI4ui");
			VertexAttribI1iv = GetProc<PFNGLVERTEXATTRIBI1IVPROC>("glVertexAttribI1iv");
			VertexAttribI2iv = GetProc<PFNGLVERTEXATTRIBI2IVPROC>("glVertexAttribI2iv");
			VertexAttribI3iv = GetProc<PFNGLVERTEXATTRIBI3IVPROC>("glVertexAttribI3iv");
			VertexAttribI4iv = GetProc<PFNGLVERTEXATTRIBI4IVPROC>("glVertexAttribI4iv");
			VertexAttribI1uiv = GetProc<PFNGLVERTEXATTRIBI1UIVPROC>("glVertexAttribI1uiv");
			VertexAttribI2uiv = GetProc<PFNGLVERTEXATTRIBI2UIVPROC>("glVertexAttribI2uiv");
			VertexAttribI3uiv = GetProc<PFNGLVERTEXATTRIBI3UIVPROC>("glVertexAttribI3uiv");
			VertexAttribI4uiv = GetProc<PFNGLVERTEXATTRIBI4UIVPROC>("glVertexAttribI4uiv");
			VertexAttribI4bv = GetProc<PFNGLVERTEXATTRIBI4BVPROC>("glVertexAttribI4bv");
			VertexAttribI4sv = GetProc<PFNGLVERTEXATTRIBI4SVPROC>("glVertexAttribI4sv");
			VertexAttribI4ubv = GetProc<PFNGLVERTEXATTRIBI4UBVPROC>("glVertexAttribI4ubv");
			VertexAttribI4usv = GetProc<PFNGLVERTEXATTRIBI4USVPROC>("glVertexAttribI4usv");
			GetUniformuiv = GetProc<PFNGLGETUNIFORMUIVPROC>("glGetUniformuiv");
			BindFragDataLocation = GetProc<PFNGLBINDFRAGDATALOCATIONPROC>("glBindFragDataLocation");
			GetFragDataLocation = GetProc<PFNGLGETFRAGDATALOCATIONPROC>("glGetFragDataLocation");
			Uniform1ui = GetProc<PFNGLUNIFORM1UIPROC>("glUniform1ui");
			Uniform2ui = GetProc<PFNGLUNIFORM2UIPROC>("glUniform2ui");
			Uniform3ui = GetProc<PFNGLUNIFORM3UIPROC>("glUniform3ui");
			Uniform4ui = GetProc<PFNGLUNIFORM4UIPROC>("glUniform4ui");
			Uniform1uiv = GetProc<PFNGLUNIFORM1UIVPROC>("glUniform1uiv");
			Uniform2uiv = GetProc<PFNGLUNIFORM2UIVPROC>("glUniform2uiv");
			Uniform3uiv = GetProc<PFNGLUNIFORM3UIVPROC>("glUniform3uiv");
			Uniform4uiv = GetProc<PFNGLUNIFORM4UIVPROC>("glUniform4uiv");
			TexParameterIiv = GetProc<PFNGLTEXPARAMETERIIVPROC>("glTexParameterIiv");
			TexParameterIuiv = GetProc<PFNGLTEXPARAMETERIUIVPROC>("glTexParameterIuiv");
			GetTexParameterIiv = GetProc<PFNGLGETTEXPARAMETERIIVPROC>("glGetTexParameterIiv");
			GetTexParameterIuiv = GetProc<PFNGLGETTEXPARAMETERIUIVPROC>("glGetTexParameterIuiv");
			ClearBufferiv = GetProc<PFNGLCLEARBUFFERIVPROC>("glClearBufferiv");
			ClearBufferuiv = GetProc<PFNGLCLEARBUFFERUIVPROC>("glClearBufferuiv");
			ClearBufferfv = GetProc<PFNGLCLEARBUFFERFVPROC>("glClearBufferfv");
			ClearBufferfi = GetProc<PFNGLCLEARBUFFERFIPROC>("glClearBufferfi");
			GetStringi = GetProc<PFNGLGETSTRINGIPROC>("glGetStringi");
			IsRenderbuffer = GetProc<PFNGLISRENDERBUFFERPROC>("glIsRenderbuffer");
			BindRenderbuffer = GetProc<PFNGLBINDRENDERBUFFERPROC>("glBindRenderbuffer");
			DeleteRenderbuffers = GetProc<PFNGLDELETERENDERBUFFERSPROC>("glDeleteRenderbuffers");
			GenRenderbuffers = GetProc<PFNGLGENRENDERBUFFERSPROC>("glGenRenderbuffers");
			RenderbufferStorage = GetProc<PFNGLRENDERBUFFERSTORAGEPROC>("glRenderbufferStorage");
			GetRenderbufferParameteriv = GetProc<PFNGLGETRENDERBUFFERPARAMETERIVPROC>("glGetRenderbufferParameteriv");
			IsFramebuffer = GetProc<PFNGLISFRAMEBUFFERPROC>("glIsFramebuffer");
			BindFramebuffer = GetProc<PFNGLBINDFRAMEBUFFERPROC>("glBindFramebuffer");
			DeleteFramebuffers = GetProc<PFNGLDELETEFRAMEBUFFERSPROC>("glDeleteFramebuffers");
			GenFramebuffers = GetProc<PFNGLGENFRAMEBUFFERSPROC>("glGenFramebuffers");
			CheckFramebufferStatus = GetProc<PFNGLCHECKFRAMEBUFFERSTATUSPROC>("glCheckFramebufferStatus");
			FramebufferTexture1D = GetProc<PFNGLFRAMEBUFFERTEXTURE1DPROC>("glFramebufferTexture1D");
			FramebufferTexture2D = GetProc<PFNGLFRAMEBUFFERTEXTURE2DPROC>("glFramebufferTexture2D");
			FramebufferTexture3D = GetProc<PFNGLFRAMEBUFFERTEXTURE3DPROC>("glFramebufferTexture3D");
			FramebufferRenderbuffer = GetProc<PFNGLFRAMEBUFFERRENDERBUFFERPROC>("glFramebufferRenderbuffer");
			GetFramebufferAttachmentParameteriv = GetProc<PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC>("glGetFramebufferAttachmentParameteriv");
			GenerateMipmap = GetProc<PFNGLGENERATEMIPMAPPROC>("glGenerateMipmap");
			BlitFramebuffer = GetProc<PFNGLBLITFRAMEBUFFERPROC>("glBlitFramebuffer");
			RenderbufferStorageMultisample = GetProc<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC>("glRenderbufferStorageMultisample");
			FramebufferTextureLayer = GetProc<PFNGLFRAMEBUFFERTEXTURELAYERPROC>("glFramebufferTextureLayer");
			MapBufferRange = GetProc<PFNGLMAPBUFFERRANGEPROC>("glMapBufferRange");
			FlushMappedBufferRange = GetProc<PFNGLFLUSHMAPPEDBUFFERRANGEPROC>("glFlushMappedBufferRange");
			BindVertexArray = GetProc<PFNGLBINDVERTEXARRAYPROC>("glBindVertexArray");
			DeleteVertexArrays = GetProc<PFNGLDELETEVERTEXARRAYSPROC>("glDeleteVertexArrays");
			GenVertexArrays = GetProc<PFNGLGENVERTEXARRAYSPROC>("glGenVertexArrays");
			IsVertexArray = GetProc<PFNGLISVERTEXARRAYPROC>("glIsVertexArray");
		}
		catch (const NullFuncPtrException&)
		{
			Available = false;
		}
	}


	static void APIENTRY Null_glDrawArraysInstanced (GLenum mode, GLint first, GLsizei count, GLsizei instancecount){ NullFuncPtr(); }
	static void APIENTRY Null_glDrawElementsInstanced (GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instancecount){ NullFuncPtr(); }
	static void APIENTRY Null_glTexBuffer (GLenum target, GLenum internalformat, GLuint buffer){ NullFuncPtr(); }
	static void APIENTRY Null_glPrimitiveRestartIndex (GLuint index){ NullFuncPtr(); }
	static void APIENTRY Null_glCopyBufferSubData (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size){ NullFuncPtr(); }
	static void APIENTRY Null_glGetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar* const* uniformNames, GLuint* uniformIndices){ NullFuncPtr(); }
	static void APIENTRY Null_glGetActiveUniformsiv (GLuint program, GLsizei uniformCount, const GLuint* uniformIndices, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetActiveUniformName (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformName){ NullFuncPtr(); }
	static GLuint APIENTRY Null_glGetUniformBlockIndex (GLuint program, const GLchar* uniformBlockName){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glGetActiveUniformBlockiv (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetActiveUniformBlockName (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformBlockName){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformBlockBinding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding){ NullFuncPtr(); }
	Version31::Version31(Func_GetProcAddress GetProcAddress):
		Version30(GetProcAddress),
		DrawArraysInstanced(Null_glDrawArraysInstanced),
		DrawElementsInstanced(Null_glDrawElementsInstanced),
		TexBuffer(Null_glTexBuffer),
		PrimitiveRestartIndex(Null_glPrimitiveRestartIndex),
		CopyBufferSubData(Null_glCopyBufferSubData),
		GetUniformIndices(Null_glGetUniformIndices),
		GetActiveUniformsiv(Null_glGetActiveUniformsiv),
		GetActiveUniformName(Null_glGetActiveUniformName),
		GetUniformBlockIndex(Null_glGetUniformBlockIndex),
		GetActiveUniformBlockiv(Null_glGetActiveUniformBlockiv),
		GetActiveUniformBlockName(Null_glGetActiveUniformBlockName),
		UniformBlockBinding(Null_glUniformBlockBinding)
	{
		Available = Ver_Major > 3 || (Ver_Major == 3 && (Ver_Minor > 1 || (Ver_Minor == 1 && Ver_Release >= 0)));
		try
		{
			DrawArraysInstanced = GetProc<PFNGLDRAWARRAYSINSTANCEDPROC>("glDrawArraysInstanced");
			DrawElementsInstanced = GetProc<PFNGLDRAWELEMENTSINSTANCEDPROC>("glDrawElementsInstanced");
			TexBuffer = GetProc<PFNGLTEXBUFFERPROC>("glTexBuffer");
			PrimitiveRestartIndex = GetProc<PFNGLPRIMITIVERESTARTINDEXPROC>("glPrimitiveRestartIndex");
			CopyBufferSubData = GetProc<PFNGLCOPYBUFFERSUBDATAPROC>("glCopyBufferSubData");
			GetUniformIndices = GetProc<PFNGLGETUNIFORMINDICESPROC>("glGetUniformIndices");
			GetActiveUniformsiv = GetProc<PFNGLGETACTIVEUNIFORMSIVPROC>("glGetActiveUniformsiv");
			GetActiveUniformName = GetProc<PFNGLGETACTIVEUNIFORMNAMEPROC>("glGetActiveUniformName");
			GetUniformBlockIndex = GetProc<PFNGLGETUNIFORMBLOCKINDEXPROC>("glGetUniformBlockIndex");
			GetActiveUniformBlockiv = GetProc<PFNGLGETACTIVEUNIFORMBLOCKIVPROC>("glGetActiveUniformBlockiv");
			GetActiveUniformBlockName = GetProc<PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC>("glGetActiveUniformBlockName");
			UniformBlockBinding = GetProc<PFNGLUNIFORMBLOCKBINDINGPROC>("glUniformBlockBinding");
		}
		catch (const NullFuncPtrException&)
		{
			Available = false;
		}
	}


	static void APIENTRY Null_glDrawElementsBaseVertex (GLenum mode, GLsizei count, GLenum type, const void* indices, GLint basevertex){ NullFuncPtr(); }
	static void APIENTRY Null_glDrawRangeElementsBaseVertex (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void* indices, GLint basevertex){ NullFuncPtr(); }
	static void APIENTRY Null_glDrawElementsInstancedBaseVertex (GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instancecount, GLint basevertex){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiDrawElementsBaseVertex (GLenum mode, const GLsizei* count, GLenum type, const void* const* indices, GLsizei drawcount, const GLint* basevertex){ NullFuncPtr(); }
	static void APIENTRY Null_glProvokingVertex (GLenum mode){ NullFuncPtr(); }
	static GLsync APIENTRY Null_glFenceSync (GLenum condition, GLbitfield flags){ NullFuncPtr(); return NULL; }
	static GLboolean APIENTRY Null_glIsSync (GLsync sync){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glDeleteSync (GLsync sync){ NullFuncPtr(); }
	static GLenum APIENTRY Null_glClientWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout){ NullFuncPtr(); }
	static void APIENTRY Null_glGetInteger64v (GLenum pname, GLint64* data){ NullFuncPtr(); }
	static void APIENTRY Null_glGetSynciv (GLsync sync, GLenum pname, GLsizei count, GLsizei* length, GLint* values){ NullFuncPtr(); }
	static void APIENTRY Null_glGetInteger64i_v (GLenum target, GLuint index, GLint64* data){ NullFuncPtr(); }
	static void APIENTRY Null_glGetBufferParameteri64v (GLenum target, GLenum pname, GLint64* params){ NullFuncPtr(); }
	static void APIENTRY Null_glFramebufferTexture (GLenum target, GLenum attachment, GLuint texture, GLint level){ NullFuncPtr(); }
	static void APIENTRY Null_glTexImage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations){ NullFuncPtr(); }
	static void APIENTRY Null_glTexImage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations){ NullFuncPtr(); }
	static void APIENTRY Null_glGetMultisamplefv (GLenum pname, GLuint index, GLfloat* val){ NullFuncPtr(); }
	static void APIENTRY Null_glSampleMaski (GLuint maskNumber, GLbitfield mask){ NullFuncPtr(); }
	Version32::Version32(Func_GetProcAddress GetProcAddress):
		Version31(GetProcAddress),
		DrawElementsBaseVertex(Null_glDrawElementsBaseVertex),
		DrawRangeElementsBaseVertex(Null_glDrawRangeElementsBaseVertex),
		DrawElementsInstancedBaseVertex(Null_glDrawElementsInstancedBaseVertex),
		MultiDrawElementsBaseVertex(Null_glMultiDrawElementsBaseVertex),
		ProvokingVertex(Null_glProvokingVertex),
		FenceSync(Null_glFenceSync),
		IsSync(Null_glIsSync),
		DeleteSync(Null_glDeleteSync),
		ClientWaitSync(Null_glClientWaitSync),
		WaitSync(Null_glWaitSync),
		GetInteger64v(Null_glGetInteger64v),
		GetSynciv(Null_glGetSynciv),
		GetInteger64i_v(Null_glGetInteger64i_v),
		GetBufferParameteri64v(Null_glGetBufferParameteri64v),
		FramebufferTexture(Null_glFramebufferTexture),
		TexImage2DMultisample(Null_glTexImage2DMultisample),
		TexImage3DMultisample(Null_glTexImage3DMultisample),
		GetMultisamplefv(Null_glGetMultisamplefv),
		SampleMaski(Null_glSampleMaski)
	{
		Available = Ver_Major > 3 || (Ver_Major == 3 && (Ver_Minor > 2 || (Ver_Minor == 2 && Ver_Release >= 0)));
		try
		{
			DrawElementsBaseVertex = GetProc<PFNGLDRAWELEMENTSBASEVERTEXPROC>("glDrawElementsBaseVertex");
			DrawRangeElementsBaseVertex = GetProc<PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC>("glDrawRangeElementsBaseVertex");
			DrawElementsInstancedBaseVertex = GetProc<PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC>("glDrawElementsInstancedBaseVertex");
			MultiDrawElementsBaseVertex = GetProc<PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC>("glMultiDrawElementsBaseVertex");
			ProvokingVertex = GetProc<PFNGLPROVOKINGVERTEXPROC>("glProvokingVertex");
			FenceSync = GetProc<PFNGLFENCESYNCPROC>("glFenceSync");
			IsSync = GetProc<PFNGLISSYNCPROC>("glIsSync");
			DeleteSync = GetProc<PFNGLDELETESYNCPROC>("glDeleteSync");
			ClientWaitSync = GetProc<PFNGLCLIENTWAITSYNCPROC>("glClientWaitSync");
			WaitSync = GetProc<PFNGLWAITSYNCPROC>("glWaitSync");
			GetInteger64v = GetProc<PFNGLGETINTEGER64VPROC>("glGetInteger64v");
			GetSynciv = GetProc<PFNGLGETSYNCIVPROC>("glGetSynciv");
			GetInteger64i_v = GetProc<PFNGLGETINTEGER64I_VPROC>("glGetInteger64i_v");
			GetBufferParameteri64v = GetProc<PFNGLGETBUFFERPARAMETERI64VPROC>("glGetBufferParameteri64v");
			FramebufferTexture = GetProc<PFNGLFRAMEBUFFERTEXTUREPROC>("glFramebufferTexture");
			TexImage2DMultisample = GetProc<PFNGLTEXIMAGE2DMULTISAMPLEPROC>("glTexImage2DMultisample");
			TexImage3DMultisample = GetProc<PFNGLTEXIMAGE3DMULTISAMPLEPROC>("glTexImage3DMultisample");
			GetMultisamplefv = GetProc<PFNGLGETMULTISAMPLEFVPROC>("glGetMultisamplefv");
			SampleMaski = GetProc<PFNGLSAMPLEMASKIPROC>("glSampleMaski");
		}
		catch (const NullFuncPtrException&)
		{
			Available = false;
		}
	}


	static void APIENTRY Null_glBindFragDataLocationIndexed (GLuint program, GLuint colorNumber, GLuint index, const GLchar* name){ NullFuncPtr(); }
	static GLint APIENTRY Null_glGetFragDataIndex (GLuint program, const GLchar* name){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glGenSamplers (GLsizei count, GLuint* samplers){ NullFuncPtr(); }
	static void APIENTRY Null_glDeleteSamplers (GLsizei count, const GLuint* samplers){ NullFuncPtr(); }
	static GLboolean APIENTRY Null_glIsSampler (GLuint sampler){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glBindSampler (GLuint unit, GLuint sampler){ NullFuncPtr(); }
	static void APIENTRY Null_glSamplerParameteri (GLuint sampler, GLenum pname, GLint param){ NullFuncPtr(); }
	static void APIENTRY Null_glSamplerParameteriv (GLuint sampler, GLenum pname, const GLint* param){ NullFuncPtr(); }
	static void APIENTRY Null_glSamplerParameterf (GLuint sampler, GLenum pname, GLfloat param){ NullFuncPtr(); }
	static void APIENTRY Null_glSamplerParameterfv (GLuint sampler, GLenum pname, const GLfloat* param){ NullFuncPtr(); }
	static void APIENTRY Null_glSamplerParameterIiv (GLuint sampler, GLenum pname, const GLint* param){ NullFuncPtr(); }
	static void APIENTRY Null_glSamplerParameterIuiv (GLuint sampler, GLenum pname, const GLuint* param){ NullFuncPtr(); }
	static void APIENTRY Null_glGetSamplerParameteriv (GLuint sampler, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetSamplerParameterIiv (GLuint sampler, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetSamplerParameterfv (GLuint sampler, GLenum pname, GLfloat* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetSamplerParameterIuiv (GLuint sampler, GLenum pname, GLuint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glQueryCounter (GLuint id, GLenum target){ NullFuncPtr(); }
	static void APIENTRY Null_glGetQueryObjecti64v (GLuint id, GLenum pname, GLint64* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetQueryObjectui64v (GLuint id, GLenum pname, GLuint64* params){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribDivisor (GLuint index, GLuint divisor){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribP1ui (GLuint index, GLenum type, GLboolean normalized, GLuint value){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribP1uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribP2ui (GLuint index, GLenum type, GLboolean normalized, GLuint value){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribP2uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribP3ui (GLuint index, GLenum type, GLboolean normalized, GLuint value){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribP3uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribP4ui (GLuint index, GLenum type, GLboolean normalized, GLuint value){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribP4uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexP2ui (GLenum type, GLuint value){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexP2uiv (GLenum type, const GLuint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexP3ui (GLenum type, GLuint value){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexP3uiv (GLenum type, const GLuint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexP4ui (GLenum type, GLuint value){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexP4uiv (GLenum type, const GLuint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glTexCoordP1ui (GLenum type, GLuint coords){ NullFuncPtr(); }
	static void APIENTRY Null_glTexCoordP1uiv (GLenum type, const GLuint* coords){ NullFuncPtr(); }
	static void APIENTRY Null_glTexCoordP2ui (GLenum type, GLuint coords){ NullFuncPtr(); }
	static void APIENTRY Null_glTexCoordP2uiv (GLenum type, const GLuint* coords){ NullFuncPtr(); }
	static void APIENTRY Null_glTexCoordP3ui (GLenum type, GLuint coords){ NullFuncPtr(); }
	static void APIENTRY Null_glTexCoordP3uiv (GLenum type, const GLuint* coords){ NullFuncPtr(); }
	static void APIENTRY Null_glTexCoordP4ui (GLenum type, GLuint coords){ NullFuncPtr(); }
	static void APIENTRY Null_glTexCoordP4uiv (GLenum type, const GLuint* coords){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoordP1ui (GLenum texture, GLenum type, GLuint coords){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoordP1uiv (GLenum texture, GLenum type, const GLuint* coords){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoordP2ui (GLenum texture, GLenum type, GLuint coords){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoordP2uiv (GLenum texture, GLenum type, const GLuint* coords){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoordP3ui (GLenum texture, GLenum type, GLuint coords){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoordP3uiv (GLenum texture, GLenum type, const GLuint* coords){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoordP4ui (GLenum texture, GLenum type, GLuint coords){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiTexCoordP4uiv (GLenum texture, GLenum type, const GLuint* coords){ NullFuncPtr(); }
	static void APIENTRY Null_glNormalP3ui (GLenum type, GLuint coords){ NullFuncPtr(); }
	static void APIENTRY Null_glNormalP3uiv (GLenum type, const GLuint* coords){ NullFuncPtr(); }
	static void APIENTRY Null_glColorP3ui (GLenum type, GLuint color){ NullFuncPtr(); }
	static void APIENTRY Null_glColorP3uiv (GLenum type, const GLuint* color){ NullFuncPtr(); }
	static void APIENTRY Null_glColorP4ui (GLenum type, GLuint color){ NullFuncPtr(); }
	static void APIENTRY Null_glColorP4uiv (GLenum type, const GLuint* color){ NullFuncPtr(); }
	static void APIENTRY Null_glSecondaryColorP3ui (GLenum type, GLuint color){ NullFuncPtr(); }
	static void APIENTRY Null_glSecondaryColorP3uiv (GLenum type, const GLuint* color){ NullFuncPtr(); }
	Version33::Version33(Func_GetProcAddress GetProcAddress):
		Version32(GetProcAddress),
		BindFragDataLocationIndexed(Null_glBindFragDataLocationIndexed),
		GetFragDataIndex(Null_glGetFragDataIndex),
		GenSamplers(Null_glGenSamplers),
		DeleteSamplers(Null_glDeleteSamplers),
		IsSampler(Null_glIsSampler),
		BindSampler(Null_glBindSampler),
		SamplerParameteri(Null_glSamplerParameteri),
		SamplerParameteriv(Null_glSamplerParameteriv),
		SamplerParameterf(Null_glSamplerParameterf),
		SamplerParameterfv(Null_glSamplerParameterfv),
		SamplerParameterIiv(Null_glSamplerParameterIiv),
		SamplerParameterIuiv(Null_glSamplerParameterIuiv),
		GetSamplerParameteriv(Null_glGetSamplerParameteriv),
		GetSamplerParameterIiv(Null_glGetSamplerParameterIiv),
		GetSamplerParameterfv(Null_glGetSamplerParameterfv),
		GetSamplerParameterIuiv(Null_glGetSamplerParameterIuiv),
		QueryCounter(Null_glQueryCounter),
		GetQueryObjecti64v(Null_glGetQueryObjecti64v),
		GetQueryObjectui64v(Null_glGetQueryObjectui64v),
		VertexAttribDivisor(Null_glVertexAttribDivisor),
		VertexAttribP1ui(Null_glVertexAttribP1ui),
		VertexAttribP1uiv(Null_glVertexAttribP1uiv),
		VertexAttribP2ui(Null_glVertexAttribP2ui),
		VertexAttribP2uiv(Null_glVertexAttribP2uiv),
		VertexAttribP3ui(Null_glVertexAttribP3ui),
		VertexAttribP3uiv(Null_glVertexAttribP3uiv),
		VertexAttribP4ui(Null_glVertexAttribP4ui),
		VertexAttribP4uiv(Null_glVertexAttribP4uiv),
		VertexP2ui(Null_glVertexP2ui),
		VertexP2uiv(Null_glVertexP2uiv),
		VertexP3ui(Null_glVertexP3ui),
		VertexP3uiv(Null_glVertexP3uiv),
		VertexP4ui(Null_glVertexP4ui),
		VertexP4uiv(Null_glVertexP4uiv),
		TexCoordP1ui(Null_glTexCoordP1ui),
		TexCoordP1uiv(Null_glTexCoordP1uiv),
		TexCoordP2ui(Null_glTexCoordP2ui),
		TexCoordP2uiv(Null_glTexCoordP2uiv),
		TexCoordP3ui(Null_glTexCoordP3ui),
		TexCoordP3uiv(Null_glTexCoordP3uiv),
		TexCoordP4ui(Null_glTexCoordP4ui),
		TexCoordP4uiv(Null_glTexCoordP4uiv),
		MultiTexCoordP1ui(Null_glMultiTexCoordP1ui),
		MultiTexCoordP1uiv(Null_glMultiTexCoordP1uiv),
		MultiTexCoordP2ui(Null_glMultiTexCoordP2ui),
		MultiTexCoordP2uiv(Null_glMultiTexCoordP2uiv),
		MultiTexCoordP3ui(Null_glMultiTexCoordP3ui),
		MultiTexCoordP3uiv(Null_glMultiTexCoordP3uiv),
		MultiTexCoordP4ui(Null_glMultiTexCoordP4ui),
		MultiTexCoordP4uiv(Null_glMultiTexCoordP4uiv),
		NormalP3ui(Null_glNormalP3ui),
		NormalP3uiv(Null_glNormalP3uiv),
		ColorP3ui(Null_glColorP3ui),
		ColorP3uiv(Null_glColorP3uiv),
		ColorP4ui(Null_glColorP4ui),
		ColorP4uiv(Null_glColorP4uiv),
		SecondaryColorP3ui(Null_glSecondaryColorP3ui),
		SecondaryColorP3uiv(Null_glSecondaryColorP3uiv)
	{
		Available = Ver_Major > 3 || (Ver_Major == 3 && (Ver_Minor > 3 || (Ver_Minor == 3 && Ver_Release >= 0)));
		try
		{
			BindFragDataLocationIndexed = GetProc<PFNGLBINDFRAGDATALOCATIONINDEXEDPROC>("glBindFragDataLocationIndexed");
			GetFragDataIndex = GetProc<PFNGLGETFRAGDATAINDEXPROC>("glGetFragDataIndex");
			GenSamplers = GetProc<PFNGLGENSAMPLERSPROC>("glGenSamplers");
			DeleteSamplers = GetProc<PFNGLDELETESAMPLERSPROC>("glDeleteSamplers");
			IsSampler = GetProc<PFNGLISSAMPLERPROC>("glIsSampler");
			BindSampler = GetProc<PFNGLBINDSAMPLERPROC>("glBindSampler");
			SamplerParameteri = GetProc<PFNGLSAMPLERPARAMETERIPROC>("glSamplerParameteri");
			SamplerParameteriv = GetProc<PFNGLSAMPLERPARAMETERIVPROC>("glSamplerParameteriv");
			SamplerParameterf = GetProc<PFNGLSAMPLERPARAMETERFPROC>("glSamplerParameterf");
			SamplerParameterfv = GetProc<PFNGLSAMPLERPARAMETERFVPROC>("glSamplerParameterfv");
			SamplerParameterIiv = GetProc<PFNGLSAMPLERPARAMETERIIVPROC>("glSamplerParameterIiv");
			SamplerParameterIuiv = GetProc<PFNGLSAMPLERPARAMETERIUIVPROC>("glSamplerParameterIuiv");
			GetSamplerParameteriv = GetProc<PFNGLGETSAMPLERPARAMETERIVPROC>("glGetSamplerParameteriv");
			GetSamplerParameterIiv = GetProc<PFNGLGETSAMPLERPARAMETERIIVPROC>("glGetSamplerParameterIiv");
			GetSamplerParameterfv = GetProc<PFNGLGETSAMPLERPARAMETERFVPROC>("glGetSamplerParameterfv");
			GetSamplerParameterIuiv = GetProc<PFNGLGETSAMPLERPARAMETERIUIVPROC>("glGetSamplerParameterIuiv");
			QueryCounter = GetProc<PFNGLQUERYCOUNTERPROC>("glQueryCounter");
			GetQueryObjecti64v = GetProc<PFNGLGETQUERYOBJECTI64VPROC>("glGetQueryObjecti64v");
			GetQueryObjectui64v = GetProc<PFNGLGETQUERYOBJECTUI64VPROC>("glGetQueryObjectui64v");
			VertexAttribDivisor = GetProc<PFNGLVERTEXATTRIBDIVISORPROC>("glVertexAttribDivisor");
			VertexAttribP1ui = GetProc<PFNGLVERTEXATTRIBP1UIPROC>("glVertexAttribP1ui");
			VertexAttribP1uiv = GetProc<PFNGLVERTEXATTRIBP1UIVPROC>("glVertexAttribP1uiv");
			VertexAttribP2ui = GetProc<PFNGLVERTEXATTRIBP2UIPROC>("glVertexAttribP2ui");
			VertexAttribP2uiv = GetProc<PFNGLVERTEXATTRIBP2UIVPROC>("glVertexAttribP2uiv");
			VertexAttribP3ui = GetProc<PFNGLVERTEXATTRIBP3UIPROC>("glVertexAttribP3ui");
			VertexAttribP3uiv = GetProc<PFNGLVERTEXATTRIBP3UIVPROC>("glVertexAttribP3uiv");
			VertexAttribP4ui = GetProc<PFNGLVERTEXATTRIBP4UIPROC>("glVertexAttribP4ui");
			VertexAttribP4uiv = GetProc<PFNGLVERTEXATTRIBP4UIVPROC>("glVertexAttribP4uiv");
			VertexP2ui = GetProc<PFNGLVERTEXP2UIPROC>("glVertexP2ui");
			VertexP2uiv = GetProc<PFNGLVERTEXP2UIVPROC>("glVertexP2uiv");
			VertexP3ui = GetProc<PFNGLVERTEXP3UIPROC>("glVertexP3ui");
			VertexP3uiv = GetProc<PFNGLVERTEXP3UIVPROC>("glVertexP3uiv");
			VertexP4ui = GetProc<PFNGLVERTEXP4UIPROC>("glVertexP4ui");
			VertexP4uiv = GetProc<PFNGLVERTEXP4UIVPROC>("glVertexP4uiv");
			TexCoordP1ui = GetProc<PFNGLTEXCOORDP1UIPROC>("glTexCoordP1ui");
			TexCoordP1uiv = GetProc<PFNGLTEXCOORDP1UIVPROC>("glTexCoordP1uiv");
			TexCoordP2ui = GetProc<PFNGLTEXCOORDP2UIPROC>("glTexCoordP2ui");
			TexCoordP2uiv = GetProc<PFNGLTEXCOORDP2UIVPROC>("glTexCoordP2uiv");
			TexCoordP3ui = GetProc<PFNGLTEXCOORDP3UIPROC>("glTexCoordP3ui");
			TexCoordP3uiv = GetProc<PFNGLTEXCOORDP3UIVPROC>("glTexCoordP3uiv");
			TexCoordP4ui = GetProc<PFNGLTEXCOORDP4UIPROC>("glTexCoordP4ui");
			TexCoordP4uiv = GetProc<PFNGLTEXCOORDP4UIVPROC>("glTexCoordP4uiv");
			MultiTexCoordP1ui = GetProc<PFNGLMULTITEXCOORDP1UIPROC>("glMultiTexCoordP1ui");
			MultiTexCoordP1uiv = GetProc<PFNGLMULTITEXCOORDP1UIVPROC>("glMultiTexCoordP1uiv");
			MultiTexCoordP2ui = GetProc<PFNGLMULTITEXCOORDP2UIPROC>("glMultiTexCoordP2ui");
			MultiTexCoordP2uiv = GetProc<PFNGLMULTITEXCOORDP2UIVPROC>("glMultiTexCoordP2uiv");
			MultiTexCoordP3ui = GetProc<PFNGLMULTITEXCOORDP3UIPROC>("glMultiTexCoordP3ui");
			MultiTexCoordP3uiv = GetProc<PFNGLMULTITEXCOORDP3UIVPROC>("glMultiTexCoordP3uiv");
			MultiTexCoordP4ui = GetProc<PFNGLMULTITEXCOORDP4UIPROC>("glMultiTexCoordP4ui");
			MultiTexCoordP4uiv = GetProc<PFNGLMULTITEXCOORDP4UIVPROC>("glMultiTexCoordP4uiv");
			NormalP3ui = GetProc<PFNGLNORMALP3UIPROC>("glNormalP3ui");
			NormalP3uiv = GetProc<PFNGLNORMALP3UIVPROC>("glNormalP3uiv");
			ColorP3ui = GetProc<PFNGLCOLORP3UIPROC>("glColorP3ui");
			ColorP3uiv = GetProc<PFNGLCOLORP3UIVPROC>("glColorP3uiv");
			ColorP4ui = GetProc<PFNGLCOLORP4UIPROC>("glColorP4ui");
			ColorP4uiv = GetProc<PFNGLCOLORP4UIVPROC>("glColorP4uiv");
			SecondaryColorP3ui = GetProc<PFNGLSECONDARYCOLORP3UIPROC>("glSecondaryColorP3ui");
			SecondaryColorP3uiv = GetProc<PFNGLSECONDARYCOLORP3UIVPROC>("glSecondaryColorP3uiv");
		}
		catch (const NullFuncPtrException&)
		{
			Available = false;
		}
	}


	static void APIENTRY Null_glMinSampleShading (GLfloat value){ NullFuncPtr(); }
	static void APIENTRY Null_glBlendEquationi (GLuint buf, GLenum mode){ NullFuncPtr(); }
	static void APIENTRY Null_glBlendEquationSeparatei (GLuint buf, GLenum modeRGB, GLenum modeAlpha){ NullFuncPtr(); }
	static void APIENTRY Null_glBlendFunci (GLuint buf, GLenum src, GLenum dst){ NullFuncPtr(); }
	static void APIENTRY Null_glBlendFuncSeparatei (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha){ NullFuncPtr(); }
	static void APIENTRY Null_glDrawArraysIndirect (GLenum mode, const void* indirect){ NullFuncPtr(); }
	static void APIENTRY Null_glDrawElementsIndirect (GLenum mode, GLenum type, const void* indirect){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform1d (GLint location, GLdouble x){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform2d (GLint location, GLdouble x, GLdouble y){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform3d (GLint location, GLdouble x, GLdouble y, GLdouble z){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform4d (GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform1dv (GLint location, GLsizei count, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform2dv (GLint location, GLsizei count, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform3dv (GLint location, GLsizei count, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniform4dv (GLint location, GLsizei count, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformMatrix2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformMatrix3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformMatrix4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformMatrix2x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformMatrix2x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformMatrix3x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformMatrix3x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformMatrix4x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformMatrix4x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glGetUniformdv (GLuint program, GLint location, GLdouble* params){ NullFuncPtr(); }
	static GLint APIENTRY Null_glGetSubroutineUniformLocation (GLuint program, GLenum shadertype, const GLchar* name){ NullFuncPtr(); return NULL; }
	static GLuint APIENTRY Null_glGetSubroutineIndex (GLuint program, GLenum shadertype, const GLchar* name){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glGetActiveSubroutineUniformiv (GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint* values){ NullFuncPtr(); }
	static void APIENTRY Null_glGetActiveSubroutineUniformName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei* length, GLchar* name){ NullFuncPtr(); }
	static void APIENTRY Null_glGetActiveSubroutineName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei* length, GLchar* name){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformSubroutinesuiv (GLenum shadertype, GLsizei count, const GLuint* indices){ NullFuncPtr(); }
	static void APIENTRY Null_glGetUniformSubroutineuiv (GLenum shadertype, GLint location, GLuint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetProgramStageiv (GLuint program, GLenum shadertype, GLenum pname, GLint* values){ NullFuncPtr(); }
	static void APIENTRY Null_glPatchParameteri (GLenum pname, GLint value){ NullFuncPtr(); }
	static void APIENTRY Null_glPatchParameterfv (GLenum pname, const GLfloat* values){ NullFuncPtr(); }
	static void APIENTRY Null_glBindTransformFeedback (GLenum target, GLuint id){ NullFuncPtr(); }
	static void APIENTRY Null_glDeleteTransformFeedbacks (GLsizei n, const GLuint* ids){ NullFuncPtr(); }
	static void APIENTRY Null_glGenTransformFeedbacks (GLsizei n, GLuint* ids){ NullFuncPtr(); }
	static GLboolean APIENTRY Null_glIsTransformFeedback (GLuint id){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glPauseTransformFeedback (void){ NullFuncPtr(); }
	static void APIENTRY Null_glResumeTransformFeedback (void){ NullFuncPtr(); }
	static void APIENTRY Null_glDrawTransformFeedback (GLenum mode, GLuint id){ NullFuncPtr(); }
	static void APIENTRY Null_glDrawTransformFeedbackStream (GLenum mode, GLuint id, GLuint stream){ NullFuncPtr(); }
	static void APIENTRY Null_glBeginQueryIndexed (GLenum target, GLuint index, GLuint id){ NullFuncPtr(); }
	static void APIENTRY Null_glEndQueryIndexed (GLenum target, GLuint index){ NullFuncPtr(); }
	static void APIENTRY Null_glGetQueryIndexediv (GLenum target, GLuint index, GLenum pname, GLint* params){ NullFuncPtr(); }
	Version40::Version40(Func_GetProcAddress GetProcAddress):
		Version33(GetProcAddress),
		MinSampleShading(Null_glMinSampleShading),
		BlendEquationi(Null_glBlendEquationi),
		BlendEquationSeparatei(Null_glBlendEquationSeparatei),
		BlendFunci(Null_glBlendFunci),
		BlendFuncSeparatei(Null_glBlendFuncSeparatei),
		DrawArraysIndirect(Null_glDrawArraysIndirect),
		DrawElementsIndirect(Null_glDrawElementsIndirect),
		Uniform1d(Null_glUniform1d),
		Uniform2d(Null_glUniform2d),
		Uniform3d(Null_glUniform3d),
		Uniform4d(Null_glUniform4d),
		Uniform1dv(Null_glUniform1dv),
		Uniform2dv(Null_glUniform2dv),
		Uniform3dv(Null_glUniform3dv),
		Uniform4dv(Null_glUniform4dv),
		UniformMatrix2dv(Null_glUniformMatrix2dv),
		UniformMatrix3dv(Null_glUniformMatrix3dv),
		UniformMatrix4dv(Null_glUniformMatrix4dv),
		UniformMatrix2x3dv(Null_glUniformMatrix2x3dv),
		UniformMatrix2x4dv(Null_glUniformMatrix2x4dv),
		UniformMatrix3x2dv(Null_glUniformMatrix3x2dv),
		UniformMatrix3x4dv(Null_glUniformMatrix3x4dv),
		UniformMatrix4x2dv(Null_glUniformMatrix4x2dv),
		UniformMatrix4x3dv(Null_glUniformMatrix4x3dv),
		GetUniformdv(Null_glGetUniformdv),
		GetSubroutineUniformLocation(Null_glGetSubroutineUniformLocation),
		GetSubroutineIndex(Null_glGetSubroutineIndex),
		GetActiveSubroutineUniformiv(Null_glGetActiveSubroutineUniformiv),
		GetActiveSubroutineUniformName(Null_glGetActiveSubroutineUniformName),
		GetActiveSubroutineName(Null_glGetActiveSubroutineName),
		UniformSubroutinesuiv(Null_glUniformSubroutinesuiv),
		GetUniformSubroutineuiv(Null_glGetUniformSubroutineuiv),
		GetProgramStageiv(Null_glGetProgramStageiv),
		PatchParameteri(Null_glPatchParameteri),
		PatchParameterfv(Null_glPatchParameterfv),
		BindTransformFeedback(Null_glBindTransformFeedback),
		DeleteTransformFeedbacks(Null_glDeleteTransformFeedbacks),
		GenTransformFeedbacks(Null_glGenTransformFeedbacks),
		IsTransformFeedback(Null_glIsTransformFeedback),
		PauseTransformFeedback(Null_glPauseTransformFeedback),
		ResumeTransformFeedback(Null_glResumeTransformFeedback),
		DrawTransformFeedback(Null_glDrawTransformFeedback),
		DrawTransformFeedbackStream(Null_glDrawTransformFeedbackStream),
		BeginQueryIndexed(Null_glBeginQueryIndexed),
		EndQueryIndexed(Null_glEndQueryIndexed),
		GetQueryIndexediv(Null_glGetQueryIndexediv)
	{
		Available = Ver_Major > 4 || (Ver_Major == 4 && (Ver_Minor > 0 || (Ver_Minor == 0 && Ver_Release >= 0)));
		try
		{
			MinSampleShading = GetProc<PFNGLMINSAMPLESHADINGPROC>("glMinSampleShading");
			BlendEquationi = GetProc<PFNGLBLENDEQUATIONIPROC>("glBlendEquationi");
			BlendEquationSeparatei = GetProc<PFNGLBLENDEQUATIONSEPARATEIPROC>("glBlendEquationSeparatei");
			BlendFunci = GetProc<PFNGLBLENDFUNCIPROC>("glBlendFunci");
			BlendFuncSeparatei = GetProc<PFNGLBLENDFUNCSEPARATEIPROC>("glBlendFuncSeparatei");
			DrawArraysIndirect = GetProc<PFNGLDRAWARRAYSINDIRECTPROC>("glDrawArraysIndirect");
			DrawElementsIndirect = GetProc<PFNGLDRAWELEMENTSINDIRECTPROC>("glDrawElementsIndirect");
			Uniform1d = GetProc<PFNGLUNIFORM1DPROC>("glUniform1d");
			Uniform2d = GetProc<PFNGLUNIFORM2DPROC>("glUniform2d");
			Uniform3d = GetProc<PFNGLUNIFORM3DPROC>("glUniform3d");
			Uniform4d = GetProc<PFNGLUNIFORM4DPROC>("glUniform4d");
			Uniform1dv = GetProc<PFNGLUNIFORM1DVPROC>("glUniform1dv");
			Uniform2dv = GetProc<PFNGLUNIFORM2DVPROC>("glUniform2dv");
			Uniform3dv = GetProc<PFNGLUNIFORM3DVPROC>("glUniform3dv");
			Uniform4dv = GetProc<PFNGLUNIFORM4DVPROC>("glUniform4dv");
			UniformMatrix2dv = GetProc<PFNGLUNIFORMMATRIX2DVPROC>("glUniformMatrix2dv");
			UniformMatrix3dv = GetProc<PFNGLUNIFORMMATRIX3DVPROC>("glUniformMatrix3dv");
			UniformMatrix4dv = GetProc<PFNGLUNIFORMMATRIX4DVPROC>("glUniformMatrix4dv");
			UniformMatrix2x3dv = GetProc<PFNGLUNIFORMMATRIX2X3DVPROC>("glUniformMatrix2x3dv");
			UniformMatrix2x4dv = GetProc<PFNGLUNIFORMMATRIX2X4DVPROC>("glUniformMatrix2x4dv");
			UniformMatrix3x2dv = GetProc<PFNGLUNIFORMMATRIX3X2DVPROC>("glUniformMatrix3x2dv");
			UniformMatrix3x4dv = GetProc<PFNGLUNIFORMMATRIX3X4DVPROC>("glUniformMatrix3x4dv");
			UniformMatrix4x2dv = GetProc<PFNGLUNIFORMMATRIX4X2DVPROC>("glUniformMatrix4x2dv");
			UniformMatrix4x3dv = GetProc<PFNGLUNIFORMMATRIX4X3DVPROC>("glUniformMatrix4x3dv");
			GetUniformdv = GetProc<PFNGLGETUNIFORMDVPROC>("glGetUniformdv");
			GetSubroutineUniformLocation = GetProc<PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC>("glGetSubroutineUniformLocation");
			GetSubroutineIndex = GetProc<PFNGLGETSUBROUTINEINDEXPROC>("glGetSubroutineIndex");
			GetActiveSubroutineUniformiv = GetProc<PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC>("glGetActiveSubroutineUniformiv");
			GetActiveSubroutineUniformName = GetProc<PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC>("glGetActiveSubroutineUniformName");
			GetActiveSubroutineName = GetProc<PFNGLGETACTIVESUBROUTINENAMEPROC>("glGetActiveSubroutineName");
			UniformSubroutinesuiv = GetProc<PFNGLUNIFORMSUBROUTINESUIVPROC>("glUniformSubroutinesuiv");
			GetUniformSubroutineuiv = GetProc<PFNGLGETUNIFORMSUBROUTINEUIVPROC>("glGetUniformSubroutineuiv");
			GetProgramStageiv = GetProc<PFNGLGETPROGRAMSTAGEIVPROC>("glGetProgramStageiv");
			PatchParameteri = GetProc<PFNGLPATCHPARAMETERIPROC>("glPatchParameteri");
			PatchParameterfv = GetProc<PFNGLPATCHPARAMETERFVPROC>("glPatchParameterfv");
			BindTransformFeedback = GetProc<PFNGLBINDTRANSFORMFEEDBACKPROC>("glBindTransformFeedback");
			DeleteTransformFeedbacks = GetProc<PFNGLDELETETRANSFORMFEEDBACKSPROC>("glDeleteTransformFeedbacks");
			GenTransformFeedbacks = GetProc<PFNGLGENTRANSFORMFEEDBACKSPROC>("glGenTransformFeedbacks");
			IsTransformFeedback = GetProc<PFNGLISTRANSFORMFEEDBACKPROC>("glIsTransformFeedback");
			PauseTransformFeedback = GetProc<PFNGLPAUSETRANSFORMFEEDBACKPROC>("glPauseTransformFeedback");
			ResumeTransformFeedback = GetProc<PFNGLRESUMETRANSFORMFEEDBACKPROC>("glResumeTransformFeedback");
			DrawTransformFeedback = GetProc<PFNGLDRAWTRANSFORMFEEDBACKPROC>("glDrawTransformFeedback");
			DrawTransformFeedbackStream = GetProc<PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC>("glDrawTransformFeedbackStream");
			BeginQueryIndexed = GetProc<PFNGLBEGINQUERYINDEXEDPROC>("glBeginQueryIndexed");
			EndQueryIndexed = GetProc<PFNGLENDQUERYINDEXEDPROC>("glEndQueryIndexed");
			GetQueryIndexediv = GetProc<PFNGLGETQUERYINDEXEDIVPROC>("glGetQueryIndexediv");
		}
		catch (const NullFuncPtrException&)
		{
			Available = false;
		}
	}


	static void APIENTRY Null_glReleaseShaderCompiler (void){ NullFuncPtr(); }
	static void APIENTRY Null_glShaderBinary (GLsizei count, const GLuint* shaders, GLenum binaryFormat, const void* binary, GLsizei length){ NullFuncPtr(); }
	static void APIENTRY Null_glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision){ NullFuncPtr(); }
	static void APIENTRY Null_glDepthRangef (GLfloat n, GLfloat f){ NullFuncPtr(); }
	static void APIENTRY Null_glClearDepthf (GLfloat d){ NullFuncPtr(); }
	static void APIENTRY Null_glGetProgramBinary (GLuint program, GLsizei bufSize, GLsizei* length, GLenum* binaryFormat, void* binary){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramBinary (GLuint program, GLenum binaryFormat, const void* binary, GLsizei length){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramParameteri (GLuint program, GLenum pname, GLint value){ NullFuncPtr(); }
	static void APIENTRY Null_glUseProgramStages (GLuint pipeline, GLbitfield stages, GLuint program){ NullFuncPtr(); }
	static void APIENTRY Null_glActiveShaderProgram (GLuint pipeline, GLuint program){ NullFuncPtr(); }
	static GLuint APIENTRY Null_glCreateShaderProgramv (GLenum type, GLsizei count, const GLchar* const* strings){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glBindProgramPipeline (GLuint pipeline){ NullFuncPtr(); }
	static void APIENTRY Null_glDeleteProgramPipelines (GLsizei n, const GLuint* pipelines){ NullFuncPtr(); }
	static void APIENTRY Null_glGenProgramPipelines (GLsizei n, GLuint* pipelines){ NullFuncPtr(); }
	static GLboolean APIENTRY Null_glIsProgramPipeline (GLuint pipeline){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glGetProgramPipelineiv (GLuint pipeline, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform1i (GLuint program, GLint location, GLint v0){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform1iv (GLuint program, GLint location, GLsizei count, const GLint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform1f (GLuint program, GLint location, GLfloat v0){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform1fv (GLuint program, GLint location, GLsizei count, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform1d (GLuint program, GLint location, GLdouble v0){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform1dv (GLuint program, GLint location, GLsizei count, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform1ui (GLuint program, GLint location, GLuint v0){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform1uiv (GLuint program, GLint location, GLsizei count, const GLuint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform2i (GLuint program, GLint location, GLint v0, GLint v1){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform2iv (GLuint program, GLint location, GLsizei count, const GLint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform2f (GLuint program, GLint location, GLfloat v0, GLfloat v1){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform2fv (GLuint program, GLint location, GLsizei count, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform2d (GLuint program, GLint location, GLdouble v0, GLdouble v1){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform2dv (GLuint program, GLint location, GLsizei count, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform2ui (GLuint program, GLint location, GLuint v0, GLuint v1){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform2uiv (GLuint program, GLint location, GLsizei count, const GLuint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform3i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform3iv (GLuint program, GLint location, GLsizei count, const GLint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform3f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform3fv (GLuint program, GLint location, GLsizei count, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform3d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform3dv (GLuint program, GLint location, GLsizei count, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform3ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform3uiv (GLuint program, GLint location, GLsizei count, const GLuint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform4i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform4iv (GLuint program, GLint location, GLsizei count, const GLint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform4f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform4fv (GLuint program, GLint location, GLsizei count, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform4d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform4dv (GLuint program, GLint location, GLsizei count, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform4ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniform4uiv (GLuint program, GLint location, GLsizei count, const GLuint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniformMatrix2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniformMatrix3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniformMatrix4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniformMatrix2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniformMatrix3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniformMatrix4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniformMatrix2x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniformMatrix3x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniformMatrix2x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniformMatrix4x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniformMatrix3x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniformMatrix4x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniformMatrix2x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniformMatrix3x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniformMatrix2x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniformMatrix4x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniformMatrix3x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glProgramUniformMatrix4x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value){ NullFuncPtr(); }
	static void APIENTRY Null_glValidateProgramPipeline (GLuint pipeline){ NullFuncPtr(); }
	static void APIENTRY Null_glGetProgramPipelineInfoLog (GLuint pipeline, GLsizei bufSize, GLsizei* length, GLchar* infoLog){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribL1d (GLuint index, GLdouble x){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribL2d (GLuint index, GLdouble x, GLdouble y){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribL3d (GLuint index, GLdouble x, GLdouble y, GLdouble z){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribL4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribL1dv (GLuint index, const GLdouble* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribL2dv (GLuint index, const GLdouble* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribL3dv (GLuint index, const GLdouble* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribL4dv (GLuint index, const GLdouble* v){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribLPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void* pointer){ NullFuncPtr(); }
	static void APIENTRY Null_glGetVertexAttribLdv (GLuint index, GLenum pname, GLdouble* params){ NullFuncPtr(); }
	static void APIENTRY Null_glViewportArrayv (GLuint first, GLsizei count, const GLfloat* v){ NullFuncPtr(); }
	static void APIENTRY Null_glViewportIndexedf (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h){ NullFuncPtr(); }
	static void APIENTRY Null_glViewportIndexedfv (GLuint index, const GLfloat* v){ NullFuncPtr(); }
	static void APIENTRY Null_glScissorArrayv (GLuint first, GLsizei count, const GLint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glScissorIndexed (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height){ NullFuncPtr(); }
	static void APIENTRY Null_glScissorIndexedv (GLuint index, const GLint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glDepthRangeArrayv (GLuint first, GLsizei count, const GLdouble* v){ NullFuncPtr(); }
	static void APIENTRY Null_glDepthRangeIndexed (GLuint index, GLdouble n, GLdouble f){ NullFuncPtr(); }
	static void APIENTRY Null_glGetFloati_v (GLenum target, GLuint index, GLfloat* data){ NullFuncPtr(); }
	static void APIENTRY Null_glGetDoublei_v (GLenum target, GLuint index, GLdouble* data){ NullFuncPtr(); }
	Version41::Version41(Func_GetProcAddress GetProcAddress):
		Version40(GetProcAddress),
		ReleaseShaderCompiler(Null_glReleaseShaderCompiler),
		ShaderBinary(Null_glShaderBinary),
		GetShaderPrecisionFormat(Null_glGetShaderPrecisionFormat),
		DepthRangef(Null_glDepthRangef),
		ClearDepthf(Null_glClearDepthf),
		GetProgramBinary(Null_glGetProgramBinary),
		ProgramBinary(Null_glProgramBinary),
		ProgramParameteri(Null_glProgramParameteri),
		UseProgramStages(Null_glUseProgramStages),
		ActiveShaderProgram(Null_glActiveShaderProgram),
		CreateShaderProgramv(Null_glCreateShaderProgramv),
		BindProgramPipeline(Null_glBindProgramPipeline),
		DeleteProgramPipelines(Null_glDeleteProgramPipelines),
		GenProgramPipelines(Null_glGenProgramPipelines),
		IsProgramPipeline(Null_glIsProgramPipeline),
		GetProgramPipelineiv(Null_glGetProgramPipelineiv),
		ProgramUniform1i(Null_glProgramUniform1i),
		ProgramUniform1iv(Null_glProgramUniform1iv),
		ProgramUniform1f(Null_glProgramUniform1f),
		ProgramUniform1fv(Null_glProgramUniform1fv),
		ProgramUniform1d(Null_glProgramUniform1d),
		ProgramUniform1dv(Null_glProgramUniform1dv),
		ProgramUniform1ui(Null_glProgramUniform1ui),
		ProgramUniform1uiv(Null_glProgramUniform1uiv),
		ProgramUniform2i(Null_glProgramUniform2i),
		ProgramUniform2iv(Null_glProgramUniform2iv),
		ProgramUniform2f(Null_glProgramUniform2f),
		ProgramUniform2fv(Null_glProgramUniform2fv),
		ProgramUniform2d(Null_glProgramUniform2d),
		ProgramUniform2dv(Null_glProgramUniform2dv),
		ProgramUniform2ui(Null_glProgramUniform2ui),
		ProgramUniform2uiv(Null_glProgramUniform2uiv),
		ProgramUniform3i(Null_glProgramUniform3i),
		ProgramUniform3iv(Null_glProgramUniform3iv),
		ProgramUniform3f(Null_glProgramUniform3f),
		ProgramUniform3fv(Null_glProgramUniform3fv),
		ProgramUniform3d(Null_glProgramUniform3d),
		ProgramUniform3dv(Null_glProgramUniform3dv),
		ProgramUniform3ui(Null_glProgramUniform3ui),
		ProgramUniform3uiv(Null_glProgramUniform3uiv),
		ProgramUniform4i(Null_glProgramUniform4i),
		ProgramUniform4iv(Null_glProgramUniform4iv),
		ProgramUniform4f(Null_glProgramUniform4f),
		ProgramUniform4fv(Null_glProgramUniform4fv),
		ProgramUniform4d(Null_glProgramUniform4d),
		ProgramUniform4dv(Null_glProgramUniform4dv),
		ProgramUniform4ui(Null_glProgramUniform4ui),
		ProgramUniform4uiv(Null_glProgramUniform4uiv),
		ProgramUniformMatrix2fv(Null_glProgramUniformMatrix2fv),
		ProgramUniformMatrix3fv(Null_glProgramUniformMatrix3fv),
		ProgramUniformMatrix4fv(Null_glProgramUniformMatrix4fv),
		ProgramUniformMatrix2dv(Null_glProgramUniformMatrix2dv),
		ProgramUniformMatrix3dv(Null_glProgramUniformMatrix3dv),
		ProgramUniformMatrix4dv(Null_glProgramUniformMatrix4dv),
		ProgramUniformMatrix2x3fv(Null_glProgramUniformMatrix2x3fv),
		ProgramUniformMatrix3x2fv(Null_glProgramUniformMatrix3x2fv),
		ProgramUniformMatrix2x4fv(Null_glProgramUniformMatrix2x4fv),
		ProgramUniformMatrix4x2fv(Null_glProgramUniformMatrix4x2fv),
		ProgramUniformMatrix3x4fv(Null_glProgramUniformMatrix3x4fv),
		ProgramUniformMatrix4x3fv(Null_glProgramUniformMatrix4x3fv),
		ProgramUniformMatrix2x3dv(Null_glProgramUniformMatrix2x3dv),
		ProgramUniformMatrix3x2dv(Null_glProgramUniformMatrix3x2dv),
		ProgramUniformMatrix2x4dv(Null_glProgramUniformMatrix2x4dv),
		ProgramUniformMatrix4x2dv(Null_glProgramUniformMatrix4x2dv),
		ProgramUniformMatrix3x4dv(Null_glProgramUniformMatrix3x4dv),
		ProgramUniformMatrix4x3dv(Null_glProgramUniformMatrix4x3dv),
		ValidateProgramPipeline(Null_glValidateProgramPipeline),
		GetProgramPipelineInfoLog(Null_glGetProgramPipelineInfoLog),
		VertexAttribL1d(Null_glVertexAttribL1d),
		VertexAttribL2d(Null_glVertexAttribL2d),
		VertexAttribL3d(Null_glVertexAttribL3d),
		VertexAttribL4d(Null_glVertexAttribL4d),
		VertexAttribL1dv(Null_glVertexAttribL1dv),
		VertexAttribL2dv(Null_glVertexAttribL2dv),
		VertexAttribL3dv(Null_glVertexAttribL3dv),
		VertexAttribL4dv(Null_glVertexAttribL4dv),
		VertexAttribLPointer(Null_glVertexAttribLPointer),
		GetVertexAttribLdv(Null_glGetVertexAttribLdv),
		ViewportArrayv(Null_glViewportArrayv),
		ViewportIndexedf(Null_glViewportIndexedf),
		ViewportIndexedfv(Null_glViewportIndexedfv),
		ScissorArrayv(Null_glScissorArrayv),
		ScissorIndexed(Null_glScissorIndexed),
		ScissorIndexedv(Null_glScissorIndexedv),
		DepthRangeArrayv(Null_glDepthRangeArrayv),
		DepthRangeIndexed(Null_glDepthRangeIndexed),
		GetFloati_v(Null_glGetFloati_v),
		GetDoublei_v(Null_glGetDoublei_v)
	{
		Available = Ver_Major > 4 || (Ver_Major == 4 && (Ver_Minor > 1 || (Ver_Minor == 1 && Ver_Release >= 0)));
		try
		{
			ReleaseShaderCompiler = GetProc<PFNGLRELEASESHADERCOMPILERPROC>("glReleaseShaderCompiler");
			ShaderBinary = GetProc<PFNGLSHADERBINARYPROC>("glShaderBinary");
			GetShaderPrecisionFormat = GetProc<PFNGLGETSHADERPRECISIONFORMATPROC>("glGetShaderPrecisionFormat");
			DepthRangef = GetProc<PFNGLDEPTHRANGEFPROC>("glDepthRangef");
			ClearDepthf = GetProc<PFNGLCLEARDEPTHFPROC>("glClearDepthf");
			GetProgramBinary = GetProc<PFNGLGETPROGRAMBINARYPROC>("glGetProgramBinary");
			ProgramBinary = GetProc<PFNGLPROGRAMBINARYPROC>("glProgramBinary");
			ProgramParameteri = GetProc<PFNGLPROGRAMPARAMETERIPROC>("glProgramParameteri");
			UseProgramStages = GetProc<PFNGLUSEPROGRAMSTAGESPROC>("glUseProgramStages");
			ActiveShaderProgram = GetProc<PFNGLACTIVESHADERPROGRAMPROC>("glActiveShaderProgram");
			CreateShaderProgramv = GetProc<PFNGLCREATESHADERPROGRAMVPROC>("glCreateShaderProgramv");
			BindProgramPipeline = GetProc<PFNGLBINDPROGRAMPIPELINEPROC>("glBindProgramPipeline");
			DeleteProgramPipelines = GetProc<PFNGLDELETEPROGRAMPIPELINESPROC>("glDeleteProgramPipelines");
			GenProgramPipelines = GetProc<PFNGLGENPROGRAMPIPELINESPROC>("glGenProgramPipelines");
			IsProgramPipeline = GetProc<PFNGLISPROGRAMPIPELINEPROC>("glIsProgramPipeline");
			GetProgramPipelineiv = GetProc<PFNGLGETPROGRAMPIPELINEIVPROC>("glGetProgramPipelineiv");
			ProgramUniform1i = GetProc<PFNGLPROGRAMUNIFORM1IPROC>("glProgramUniform1i");
			ProgramUniform1iv = GetProc<PFNGLPROGRAMUNIFORM1IVPROC>("glProgramUniform1iv");
			ProgramUniform1f = GetProc<PFNGLPROGRAMUNIFORM1FPROC>("glProgramUniform1f");
			ProgramUniform1fv = GetProc<PFNGLPROGRAMUNIFORM1FVPROC>("glProgramUniform1fv");
			ProgramUniform1d = GetProc<PFNGLPROGRAMUNIFORM1DPROC>("glProgramUniform1d");
			ProgramUniform1dv = GetProc<PFNGLPROGRAMUNIFORM1DVPROC>("glProgramUniform1dv");
			ProgramUniform1ui = GetProc<PFNGLPROGRAMUNIFORM1UIPROC>("glProgramUniform1ui");
			ProgramUniform1uiv = GetProc<PFNGLPROGRAMUNIFORM1UIVPROC>("glProgramUniform1uiv");
			ProgramUniform2i = GetProc<PFNGLPROGRAMUNIFORM2IPROC>("glProgramUniform2i");
			ProgramUniform2iv = GetProc<PFNGLPROGRAMUNIFORM2IVPROC>("glProgramUniform2iv");
			ProgramUniform2f = GetProc<PFNGLPROGRAMUNIFORM2FPROC>("glProgramUniform2f");
			ProgramUniform2fv = GetProc<PFNGLPROGRAMUNIFORM2FVPROC>("glProgramUniform2fv");
			ProgramUniform2d = GetProc<PFNGLPROGRAMUNIFORM2DPROC>("glProgramUniform2d");
			ProgramUniform2dv = GetProc<PFNGLPROGRAMUNIFORM2DVPROC>("glProgramUniform2dv");
			ProgramUniform2ui = GetProc<PFNGLPROGRAMUNIFORM2UIPROC>("glProgramUniform2ui");
			ProgramUniform2uiv = GetProc<PFNGLPROGRAMUNIFORM2UIVPROC>("glProgramUniform2uiv");
			ProgramUniform3i = GetProc<PFNGLPROGRAMUNIFORM3IPROC>("glProgramUniform3i");
			ProgramUniform3iv = GetProc<PFNGLPROGRAMUNIFORM3IVPROC>("glProgramUniform3iv");
			ProgramUniform3f = GetProc<PFNGLPROGRAMUNIFORM3FPROC>("glProgramUniform3f");
			ProgramUniform3fv = GetProc<PFNGLPROGRAMUNIFORM3FVPROC>("glProgramUniform3fv");
			ProgramUniform3d = GetProc<PFNGLPROGRAMUNIFORM3DPROC>("glProgramUniform3d");
			ProgramUniform3dv = GetProc<PFNGLPROGRAMUNIFORM3DVPROC>("glProgramUniform3dv");
			ProgramUniform3ui = GetProc<PFNGLPROGRAMUNIFORM3UIPROC>("glProgramUniform3ui");
			ProgramUniform3uiv = GetProc<PFNGLPROGRAMUNIFORM3UIVPROC>("glProgramUniform3uiv");
			ProgramUniform4i = GetProc<PFNGLPROGRAMUNIFORM4IPROC>("glProgramUniform4i");
			ProgramUniform4iv = GetProc<PFNGLPROGRAMUNIFORM4IVPROC>("glProgramUniform4iv");
			ProgramUniform4f = GetProc<PFNGLPROGRAMUNIFORM4FPROC>("glProgramUniform4f");
			ProgramUniform4fv = GetProc<PFNGLPROGRAMUNIFORM4FVPROC>("glProgramUniform4fv");
			ProgramUniform4d = GetProc<PFNGLPROGRAMUNIFORM4DPROC>("glProgramUniform4d");
			ProgramUniform4dv = GetProc<PFNGLPROGRAMUNIFORM4DVPROC>("glProgramUniform4dv");
			ProgramUniform4ui = GetProc<PFNGLPROGRAMUNIFORM4UIPROC>("glProgramUniform4ui");
			ProgramUniform4uiv = GetProc<PFNGLPROGRAMUNIFORM4UIVPROC>("glProgramUniform4uiv");
			ProgramUniformMatrix2fv = GetProc<PFNGLPROGRAMUNIFORMMATRIX2FVPROC>("glProgramUniformMatrix2fv");
			ProgramUniformMatrix3fv = GetProc<PFNGLPROGRAMUNIFORMMATRIX3FVPROC>("glProgramUniformMatrix3fv");
			ProgramUniformMatrix4fv = GetProc<PFNGLPROGRAMUNIFORMMATRIX4FVPROC>("glProgramUniformMatrix4fv");
			ProgramUniformMatrix2dv = GetProc<PFNGLPROGRAMUNIFORMMATRIX2DVPROC>("glProgramUniformMatrix2dv");
			ProgramUniformMatrix3dv = GetProc<PFNGLPROGRAMUNIFORMMATRIX3DVPROC>("glProgramUniformMatrix3dv");
			ProgramUniformMatrix4dv = GetProc<PFNGLPROGRAMUNIFORMMATRIX4DVPROC>("glProgramUniformMatrix4dv");
			ProgramUniformMatrix2x3fv = GetProc<PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC>("glProgramUniformMatrix2x3fv");
			ProgramUniformMatrix3x2fv = GetProc<PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC>("glProgramUniformMatrix3x2fv");
			ProgramUniformMatrix2x4fv = GetProc<PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC>("glProgramUniformMatrix2x4fv");
			ProgramUniformMatrix4x2fv = GetProc<PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC>("glProgramUniformMatrix4x2fv");
			ProgramUniformMatrix3x4fv = GetProc<PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC>("glProgramUniformMatrix3x4fv");
			ProgramUniformMatrix4x3fv = GetProc<PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC>("glProgramUniformMatrix4x3fv");
			ProgramUniformMatrix2x3dv = GetProc<PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC>("glProgramUniformMatrix2x3dv");
			ProgramUniformMatrix3x2dv = GetProc<PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC>("glProgramUniformMatrix3x2dv");
			ProgramUniformMatrix2x4dv = GetProc<PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC>("glProgramUniformMatrix2x4dv");
			ProgramUniformMatrix4x2dv = GetProc<PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC>("glProgramUniformMatrix4x2dv");
			ProgramUniformMatrix3x4dv = GetProc<PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC>("glProgramUniformMatrix3x4dv");
			ProgramUniformMatrix4x3dv = GetProc<PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC>("glProgramUniformMatrix4x3dv");
			ValidateProgramPipeline = GetProc<PFNGLVALIDATEPROGRAMPIPELINEPROC>("glValidateProgramPipeline");
			GetProgramPipelineInfoLog = GetProc<PFNGLGETPROGRAMPIPELINEINFOLOGPROC>("glGetProgramPipelineInfoLog");
			VertexAttribL1d = GetProc<PFNGLVERTEXATTRIBL1DPROC>("glVertexAttribL1d");
			VertexAttribL2d = GetProc<PFNGLVERTEXATTRIBL2DPROC>("glVertexAttribL2d");
			VertexAttribL3d = GetProc<PFNGLVERTEXATTRIBL3DPROC>("glVertexAttribL3d");
			VertexAttribL4d = GetProc<PFNGLVERTEXATTRIBL4DPROC>("glVertexAttribL4d");
			VertexAttribL1dv = GetProc<PFNGLVERTEXATTRIBL1DVPROC>("glVertexAttribL1dv");
			VertexAttribL2dv = GetProc<PFNGLVERTEXATTRIBL2DVPROC>("glVertexAttribL2dv");
			VertexAttribL3dv = GetProc<PFNGLVERTEXATTRIBL3DVPROC>("glVertexAttribL3dv");
			VertexAttribL4dv = GetProc<PFNGLVERTEXATTRIBL4DVPROC>("glVertexAttribL4dv");
			VertexAttribLPointer = GetProc<PFNGLVERTEXATTRIBLPOINTERPROC>("glVertexAttribLPointer");
			GetVertexAttribLdv = GetProc<PFNGLGETVERTEXATTRIBLDVPROC>("glGetVertexAttribLdv");
			ViewportArrayv = GetProc<PFNGLVIEWPORTARRAYVPROC>("glViewportArrayv");
			ViewportIndexedf = GetProc<PFNGLVIEWPORTINDEXEDFPROC>("glViewportIndexedf");
			ViewportIndexedfv = GetProc<PFNGLVIEWPORTINDEXEDFVPROC>("glViewportIndexedfv");
			ScissorArrayv = GetProc<PFNGLSCISSORARRAYVPROC>("glScissorArrayv");
			ScissorIndexed = GetProc<PFNGLSCISSORINDEXEDPROC>("glScissorIndexed");
			ScissorIndexedv = GetProc<PFNGLSCISSORINDEXEDVPROC>("glScissorIndexedv");
			DepthRangeArrayv = GetProc<PFNGLDEPTHRANGEARRAYVPROC>("glDepthRangeArrayv");
			DepthRangeIndexed = GetProc<PFNGLDEPTHRANGEINDEXEDPROC>("glDepthRangeIndexed");
			GetFloati_v = GetProc<PFNGLGETFLOATI_VPROC>("glGetFloati_v");
			GetDoublei_v = GetProc<PFNGLGETDOUBLEI_VPROC>("glGetDoublei_v");
		}
		catch (const NullFuncPtrException&)
		{
			Available = false;
		}
	}


	static void APIENTRY Null_glDrawArraysInstancedBaseInstance (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance){ NullFuncPtr(); }
	static void APIENTRY Null_glDrawElementsInstancedBaseInstance (GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instancecount, GLuint baseinstance){ NullFuncPtr(); }
	static void APIENTRY Null_glDrawElementsInstancedBaseVertexBaseInstance (GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance){ NullFuncPtr(); }
	static void APIENTRY Null_glGetInternalformativ (GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetActiveAtomicCounterBufferiv (GLuint program, GLuint bufferIndex, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glBindImageTexture (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format){ NullFuncPtr(); }
	static void APIENTRY Null_glMemoryBarrier (GLbitfield barriers){ NullFuncPtr(); }
	static void APIENTRY Null_glTexStorage1D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width){ NullFuncPtr(); }
	static void APIENTRY Null_glTexStorage2D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height){ NullFuncPtr(); }
	static void APIENTRY Null_glTexStorage3D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth){ NullFuncPtr(); }
	static void APIENTRY Null_glDrawTransformFeedbackInstanced (GLenum mode, GLuint id, GLsizei instancecount){ NullFuncPtr(); }
	static void APIENTRY Null_glDrawTransformFeedbackStreamInstanced (GLenum mode, GLuint id, GLuint stream, GLsizei instancecount){ NullFuncPtr(); }
	Version42::Version42(Func_GetProcAddress GetProcAddress):
		Version41(GetProcAddress),
		DrawArraysInstancedBaseInstance(Null_glDrawArraysInstancedBaseInstance),
		DrawElementsInstancedBaseInstance(Null_glDrawElementsInstancedBaseInstance),
		DrawElementsInstancedBaseVertexBaseInstance(Null_glDrawElementsInstancedBaseVertexBaseInstance),
		GetInternalformativ(Null_glGetInternalformativ),
		GetActiveAtomicCounterBufferiv(Null_glGetActiveAtomicCounterBufferiv),
		BindImageTexture(Null_glBindImageTexture),
		MemoryBarrier(Null_glMemoryBarrier),
		TexStorage1D(Null_glTexStorage1D),
		TexStorage2D(Null_glTexStorage2D),
		TexStorage3D(Null_glTexStorage3D),
		DrawTransformFeedbackInstanced(Null_glDrawTransformFeedbackInstanced),
		DrawTransformFeedbackStreamInstanced(Null_glDrawTransformFeedbackStreamInstanced)
	{
		Available = Ver_Major > 4 || (Ver_Major == 4 && (Ver_Minor > 2 || (Ver_Minor == 2 && Ver_Release >= 0)));
		try
		{
			DrawArraysInstancedBaseInstance = GetProc<PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC>("glDrawArraysInstancedBaseInstance");
			DrawElementsInstancedBaseInstance = GetProc<PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC>("glDrawElementsInstancedBaseInstance");
			DrawElementsInstancedBaseVertexBaseInstance = GetProc<PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC>("glDrawElementsInstancedBaseVertexBaseInstance");
			GetInternalformativ = GetProc<PFNGLGETINTERNALFORMATIVPROC>("glGetInternalformativ");
			GetActiveAtomicCounterBufferiv = GetProc<PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC>("glGetActiveAtomicCounterBufferiv");
			BindImageTexture = GetProc<PFNGLBINDIMAGETEXTUREPROC>("glBindImageTexture");
			MemoryBarrier = GetProc<PFNGLMEMORYBARRIERPROC>("glMemoryBarrier");
			TexStorage1D = GetProc<PFNGLTEXSTORAGE1DPROC>("glTexStorage1D");
			TexStorage2D = GetProc<PFNGLTEXSTORAGE2DPROC>("glTexStorage2D");
			TexStorage3D = GetProc<PFNGLTEXSTORAGE3DPROC>("glTexStorage3D");
			DrawTransformFeedbackInstanced = GetProc<PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC>("glDrawTransformFeedbackInstanced");
			DrawTransformFeedbackStreamInstanced = GetProc<PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC>("glDrawTransformFeedbackStreamInstanced");
		}
		catch (const NullFuncPtrException&)
		{
			Available = false;
		}
	}


	static void APIENTRY Null_glClearBufferData (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void* data){ NullFuncPtr(); }
	static void APIENTRY Null_glClearBufferSubData (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void* data){ NullFuncPtr(); }
	static void APIENTRY Null_glDispatchCompute (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z){ NullFuncPtr(); }
	static void APIENTRY Null_glDispatchComputeIndirect (GLintptr indirect){ NullFuncPtr(); }
	static void APIENTRY Null_glCopyImageSubData (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth){ NullFuncPtr(); }
	static void APIENTRY Null_glFramebufferParameteri (GLenum target, GLenum pname, GLint param){ NullFuncPtr(); }
	static void APIENTRY Null_glGetFramebufferParameteriv (GLenum target, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetInternalformati64v (GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint64* params){ NullFuncPtr(); }
	static void APIENTRY Null_glInvalidateTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth){ NullFuncPtr(); }
	static void APIENTRY Null_glInvalidateTexImage (GLuint texture, GLint level){ NullFuncPtr(); }
	static void APIENTRY Null_glInvalidateBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr length){ NullFuncPtr(); }
	static void APIENTRY Null_glInvalidateBufferData (GLuint buffer){ NullFuncPtr(); }
	static void APIENTRY Null_glInvalidateFramebuffer (GLenum target, GLsizei numAttachments, const GLenum* attachments){ NullFuncPtr(); }
	static void APIENTRY Null_glInvalidateSubFramebuffer (GLenum target, GLsizei numAttachments, const GLenum* attachments, GLint x, GLint y, GLsizei width, GLsizei height){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiDrawArraysIndirect (GLenum mode, const void* indirect, GLsizei drawcount, GLsizei stride){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiDrawElementsIndirect (GLenum mode, GLenum type, const void* indirect, GLsizei drawcount, GLsizei stride){ NullFuncPtr(); }
	static void APIENTRY Null_glGetProgramInterfaceiv (GLuint program, GLenum programInterface, GLenum pname, GLint* params){ NullFuncPtr(); }
	static GLuint APIENTRY Null_glGetProgramResourceIndex (GLuint program, GLenum programInterface, const GLchar* name){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glGetProgramResourceName (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei* length, GLchar* name){ NullFuncPtr(); }
	static void APIENTRY Null_glGetProgramResourceiv (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum* props, GLsizei count, GLsizei* length, GLint* params){ NullFuncPtr(); }
	static GLint APIENTRY Null_glGetProgramResourceLocation (GLuint program, GLenum programInterface, const GLchar* name){ NullFuncPtr(); return NULL; }
	static GLint APIENTRY Null_glGetProgramResourceLocationIndex (GLuint program, GLenum programInterface, const GLchar* name){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glShaderStorageBlockBinding (GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding){ NullFuncPtr(); }
	static void APIENTRY Null_glTexBufferRange (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size){ NullFuncPtr(); }
	static void APIENTRY Null_glTexStorage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations){ NullFuncPtr(); }
	static void APIENTRY Null_glTexStorage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations){ NullFuncPtr(); }
	static void APIENTRY Null_glTextureView (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers){ NullFuncPtr(); }
	static void APIENTRY Null_glBindVertexBuffer (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribFormat (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribIFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribLFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexAttribBinding (GLuint attribindex, GLuint bindingindex){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexBindingDivisor (GLuint bindingindex, GLuint divisor){ NullFuncPtr(); }
	static void APIENTRY Null_glDebugMessageControl (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint* ids, GLboolean enabled){ NullFuncPtr(); }
	static void APIENTRY Null_glDebugMessageInsert (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* buf){ NullFuncPtr(); }
	static void APIENTRY Null_glDebugMessageCallback (GLDEBUGPROC callback, const void* userParam){ NullFuncPtr(); }
	static GLuint APIENTRY Null_glGetDebugMessageLog (GLuint count, GLsizei bufSize, GLenum* sources, GLenum* types, GLuint* ids, GLenum* severities, GLsizei* lengths, GLchar* messageLog){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glPushDebugGroup (GLenum source, GLuint id, GLsizei length, const GLchar* message){ NullFuncPtr(); }
	static void APIENTRY Null_glPopDebugGroup (void){ NullFuncPtr(); }
	static void APIENTRY Null_glObjectLabel (GLenum identifier, GLuint name, GLsizei length, const GLchar* label){ NullFuncPtr(); }
	static void APIENTRY Null_glGetObjectLabel (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei* length, GLchar* label){ NullFuncPtr(); }
	static void APIENTRY Null_glObjectPtrLabel (const void* ptr, GLsizei length, const GLchar* label){ NullFuncPtr(); }
	static void APIENTRY Null_glGetObjectPtrLabel (const void* ptr, GLsizei bufSize, GLsizei* length, GLchar* label){ NullFuncPtr(); }
	Version43::Version43(Func_GetProcAddress GetProcAddress):
		Version42(GetProcAddress),
		ClearBufferData(Null_glClearBufferData),
		ClearBufferSubData(Null_glClearBufferSubData),
		DispatchCompute(Null_glDispatchCompute),
		DispatchComputeIndirect(Null_glDispatchComputeIndirect),
		CopyImageSubData(Null_glCopyImageSubData),
		FramebufferParameteri(Null_glFramebufferParameteri),
		GetFramebufferParameteriv(Null_glGetFramebufferParameteriv),
		GetInternalformati64v(Null_glGetInternalformati64v),
		InvalidateTexSubImage(Null_glInvalidateTexSubImage),
		InvalidateTexImage(Null_glInvalidateTexImage),
		InvalidateBufferSubData(Null_glInvalidateBufferSubData),
		InvalidateBufferData(Null_glInvalidateBufferData),
		InvalidateFramebuffer(Null_glInvalidateFramebuffer),
		InvalidateSubFramebuffer(Null_glInvalidateSubFramebuffer),
		MultiDrawArraysIndirect(Null_glMultiDrawArraysIndirect),
		MultiDrawElementsIndirect(Null_glMultiDrawElementsIndirect),
		GetProgramInterfaceiv(Null_glGetProgramInterfaceiv),
		GetProgramResourceIndex(Null_glGetProgramResourceIndex),
		GetProgramResourceName(Null_glGetProgramResourceName),
		GetProgramResourceiv(Null_glGetProgramResourceiv),
		GetProgramResourceLocation(Null_glGetProgramResourceLocation),
		GetProgramResourceLocationIndex(Null_glGetProgramResourceLocationIndex),
		ShaderStorageBlockBinding(Null_glShaderStorageBlockBinding),
		TexBufferRange(Null_glTexBufferRange),
		TexStorage2DMultisample(Null_glTexStorage2DMultisample),
		TexStorage3DMultisample(Null_glTexStorage3DMultisample),
		TextureView(Null_glTextureView),
		BindVertexBuffer(Null_glBindVertexBuffer),
		VertexAttribFormat(Null_glVertexAttribFormat),
		VertexAttribIFormat(Null_glVertexAttribIFormat),
		VertexAttribLFormat(Null_glVertexAttribLFormat),
		VertexAttribBinding(Null_glVertexAttribBinding),
		VertexBindingDivisor(Null_glVertexBindingDivisor),
		DebugMessageControl(Null_glDebugMessageControl),
		DebugMessageInsert(Null_glDebugMessageInsert),
		DebugMessageCallback(Null_glDebugMessageCallback),
		GetDebugMessageLog(Null_glGetDebugMessageLog),
		PushDebugGroup(Null_glPushDebugGroup),
		PopDebugGroup(Null_glPopDebugGroup),
		ObjectLabel(Null_glObjectLabel),
		GetObjectLabel(Null_glGetObjectLabel),
		ObjectPtrLabel(Null_glObjectPtrLabel),
		GetObjectPtrLabel(Null_glGetObjectPtrLabel)
	{
		Available = Ver_Major > 4 || (Ver_Major == 4 && (Ver_Minor > 3 || (Ver_Minor == 3 && Ver_Release >= 0)));
		try
		{
			ClearBufferData = GetProc<PFNGLCLEARBUFFERDATAPROC>("glClearBufferData");
			ClearBufferSubData = GetProc<PFNGLCLEARBUFFERSUBDATAPROC>("glClearBufferSubData");
			DispatchCompute = GetProc<PFNGLDISPATCHCOMPUTEPROC>("glDispatchCompute");
			DispatchComputeIndirect = GetProc<PFNGLDISPATCHCOMPUTEINDIRECTPROC>("glDispatchComputeIndirect");
			CopyImageSubData = GetProc<PFNGLCOPYIMAGESUBDATAPROC>("glCopyImageSubData");
			FramebufferParameteri = GetProc<PFNGLFRAMEBUFFERPARAMETERIPROC>("glFramebufferParameteri");
			GetFramebufferParameteriv = GetProc<PFNGLGETFRAMEBUFFERPARAMETERIVPROC>("glGetFramebufferParameteriv");
			GetInternalformati64v = GetProc<PFNGLGETINTERNALFORMATI64VPROC>("glGetInternalformati64v");
			InvalidateTexSubImage = GetProc<PFNGLINVALIDATETEXSUBIMAGEPROC>("glInvalidateTexSubImage");
			InvalidateTexImage = GetProc<PFNGLINVALIDATETEXIMAGEPROC>("glInvalidateTexImage");
			InvalidateBufferSubData = GetProc<PFNGLINVALIDATEBUFFERSUBDATAPROC>("glInvalidateBufferSubData");
			InvalidateBufferData = GetProc<PFNGLINVALIDATEBUFFERDATAPROC>("glInvalidateBufferData");
			InvalidateFramebuffer = GetProc<PFNGLINVALIDATEFRAMEBUFFERPROC>("glInvalidateFramebuffer");
			InvalidateSubFramebuffer = GetProc<PFNGLINVALIDATESUBFRAMEBUFFERPROC>("glInvalidateSubFramebuffer");
			MultiDrawArraysIndirect = GetProc<PFNGLMULTIDRAWARRAYSINDIRECTPROC>("glMultiDrawArraysIndirect");
			MultiDrawElementsIndirect = GetProc<PFNGLMULTIDRAWELEMENTSINDIRECTPROC>("glMultiDrawElementsIndirect");
			GetProgramInterfaceiv = GetProc<PFNGLGETPROGRAMINTERFACEIVPROC>("glGetProgramInterfaceiv");
			GetProgramResourceIndex = GetProc<PFNGLGETPROGRAMRESOURCEINDEXPROC>("glGetProgramResourceIndex");
			GetProgramResourceName = GetProc<PFNGLGETPROGRAMRESOURCENAMEPROC>("glGetProgramResourceName");
			GetProgramResourceiv = GetProc<PFNGLGETPROGRAMRESOURCEIVPROC>("glGetProgramResourceiv");
			GetProgramResourceLocation = GetProc<PFNGLGETPROGRAMRESOURCELOCATIONPROC>("glGetProgramResourceLocation");
			GetProgramResourceLocationIndex = GetProc<PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC>("glGetProgramResourceLocationIndex");
			ShaderStorageBlockBinding = GetProc<PFNGLSHADERSTORAGEBLOCKBINDINGPROC>("glShaderStorageBlockBinding");
			TexBufferRange = GetProc<PFNGLTEXBUFFERRANGEPROC>("glTexBufferRange");
			TexStorage2DMultisample = GetProc<PFNGLTEXSTORAGE2DMULTISAMPLEPROC>("glTexStorage2DMultisample");
			TexStorage3DMultisample = GetProc<PFNGLTEXSTORAGE3DMULTISAMPLEPROC>("glTexStorage3DMultisample");
			TextureView = GetProc<PFNGLTEXTUREVIEWPROC>("glTextureView");
			BindVertexBuffer = GetProc<PFNGLBINDVERTEXBUFFERPROC>("glBindVertexBuffer");
			VertexAttribFormat = GetProc<PFNGLVERTEXATTRIBFORMATPROC>("glVertexAttribFormat");
			VertexAttribIFormat = GetProc<PFNGLVERTEXATTRIBIFORMATPROC>("glVertexAttribIFormat");
			VertexAttribLFormat = GetProc<PFNGLVERTEXATTRIBLFORMATPROC>("glVertexAttribLFormat");
			VertexAttribBinding = GetProc<PFNGLVERTEXATTRIBBINDINGPROC>("glVertexAttribBinding");
			VertexBindingDivisor = GetProc<PFNGLVERTEXBINDINGDIVISORPROC>("glVertexBindingDivisor");
			DebugMessageControl = GetProc<PFNGLDEBUGMESSAGECONTROLPROC>("glDebugMessageControl");
			DebugMessageInsert = GetProc<PFNGLDEBUGMESSAGEINSERTPROC>("glDebugMessageInsert");
			DebugMessageCallback = GetProc<PFNGLDEBUGMESSAGECALLBACKPROC>("glDebugMessageCallback");
			GetDebugMessageLog = GetProc<PFNGLGETDEBUGMESSAGELOGPROC>("glGetDebugMessageLog");
			PushDebugGroup = GetProc<PFNGLPUSHDEBUGGROUPPROC>("glPushDebugGroup");
			PopDebugGroup = GetProc<PFNGLPOPDEBUGGROUPPROC>("glPopDebugGroup");
			ObjectLabel = GetProc<PFNGLOBJECTLABELPROC>("glObjectLabel");
			GetObjectLabel = GetProc<PFNGLGETOBJECTLABELPROC>("glGetObjectLabel");
			ObjectPtrLabel = GetProc<PFNGLOBJECTPTRLABELPROC>("glObjectPtrLabel");
			GetObjectPtrLabel = GetProc<PFNGLGETOBJECTPTRLABELPROC>("glGetObjectPtrLabel");
		}
		catch (const NullFuncPtrException&)
		{
			Available = false;
		}
	}


	static void APIENTRY Null_glBufferStorage (GLenum target, GLsizeiptr size, const void* data, GLbitfield flags){ NullFuncPtr(); }
	static void APIENTRY Null_glClearTexImage (GLuint texture, GLint level, GLenum format, GLenum type, const void* data){ NullFuncPtr(); }
	static void APIENTRY Null_glClearTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void* data){ NullFuncPtr(); }
	static void APIENTRY Null_glBindBuffersBase (GLenum target, GLuint first, GLsizei count, const GLuint* buffers){ NullFuncPtr(); }
	static void APIENTRY Null_glBindBuffersRange (GLenum target, GLuint first, GLsizei count, const GLuint* buffers, const GLintptr* offsets, const GLsizeiptr* sizes){ NullFuncPtr(); }
	static void APIENTRY Null_glBindTextures (GLuint first, GLsizei count, const GLuint* textures){ NullFuncPtr(); }
	static void APIENTRY Null_glBindSamplers (GLuint first, GLsizei count, const GLuint* samplers){ NullFuncPtr(); }
	static void APIENTRY Null_glBindImageTextures (GLuint first, GLsizei count, const GLuint* textures){ NullFuncPtr(); }
	static void APIENTRY Null_glBindVertexBuffers (GLuint first, GLsizei count, const GLuint* buffers, const GLintptr* offsets, const GLsizei* strides){ NullFuncPtr(); }
	Version44::Version44(Func_GetProcAddress GetProcAddress):
		Version43(GetProcAddress),
		BufferStorage(Null_glBufferStorage),
		ClearTexImage(Null_glClearTexImage),
		ClearTexSubImage(Null_glClearTexSubImage),
		BindBuffersBase(Null_glBindBuffersBase),
		BindBuffersRange(Null_glBindBuffersRange),
		BindTextures(Null_glBindTextures),
		BindSamplers(Null_glBindSamplers),
		BindImageTextures(Null_glBindImageTextures),
		BindVertexBuffers(Null_glBindVertexBuffers)
	{
		Available = Ver_Major > 4 || (Ver_Major == 4 && (Ver_Minor > 4 || (Ver_Minor == 4 && Ver_Release >= 0)));
		try
		{
			BufferStorage = GetProc<PFNGLBUFFERSTORAGEPROC>("glBufferStorage");
			ClearTexImage = GetProc<PFNGLCLEARTEXIMAGEPROC>("glClearTexImage");
			ClearTexSubImage = GetProc<PFNGLCLEARTEXSUBIMAGEPROC>("glClearTexSubImage");
			BindBuffersBase = GetProc<PFNGLBINDBUFFERSBASEPROC>("glBindBuffersBase");
			BindBuffersRange = GetProc<PFNGLBINDBUFFERSRANGEPROC>("glBindBuffersRange");
			BindTextures = GetProc<PFNGLBINDTEXTURESPROC>("glBindTextures");
			BindSamplers = GetProc<PFNGLBINDSAMPLERSPROC>("glBindSamplers");
			BindImageTextures = GetProc<PFNGLBINDIMAGETEXTURESPROC>("glBindImageTextures");
			BindVertexBuffers = GetProc<PFNGLBINDVERTEXBUFFERSPROC>("glBindVertexBuffers");
		}
		catch (const NullFuncPtrException&)
		{
			Available = false;
		}
	}


	static void APIENTRY Null_glClipControl (GLenum origin, GLenum depth){ NullFuncPtr(); }
	static void APIENTRY Null_glCreateTransformFeedbacks (GLsizei n, GLuint* ids){ NullFuncPtr(); }
	static void APIENTRY Null_glTransformFeedbackBufferBase (GLuint xfb, GLuint index, GLuint buffer){ NullFuncPtr(); }
	static void APIENTRY Null_glTransformFeedbackBufferRange (GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size){ NullFuncPtr(); }
	static void APIENTRY Null_glGetTransformFeedbackiv (GLuint xfb, GLenum pname, GLint* param){ NullFuncPtr(); }
	static void APIENTRY Null_glGetTransformFeedbacki_v (GLuint xfb, GLenum pname, GLuint index, GLint* param){ NullFuncPtr(); }
	static void APIENTRY Null_glGetTransformFeedbacki64_v (GLuint xfb, GLenum pname, GLuint index, GLint64* param){ NullFuncPtr(); }
	static void APIENTRY Null_glCreateBuffers (GLsizei n, GLuint* buffers){ NullFuncPtr(); }
	static void APIENTRY Null_glNamedBufferStorage (GLuint buffer, GLsizeiptr size, const void* data, GLbitfield flags){ NullFuncPtr(); }
	static void APIENTRY Null_glNamedBufferData (GLuint buffer, GLsizeiptr size, const void* data, GLenum usage){ NullFuncPtr(); }
	static void APIENTRY Null_glNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, const void* data){ NullFuncPtr(); }
	static void APIENTRY Null_glCopyNamedBufferSubData (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size){ NullFuncPtr(); }
	static void APIENTRY Null_glClearNamedBufferData (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void* data){ NullFuncPtr(); }
	static void APIENTRY Null_glClearNamedBufferSubData (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void* data){ NullFuncPtr(); }
	static void* APIENTRY Null_glMapNamedBuffer (GLuint buffer, GLenum access){ NullFuncPtr(); return NULL; }
	static void* APIENTRY Null_glMapNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access){ NullFuncPtr(); return NULL; }
	static GLboolean APIENTRY Null_glUnmapNamedBuffer (GLuint buffer){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glFlushMappedNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length){ NullFuncPtr(); }
	static void APIENTRY Null_glGetNamedBufferParameteriv (GLuint buffer, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetNamedBufferParameteri64v (GLuint buffer, GLenum pname, GLint64* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetNamedBufferPointerv (GLuint buffer, GLenum pname, void** params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, void* data){ NullFuncPtr(); }
	static void APIENTRY Null_glCreateFramebuffers (GLsizei n, GLuint* framebuffers){ NullFuncPtr(); }
	static void APIENTRY Null_glNamedFramebufferRenderbuffer (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer){ NullFuncPtr(); }
	static void APIENTRY Null_glNamedFramebufferParameteri (GLuint framebuffer, GLenum pname, GLint param){ NullFuncPtr(); }
	static void APIENTRY Null_glNamedFramebufferTexture (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level){ NullFuncPtr(); }
	static void APIENTRY Null_glNamedFramebufferTextureLayer (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer){ NullFuncPtr(); }
	static void APIENTRY Null_glNamedFramebufferDrawBuffer (GLuint framebuffer, GLenum buf){ NullFuncPtr(); }
	static void APIENTRY Null_glNamedFramebufferDrawBuffers (GLuint framebuffer, GLsizei n, const GLenum* bufs){ NullFuncPtr(); }
	static void APIENTRY Null_glNamedFramebufferReadBuffer (GLuint framebuffer, GLenum src){ NullFuncPtr(); }
	static void APIENTRY Null_glInvalidateNamedFramebufferData (GLuint framebuffer, GLsizei numAttachments, const GLenum* attachments){ NullFuncPtr(); }
	static void APIENTRY Null_glInvalidateNamedFramebufferSubData (GLuint framebuffer, GLsizei numAttachments, const GLenum* attachments, GLint x, GLint y, GLsizei width, GLsizei height){ NullFuncPtr(); }
	static void APIENTRY Null_glClearNamedFramebufferiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glClearNamedFramebufferuiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint* value){ NullFuncPtr(); }
	static void APIENTRY Null_glClearNamedFramebufferfv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glClearNamedFramebufferfi (GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil){ NullFuncPtr(); }
	static void APIENTRY Null_glBlitNamedFramebuffer (GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter){ NullFuncPtr(); }
	static GLenum APIENTRY Null_glCheckNamedFramebufferStatus (GLuint framebuffer, GLenum target){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glGetNamedFramebufferParameteriv (GLuint framebuffer, GLenum pname, GLint* param){ NullFuncPtr(); }
	static void APIENTRY Null_glGetNamedFramebufferAttachmentParameteriv (GLuint framebuffer, GLenum attachment, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glCreateRenderbuffers (GLsizei n, GLuint* renderbuffers){ NullFuncPtr(); }
	static void APIENTRY Null_glNamedRenderbufferStorage (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height){ NullFuncPtr(); }
	static void APIENTRY Null_glNamedRenderbufferStorageMultisample (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height){ NullFuncPtr(); }
	static void APIENTRY Null_glGetNamedRenderbufferParameteriv (GLuint renderbuffer, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glCreateTextures (GLenum target, GLsizei n, GLuint* textures){ NullFuncPtr(); }
	static void APIENTRY Null_glTextureBuffer (GLuint texture, GLenum internalformat, GLuint buffer){ NullFuncPtr(); }
	static void APIENTRY Null_glTextureBufferRange (GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size){ NullFuncPtr(); }
	static void APIENTRY Null_glTextureStorage1D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width){ NullFuncPtr(); }
	static void APIENTRY Null_glTextureStorage2D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height){ NullFuncPtr(); }
	static void APIENTRY Null_glTextureStorage3D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth){ NullFuncPtr(); }
	static void APIENTRY Null_glTextureStorage2DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations){ NullFuncPtr(); }
	static void APIENTRY Null_glTextureStorage3DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations){ NullFuncPtr(); }
	static void APIENTRY Null_glTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void* pixels){ NullFuncPtr(); }
	static void APIENTRY Null_glTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels){ NullFuncPtr(); }
	static void APIENTRY Null_glTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void* pixels){ NullFuncPtr(); }
	static void APIENTRY Null_glCompressedTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void* data){ NullFuncPtr(); }
	static void APIENTRY Null_glCompressedTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void* data){ NullFuncPtr(); }
	static void APIENTRY Null_glCompressedTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void* data){ NullFuncPtr(); }
	static void APIENTRY Null_glCopyTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width){ NullFuncPtr(); }
	static void APIENTRY Null_glCopyTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height){ NullFuncPtr(); }
	static void APIENTRY Null_glCopyTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height){ NullFuncPtr(); }
	static void APIENTRY Null_glTextureParameterf (GLuint texture, GLenum pname, GLfloat param){ NullFuncPtr(); }
	static void APIENTRY Null_glTextureParameterfv (GLuint texture, GLenum pname, const GLfloat* param){ NullFuncPtr(); }
	static void APIENTRY Null_glTextureParameteri (GLuint texture, GLenum pname, GLint param){ NullFuncPtr(); }
	static void APIENTRY Null_glTextureParameterIiv (GLuint texture, GLenum pname, const GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glTextureParameterIuiv (GLuint texture, GLenum pname, const GLuint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glTextureParameteriv (GLuint texture, GLenum pname, const GLint* param){ NullFuncPtr(); }
	static void APIENTRY Null_glGenerateTextureMipmap (GLuint texture){ NullFuncPtr(); }
	static void APIENTRY Null_glBindTextureUnit (GLuint unit, GLuint texture){ NullFuncPtr(); }
	static void APIENTRY Null_glGetTextureImage (GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void* pixels){ NullFuncPtr(); }
	static void APIENTRY Null_glGetCompressedTextureImage (GLuint texture, GLint level, GLsizei bufSize, void* pixels){ NullFuncPtr(); }
	static void APIENTRY Null_glGetTextureLevelParameterfv (GLuint texture, GLint level, GLenum pname, GLfloat* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetTextureLevelParameteriv (GLuint texture, GLint level, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetTextureParameterfv (GLuint texture, GLenum pname, GLfloat* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetTextureParameterIiv (GLuint texture, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetTextureParameterIuiv (GLuint texture, GLenum pname, GLuint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetTextureParameteriv (GLuint texture, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glCreateVertexArrays (GLsizei n, GLuint* arrays){ NullFuncPtr(); }
	static void APIENTRY Null_glDisableVertexArrayAttrib (GLuint vaobj, GLuint index){ NullFuncPtr(); }
	static void APIENTRY Null_glEnableVertexArrayAttrib (GLuint vaobj, GLuint index){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexArrayElementBuffer (GLuint vaobj, GLuint buffer){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexArrayVertexBuffer (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexArrayVertexBuffers (GLuint vaobj, GLuint first, GLsizei count, const GLuint* buffers, const GLintptr* offsets, const GLsizei* strides){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexArrayAttribBinding (GLuint vaobj, GLuint attribindex, GLuint bindingindex){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexArrayAttribFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexArrayAttribIFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexArrayAttribLFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset){ NullFuncPtr(); }
	static void APIENTRY Null_glVertexArrayBindingDivisor (GLuint vaobj, GLuint bindingindex, GLuint divisor){ NullFuncPtr(); }
	static void APIENTRY Null_glGetVertexArrayiv (GLuint vaobj, GLenum pname, GLint* param){ NullFuncPtr(); }
	static void APIENTRY Null_glGetVertexArrayIndexediv (GLuint vaobj, GLuint index, GLenum pname, GLint* param){ NullFuncPtr(); }
	static void APIENTRY Null_glGetVertexArrayIndexed64iv (GLuint vaobj, GLuint index, GLenum pname, GLint64* param){ NullFuncPtr(); }
	static void APIENTRY Null_glCreateSamplers (GLsizei n, GLuint* samplers){ NullFuncPtr(); }
	static void APIENTRY Null_glCreateProgramPipelines (GLsizei n, GLuint* pipelines){ NullFuncPtr(); }
	static void APIENTRY Null_glCreateQueries (GLenum target, GLsizei n, GLuint* ids){ NullFuncPtr(); }
	static void APIENTRY Null_glGetQueryBufferObjecti64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset){ NullFuncPtr(); }
	static void APIENTRY Null_glGetQueryBufferObjectiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset){ NullFuncPtr(); }
	static void APIENTRY Null_glGetQueryBufferObjectui64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset){ NullFuncPtr(); }
	static void APIENTRY Null_glGetQueryBufferObjectuiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset){ NullFuncPtr(); }
	static void APIENTRY Null_glMemoryBarrierByRegion (GLbitfield barriers){ NullFuncPtr(); }
	static void APIENTRY Null_glGetTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void* pixels){ NullFuncPtr(); }
	static void APIENTRY Null_glGetCompressedTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void* pixels){ NullFuncPtr(); }
	static GLenum APIENTRY Null_glGetGraphicsResetStatus (void){ NullFuncPtr(); return NULL; }
	static void APIENTRY Null_glGetnCompressedTexImage (GLenum target, GLint lod, GLsizei bufSize, void* pixels){ NullFuncPtr(); }
	static void APIENTRY Null_glGetnTexImage (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void* pixels){ NullFuncPtr(); }
	static void APIENTRY Null_glGetnUniformdv (GLuint program, GLint location, GLsizei bufSize, GLdouble* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetnUniformfv (GLuint program, GLint location, GLsizei bufSize, GLfloat* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetnUniformiv (GLuint program, GLint location, GLsizei bufSize, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetnUniformuiv (GLuint program, GLint location, GLsizei bufSize, GLuint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glReadnPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void* data){ NullFuncPtr(); }
	static void APIENTRY Null_glGetnMapdv (GLenum target, GLenum query, GLsizei bufSize, GLdouble* v){ NullFuncPtr(); }
	static void APIENTRY Null_glGetnMapfv (GLenum target, GLenum query, GLsizei bufSize, GLfloat* v){ NullFuncPtr(); }
	static void APIENTRY Null_glGetnMapiv (GLenum target, GLenum query, GLsizei bufSize, GLint* v){ NullFuncPtr(); }
	static void APIENTRY Null_glGetnPixelMapfv (GLenum map, GLsizei bufSize, GLfloat* values){ NullFuncPtr(); }
	static void APIENTRY Null_glGetnPixelMapuiv (GLenum map, GLsizei bufSize, GLuint* values){ NullFuncPtr(); }
	static void APIENTRY Null_glGetnPixelMapusv (GLenum map, GLsizei bufSize, GLushort* values){ NullFuncPtr(); }
	static void APIENTRY Null_glGetnPolygonStipple (GLsizei bufSize, GLubyte* pattern){ NullFuncPtr(); }
	static void APIENTRY Null_glGetnColorTable (GLenum target, GLenum format, GLenum type, GLsizei bufSize, void* table){ NullFuncPtr(); }
	static void APIENTRY Null_glGetnConvolutionFilter (GLenum target, GLenum format, GLenum type, GLsizei bufSize, void* image){ NullFuncPtr(); }
	static void APIENTRY Null_glGetnSeparableFilter (GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void* row, GLsizei columnBufSize, void* column, void* span){ NullFuncPtr(); }
	static void APIENTRY Null_glGetnHistogram (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void* values){ NullFuncPtr(); }
	static void APIENTRY Null_glGetnMinmax (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void* values){ NullFuncPtr(); }
	static void APIENTRY Null_glTextureBarrier (void){ NullFuncPtr(); }
	Version45::Version45(Func_GetProcAddress GetProcAddress):
		Version44(GetProcAddress),
		ClipControl(Null_glClipControl),
		CreateTransformFeedbacks(Null_glCreateTransformFeedbacks),
		TransformFeedbackBufferBase(Null_glTransformFeedbackBufferBase),
		TransformFeedbackBufferRange(Null_glTransformFeedbackBufferRange),
		GetTransformFeedbackiv(Null_glGetTransformFeedbackiv),
		GetTransformFeedbacki_v(Null_glGetTransformFeedbacki_v),
		GetTransformFeedbacki64_v(Null_glGetTransformFeedbacki64_v),
		CreateBuffers(Null_glCreateBuffers),
		NamedBufferStorage(Null_glNamedBufferStorage),
		NamedBufferData(Null_glNamedBufferData),
		NamedBufferSubData(Null_glNamedBufferSubData),
		CopyNamedBufferSubData(Null_glCopyNamedBufferSubData),
		ClearNamedBufferData(Null_glClearNamedBufferData),
		ClearNamedBufferSubData(Null_glClearNamedBufferSubData),
		MapNamedBuffer(Null_glMapNamedBuffer),
		MapNamedBufferRange(Null_glMapNamedBufferRange),
		UnmapNamedBuffer(Null_glUnmapNamedBuffer),
		FlushMappedNamedBufferRange(Null_glFlushMappedNamedBufferRange),
		GetNamedBufferParameteriv(Null_glGetNamedBufferParameteriv),
		GetNamedBufferParameteri64v(Null_glGetNamedBufferParameteri64v),
		GetNamedBufferPointerv(Null_glGetNamedBufferPointerv),
		GetNamedBufferSubData(Null_glGetNamedBufferSubData),
		CreateFramebuffers(Null_glCreateFramebuffers),
		NamedFramebufferRenderbuffer(Null_glNamedFramebufferRenderbuffer),
		NamedFramebufferParameteri(Null_glNamedFramebufferParameteri),
		NamedFramebufferTexture(Null_glNamedFramebufferTexture),
		NamedFramebufferTextureLayer(Null_glNamedFramebufferTextureLayer),
		NamedFramebufferDrawBuffer(Null_glNamedFramebufferDrawBuffer),
		NamedFramebufferDrawBuffers(Null_glNamedFramebufferDrawBuffers),
		NamedFramebufferReadBuffer(Null_glNamedFramebufferReadBuffer),
		InvalidateNamedFramebufferData(Null_glInvalidateNamedFramebufferData),
		InvalidateNamedFramebufferSubData(Null_glInvalidateNamedFramebufferSubData),
		ClearNamedFramebufferiv(Null_glClearNamedFramebufferiv),
		ClearNamedFramebufferuiv(Null_glClearNamedFramebufferuiv),
		ClearNamedFramebufferfv(Null_glClearNamedFramebufferfv),
		ClearNamedFramebufferfi(Null_glClearNamedFramebufferfi),
		BlitNamedFramebuffer(Null_glBlitNamedFramebuffer),
		CheckNamedFramebufferStatus(Null_glCheckNamedFramebufferStatus),
		GetNamedFramebufferParameteriv(Null_glGetNamedFramebufferParameteriv),
		GetNamedFramebufferAttachmentParameteriv(Null_glGetNamedFramebufferAttachmentParameteriv),
		CreateRenderbuffers(Null_glCreateRenderbuffers),
		NamedRenderbufferStorage(Null_glNamedRenderbufferStorage),
		NamedRenderbufferStorageMultisample(Null_glNamedRenderbufferStorageMultisample),
		GetNamedRenderbufferParameteriv(Null_glGetNamedRenderbufferParameteriv),
		CreateTextures(Null_glCreateTextures),
		TextureBuffer(Null_glTextureBuffer),
		TextureBufferRange(Null_glTextureBufferRange),
		TextureStorage1D(Null_glTextureStorage1D),
		TextureStorage2D(Null_glTextureStorage2D),
		TextureStorage3D(Null_glTextureStorage3D),
		TextureStorage2DMultisample(Null_glTextureStorage2DMultisample),
		TextureStorage3DMultisample(Null_glTextureStorage3DMultisample),
		TextureSubImage1D(Null_glTextureSubImage1D),
		TextureSubImage2D(Null_glTextureSubImage2D),
		TextureSubImage3D(Null_glTextureSubImage3D),
		CompressedTextureSubImage1D(Null_glCompressedTextureSubImage1D),
		CompressedTextureSubImage2D(Null_glCompressedTextureSubImage2D),
		CompressedTextureSubImage3D(Null_glCompressedTextureSubImage3D),
		CopyTextureSubImage1D(Null_glCopyTextureSubImage1D),
		CopyTextureSubImage2D(Null_glCopyTextureSubImage2D),
		CopyTextureSubImage3D(Null_glCopyTextureSubImage3D),
		TextureParameterf(Null_glTextureParameterf),
		TextureParameterfv(Null_glTextureParameterfv),
		TextureParameteri(Null_glTextureParameteri),
		TextureParameterIiv(Null_glTextureParameterIiv),
		TextureParameterIuiv(Null_glTextureParameterIuiv),
		TextureParameteriv(Null_glTextureParameteriv),
		GenerateTextureMipmap(Null_glGenerateTextureMipmap),
		BindTextureUnit(Null_glBindTextureUnit),
		GetTextureImage(Null_glGetTextureImage),
		GetCompressedTextureImage(Null_glGetCompressedTextureImage),
		GetTextureLevelParameterfv(Null_glGetTextureLevelParameterfv),
		GetTextureLevelParameteriv(Null_glGetTextureLevelParameteriv),
		GetTextureParameterfv(Null_glGetTextureParameterfv),
		GetTextureParameterIiv(Null_glGetTextureParameterIiv),
		GetTextureParameterIuiv(Null_glGetTextureParameterIuiv),
		GetTextureParameteriv(Null_glGetTextureParameteriv),
		CreateVertexArrays(Null_glCreateVertexArrays),
		DisableVertexArrayAttrib(Null_glDisableVertexArrayAttrib),
		EnableVertexArrayAttrib(Null_glEnableVertexArrayAttrib),
		VertexArrayElementBuffer(Null_glVertexArrayElementBuffer),
		VertexArrayVertexBuffer(Null_glVertexArrayVertexBuffer),
		VertexArrayVertexBuffers(Null_glVertexArrayVertexBuffers),
		VertexArrayAttribBinding(Null_glVertexArrayAttribBinding),
		VertexArrayAttribFormat(Null_glVertexArrayAttribFormat),
		VertexArrayAttribIFormat(Null_glVertexArrayAttribIFormat),
		VertexArrayAttribLFormat(Null_glVertexArrayAttribLFormat),
		VertexArrayBindingDivisor(Null_glVertexArrayBindingDivisor),
		GetVertexArrayiv(Null_glGetVertexArrayiv),
		GetVertexArrayIndexediv(Null_glGetVertexArrayIndexediv),
		GetVertexArrayIndexed64iv(Null_glGetVertexArrayIndexed64iv),
		CreateSamplers(Null_glCreateSamplers),
		CreateProgramPipelines(Null_glCreateProgramPipelines),
		CreateQueries(Null_glCreateQueries),
		GetQueryBufferObjecti64v(Null_glGetQueryBufferObjecti64v),
		GetQueryBufferObjectiv(Null_glGetQueryBufferObjectiv),
		GetQueryBufferObjectui64v(Null_glGetQueryBufferObjectui64v),
		GetQueryBufferObjectuiv(Null_glGetQueryBufferObjectuiv),
		MemoryBarrierByRegion(Null_glMemoryBarrierByRegion),
		GetTextureSubImage(Null_glGetTextureSubImage),
		GetCompressedTextureSubImage(Null_glGetCompressedTextureSubImage),
		GetGraphicsResetStatus(Null_glGetGraphicsResetStatus),
		GetnCompressedTexImage(Null_glGetnCompressedTexImage),
		GetnTexImage(Null_glGetnTexImage),
		GetnUniformdv(Null_glGetnUniformdv),
		GetnUniformfv(Null_glGetnUniformfv),
		GetnUniformiv(Null_glGetnUniformiv),
		GetnUniformuiv(Null_glGetnUniformuiv),
		ReadnPixels(Null_glReadnPixels),
		GetnMapdv(Null_glGetnMapdv),
		GetnMapfv(Null_glGetnMapfv),
		GetnMapiv(Null_glGetnMapiv),
		GetnPixelMapfv(Null_glGetnPixelMapfv),
		GetnPixelMapuiv(Null_glGetnPixelMapuiv),
		GetnPixelMapusv(Null_glGetnPixelMapusv),
		GetnPolygonStipple(Null_glGetnPolygonStipple),
		GetnColorTable(Null_glGetnColorTable),
		GetnConvolutionFilter(Null_glGetnConvolutionFilter),
		GetnSeparableFilter(Null_glGetnSeparableFilter),
		GetnHistogram(Null_glGetnHistogram),
		GetnMinmax(Null_glGetnMinmax),
		TextureBarrier(Null_glTextureBarrier)
	{
		Available = Ver_Major > 4 || (Ver_Major == 4 && (Ver_Minor > 5 || (Ver_Minor == 5 && Ver_Release >= 0)));
		try
		{
			ClipControl = GetProc<PFNGLCLIPCONTROLPROC>("glClipControl");
			CreateTransformFeedbacks = GetProc<PFNGLCREATETRANSFORMFEEDBACKSPROC>("glCreateTransformFeedbacks");
			TransformFeedbackBufferBase = GetProc<PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC>("glTransformFeedbackBufferBase");
			TransformFeedbackBufferRange = GetProc<PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC>("glTransformFeedbackBufferRange");
			GetTransformFeedbackiv = GetProc<PFNGLGETTRANSFORMFEEDBACKIVPROC>("glGetTransformFeedbackiv");
			GetTransformFeedbacki_v = GetProc<PFNGLGETTRANSFORMFEEDBACKI_VPROC>("glGetTransformFeedbacki_v");
			GetTransformFeedbacki64_v = GetProc<PFNGLGETTRANSFORMFEEDBACKI64_VPROC>("glGetTransformFeedbacki64_v");
			CreateBuffers = GetProc<PFNGLCREATEBUFFERSPROC>("glCreateBuffers");
			NamedBufferStorage = GetProc<PFNGLNAMEDBUFFERSTORAGEPROC>("glNamedBufferStorage");
			NamedBufferData = GetProc<PFNGLNAMEDBUFFERDATAPROC>("glNamedBufferData");
			NamedBufferSubData = GetProc<PFNGLNAMEDBUFFERSUBDATAPROC>("glNamedBufferSubData");
			CopyNamedBufferSubData = GetProc<PFNGLCOPYNAMEDBUFFERSUBDATAPROC>("glCopyNamedBufferSubData");
			ClearNamedBufferData = GetProc<PFNGLCLEARNAMEDBUFFERDATAPROC>("glClearNamedBufferData");
			ClearNamedBufferSubData = GetProc<PFNGLCLEARNAMEDBUFFERSUBDATAPROC>("glClearNamedBufferSubData");
			MapNamedBuffer = GetProc<PFNGLMAPNAMEDBUFFERPROC>("glMapNamedBuffer");
			MapNamedBufferRange = GetProc<PFNGLMAPNAMEDBUFFERRANGEPROC>("glMapNamedBufferRange");
			UnmapNamedBuffer = GetProc<PFNGLUNMAPNAMEDBUFFERPROC>("glUnmapNamedBuffer");
			FlushMappedNamedBufferRange = GetProc<PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC>("glFlushMappedNamedBufferRange");
			GetNamedBufferParameteriv = GetProc<PFNGLGETNAMEDBUFFERPARAMETERIVPROC>("glGetNamedBufferParameteriv");
			GetNamedBufferParameteri64v = GetProc<PFNGLGETNAMEDBUFFERPARAMETERI64VPROC>("glGetNamedBufferParameteri64v");
			GetNamedBufferPointerv = GetProc<PFNGLGETNAMEDBUFFERPOINTERVPROC>("glGetNamedBufferPointerv");
			GetNamedBufferSubData = GetProc<PFNGLGETNAMEDBUFFERSUBDATAPROC>("glGetNamedBufferSubData");
			CreateFramebuffers = GetProc<PFNGLCREATEFRAMEBUFFERSPROC>("glCreateFramebuffers");
			NamedFramebufferRenderbuffer = GetProc<PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC>("glNamedFramebufferRenderbuffer");
			NamedFramebufferParameteri = GetProc<PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC>("glNamedFramebufferParameteri");
			NamedFramebufferTexture = GetProc<PFNGLNAMEDFRAMEBUFFERTEXTUREPROC>("glNamedFramebufferTexture");
			NamedFramebufferTextureLayer = GetProc<PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC>("glNamedFramebufferTextureLayer");
			NamedFramebufferDrawBuffer = GetProc<PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC>("glNamedFramebufferDrawBuffer");
			NamedFramebufferDrawBuffers = GetProc<PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC>("glNamedFramebufferDrawBuffers");
			NamedFramebufferReadBuffer = GetProc<PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC>("glNamedFramebufferReadBuffer");
			InvalidateNamedFramebufferData = GetProc<PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC>("glInvalidateNamedFramebufferData");
			InvalidateNamedFramebufferSubData = GetProc<PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC>("glInvalidateNamedFramebufferSubData");
			ClearNamedFramebufferiv = GetProc<PFNGLCLEARNAMEDFRAMEBUFFERIVPROC>("glClearNamedFramebufferiv");
			ClearNamedFramebufferuiv = GetProc<PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC>("glClearNamedFramebufferuiv");
			ClearNamedFramebufferfv = GetProc<PFNGLCLEARNAMEDFRAMEBUFFERFVPROC>("glClearNamedFramebufferfv");
			ClearNamedFramebufferfi = GetProc<PFNGLCLEARNAMEDFRAMEBUFFERFIPROC>("glClearNamedFramebufferfi");
			BlitNamedFramebuffer = GetProc<PFNGLBLITNAMEDFRAMEBUFFERPROC>("glBlitNamedFramebuffer");
			CheckNamedFramebufferStatus = GetProc<PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC>("glCheckNamedFramebufferStatus");
			GetNamedFramebufferParameteriv = GetProc<PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC>("glGetNamedFramebufferParameteriv");
			GetNamedFramebufferAttachmentParameteriv = GetProc<PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC>("glGetNamedFramebufferAttachmentParameteriv");
			CreateRenderbuffers = GetProc<PFNGLCREATERENDERBUFFERSPROC>("glCreateRenderbuffers");
			NamedRenderbufferStorage = GetProc<PFNGLNAMEDRENDERBUFFERSTORAGEPROC>("glNamedRenderbufferStorage");
			NamedRenderbufferStorageMultisample = GetProc<PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC>("glNamedRenderbufferStorageMultisample");
			GetNamedRenderbufferParameteriv = GetProc<PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC>("glGetNamedRenderbufferParameteriv");
			CreateTextures = GetProc<PFNGLCREATETEXTURESPROC>("glCreateTextures");
			TextureBuffer = GetProc<PFNGLTEXTUREBUFFERPROC>("glTextureBuffer");
			TextureBufferRange = GetProc<PFNGLTEXTUREBUFFERRANGEPROC>("glTextureBufferRange");
			TextureStorage1D = GetProc<PFNGLTEXTURESTORAGE1DPROC>("glTextureStorage1D");
			TextureStorage2D = GetProc<PFNGLTEXTURESTORAGE2DPROC>("glTextureStorage2D");
			TextureStorage3D = GetProc<PFNGLTEXTURESTORAGE3DPROC>("glTextureStorage3D");
			TextureStorage2DMultisample = GetProc<PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC>("glTextureStorage2DMultisample");
			TextureStorage3DMultisample = GetProc<PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC>("glTextureStorage3DMultisample");
			TextureSubImage1D = GetProc<PFNGLTEXTURESUBIMAGE1DPROC>("glTextureSubImage1D");
			TextureSubImage2D = GetProc<PFNGLTEXTURESUBIMAGE2DPROC>("glTextureSubImage2D");
			TextureSubImage3D = GetProc<PFNGLTEXTURESUBIMAGE3DPROC>("glTextureSubImage3D");
			CompressedTextureSubImage1D = GetProc<PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC>("glCompressedTextureSubImage1D");
			CompressedTextureSubImage2D = GetProc<PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC>("glCompressedTextureSubImage2D");
			CompressedTextureSubImage3D = GetProc<PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC>("glCompressedTextureSubImage3D");
			CopyTextureSubImage1D = GetProc<PFNGLCOPYTEXTURESUBIMAGE1DPROC>("glCopyTextureSubImage1D");
			CopyTextureSubImage2D = GetProc<PFNGLCOPYTEXTURESUBIMAGE2DPROC>("glCopyTextureSubImage2D");
			CopyTextureSubImage3D = GetProc<PFNGLCOPYTEXTURESUBIMAGE3DPROC>("glCopyTextureSubImage3D");
			TextureParameterf = GetProc<PFNGLTEXTUREPARAMETERFPROC>("glTextureParameterf");
			TextureParameterfv = GetProc<PFNGLTEXTUREPARAMETERFVPROC>("glTextureParameterfv");
			TextureParameteri = GetProc<PFNGLTEXTUREPARAMETERIPROC>("glTextureParameteri");
			TextureParameterIiv = GetProc<PFNGLTEXTUREPARAMETERIIVPROC>("glTextureParameterIiv");
			TextureParameterIuiv = GetProc<PFNGLTEXTUREPARAMETERIUIVPROC>("glTextureParameterIuiv");
			TextureParameteriv = GetProc<PFNGLTEXTUREPARAMETERIVPROC>("glTextureParameteriv");
			GenerateTextureMipmap = GetProc<PFNGLGENERATETEXTUREMIPMAPPROC>("glGenerateTextureMipmap");
			BindTextureUnit = GetProc<PFNGLBINDTEXTUREUNITPROC>("glBindTextureUnit");
			GetTextureImage = GetProc<PFNGLGETTEXTUREIMAGEPROC>("glGetTextureImage");
			GetCompressedTextureImage = GetProc<PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC>("glGetCompressedTextureImage");
			GetTextureLevelParameterfv = GetProc<PFNGLGETTEXTURELEVELPARAMETERFVPROC>("glGetTextureLevelParameterfv");
			GetTextureLevelParameteriv = GetProc<PFNGLGETTEXTURELEVELPARAMETERIVPROC>("glGetTextureLevelParameteriv");
			GetTextureParameterfv = GetProc<PFNGLGETTEXTUREPARAMETERFVPROC>("glGetTextureParameterfv");
			GetTextureParameterIiv = GetProc<PFNGLGETTEXTUREPARAMETERIIVPROC>("glGetTextureParameterIiv");
			GetTextureParameterIuiv = GetProc<PFNGLGETTEXTUREPARAMETERIUIVPROC>("glGetTextureParameterIuiv");
			GetTextureParameteriv = GetProc<PFNGLGETTEXTUREPARAMETERIVPROC>("glGetTextureParameteriv");
			CreateVertexArrays = GetProc<PFNGLCREATEVERTEXARRAYSPROC>("glCreateVertexArrays");
			DisableVertexArrayAttrib = GetProc<PFNGLDISABLEVERTEXARRAYATTRIBPROC>("glDisableVertexArrayAttrib");
			EnableVertexArrayAttrib = GetProc<PFNGLENABLEVERTEXARRAYATTRIBPROC>("glEnableVertexArrayAttrib");
			VertexArrayElementBuffer = GetProc<PFNGLVERTEXARRAYELEMENTBUFFERPROC>("glVertexArrayElementBuffer");
			VertexArrayVertexBuffer = GetProc<PFNGLVERTEXARRAYVERTEXBUFFERPROC>("glVertexArrayVertexBuffer");
			VertexArrayVertexBuffers = GetProc<PFNGLVERTEXARRAYVERTEXBUFFERSPROC>("glVertexArrayVertexBuffers");
			VertexArrayAttribBinding = GetProc<PFNGLVERTEXARRAYATTRIBBINDINGPROC>("glVertexArrayAttribBinding");
			VertexArrayAttribFormat = GetProc<PFNGLVERTEXARRAYATTRIBFORMATPROC>("glVertexArrayAttribFormat");
			VertexArrayAttribIFormat = GetProc<PFNGLVERTEXARRAYATTRIBIFORMATPROC>("glVertexArrayAttribIFormat");
			VertexArrayAttribLFormat = GetProc<PFNGLVERTEXARRAYATTRIBLFORMATPROC>("glVertexArrayAttribLFormat");
			VertexArrayBindingDivisor = GetProc<PFNGLVERTEXARRAYBINDINGDIVISORPROC>("glVertexArrayBindingDivisor");
			GetVertexArrayiv = GetProc<PFNGLGETVERTEXARRAYIVPROC>("glGetVertexArrayiv");
			GetVertexArrayIndexediv = GetProc<PFNGLGETVERTEXARRAYINDEXEDIVPROC>("glGetVertexArrayIndexediv");
			GetVertexArrayIndexed64iv = GetProc<PFNGLGETVERTEXARRAYINDEXED64IVPROC>("glGetVertexArrayIndexed64iv");
			CreateSamplers = GetProc<PFNGLCREATESAMPLERSPROC>("glCreateSamplers");
			CreateProgramPipelines = GetProc<PFNGLCREATEPROGRAMPIPELINESPROC>("glCreateProgramPipelines");
			CreateQueries = GetProc<PFNGLCREATEQUERIESPROC>("glCreateQueries");
			GetQueryBufferObjecti64v = GetProc<PFNGLGETQUERYBUFFEROBJECTI64VPROC>("glGetQueryBufferObjecti64v");
			GetQueryBufferObjectiv = GetProc<PFNGLGETQUERYBUFFEROBJECTIVPROC>("glGetQueryBufferObjectiv");
			GetQueryBufferObjectui64v = GetProc<PFNGLGETQUERYBUFFEROBJECTUI64VPROC>("glGetQueryBufferObjectui64v");
			GetQueryBufferObjectuiv = GetProc<PFNGLGETQUERYBUFFEROBJECTUIVPROC>("glGetQueryBufferObjectuiv");
			MemoryBarrierByRegion = GetProc<PFNGLMEMORYBARRIERBYREGIONPROC>("glMemoryBarrierByRegion");
			GetTextureSubImage = GetProc<PFNGLGETTEXTURESUBIMAGEPROC>("glGetTextureSubImage");
			GetCompressedTextureSubImage = GetProc<PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC>("glGetCompressedTextureSubImage");
			GetGraphicsResetStatus = GetProc<PFNGLGETGRAPHICSRESETSTATUSPROC>("glGetGraphicsResetStatus");
			GetnCompressedTexImage = GetProc<PFNGLGETNCOMPRESSEDTEXIMAGEPROC>("glGetnCompressedTexImage");
			GetnTexImage = GetProc<PFNGLGETNTEXIMAGEPROC>("glGetnTexImage");
			GetnUniformdv = GetProc<PFNGLGETNUNIFORMDVPROC>("glGetnUniformdv");
			GetnUniformfv = GetProc<PFNGLGETNUNIFORMFVPROC>("glGetnUniformfv");
			GetnUniformiv = GetProc<PFNGLGETNUNIFORMIVPROC>("glGetnUniformiv");
			GetnUniformuiv = GetProc<PFNGLGETNUNIFORMUIVPROC>("glGetnUniformuiv");
			ReadnPixels = GetProc<PFNGLREADNPIXELSPROC>("glReadnPixels");
			GetnMapdv = GetProc<PFNGLGETNMAPDVPROC>("glGetnMapdv");
			GetnMapfv = GetProc<PFNGLGETNMAPFVPROC>("glGetnMapfv");
			GetnMapiv = GetProc<PFNGLGETNMAPIVPROC>("glGetnMapiv");
			GetnPixelMapfv = GetProc<PFNGLGETNPIXELMAPFVPROC>("glGetnPixelMapfv");
			GetnPixelMapuiv = GetProc<PFNGLGETNPIXELMAPUIVPROC>("glGetnPixelMapuiv");
			GetnPixelMapusv = GetProc<PFNGLGETNPIXELMAPUSVPROC>("glGetnPixelMapusv");
			GetnPolygonStipple = GetProc<PFNGLGETNPOLYGONSTIPPLEPROC>("glGetnPolygonStipple");
			GetnColorTable = GetProc<PFNGLGETNCOLORTABLEPROC>("glGetnColorTable");
			GetnConvolutionFilter = GetProc<PFNGLGETNCONVOLUTIONFILTERPROC>("glGetnConvolutionFilter");
			GetnSeparableFilter = GetProc<PFNGLGETNSEPARABLEFILTERPROC>("glGetnSeparableFilter");
			GetnHistogram = GetProc<PFNGLGETNHISTOGRAMPROC>("glGetnHistogram");
			GetnMinmax = GetProc<PFNGLGETNMINMAXPROC>("glGetnMinmax");
			TextureBarrier = GetProc<PFNGLTEXTUREBARRIERPROC>("glTextureBarrier");
		}
		catch (const NullFuncPtrException&)
		{
			Available = false;
		}
	}


	static void APIENTRY Null_glSpecializeShader (GLuint shader, const GLchar* pEntryPoint, GLuint numSpecializationConstants, const GLuint* pConstantIndex, const GLuint* pConstantValue){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiDrawArraysIndirectCount (GLenum mode, const void* indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiDrawElementsIndirectCount (GLenum mode, GLenum type, const void* indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride){ NullFuncPtr(); }
	static void APIENTRY Null_glPolygonOffsetClamp (GLfloat factor, GLfloat units, GLfloat clamp){ NullFuncPtr(); }
	Version46::Version46(Func_GetProcAddress GetProcAddress):
		Version45(GetProcAddress),
		SpecializeShader(Null_glSpecializeShader),
		MultiDrawArraysIndirectCount(Null_glMultiDrawArraysIndirectCount),
		MultiDrawElementsIndirectCount(Null_glMultiDrawElementsIndirectCount),
		PolygonOffsetClamp(Null_glPolygonOffsetClamp)
	{
		Available = Ver_Major > 4 || (Ver_Major == 4 && (Ver_Minor > 6 || (Ver_Minor == 6 && Ver_Release >= 0)));
		try
		{
			SpecializeShader = GetProc<PFNGLSPECIALIZESHADERPROC>("glSpecializeShader");
			MultiDrawArraysIndirectCount = GetProc<PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC>("glMultiDrawArraysIndirectCount");
			MultiDrawElementsIndirectCount = GetProc<PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC>("glMultiDrawElementsIndirectCount");
			PolygonOffsetClamp = GetProc<PFNGLPOLYGONOFFSETCLAMPPROC>("glPolygonOffsetClamp");
		}
		catch (const NullFuncPtrException&)
		{
			Available = false;
		}
	}


};
