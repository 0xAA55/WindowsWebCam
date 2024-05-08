#include "glcore.hpp"

#include<cstring>

#ifndef GLAPI
#  if defined(__MINGW32__) || defined(__CYGWIN__) || (_MSC_VER >= 800) || defined(_STDCALL_SUPPORTED) || defined(__BORLANDC__)
#    define GLAPI extern "C" __declspec(dllimport)
#  else
#    define GLAPI extern "C"
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

	static void APIENTRY Null_glCullFace (GLenum mode){ NullFuncPtr(); }
	static void APIENTRY Null_glFrontFace (GLenum mode){ NullFuncPtr(); }
	static void APIENTRY Null_glHint (GLenum target, GLenum mode){ NullFuncPtr(); }
	static void APIENTRY Null_glLineWidth (GLfloat width){ NullFuncPtr(); }
	static void APIENTRY Null_glPointSize (GLfloat size){ NullFuncPtr(); }
	static void APIENTRY Null_glPolygonMode (GLenum face, GLenum mode){ NullFuncPtr(); }
	static void APIENTRY Null_glScissor (GLint x, GLint y, GLsizei width, GLsizei height){ NullFuncPtr(); }
	static void APIENTRY Null_glTexParameterf (GLenum target, GLenum pname, GLfloat param){ NullFuncPtr(); }
	static void APIENTRY Null_glTexParameterfv (GLenum target, GLenum pname, const GLfloat* params){ NullFuncPtr(); }
	static void APIENTRY Null_glTexParameteri (GLenum target, GLenum pname, GLint param){ NullFuncPtr(); }
	static void APIENTRY Null_glTexParameteriv (GLenum target, GLenum pname, const GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glTexImage1D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void* pixels){ NullFuncPtr(); }
	static void APIENTRY Null_glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void* pixels){ NullFuncPtr(); }
	static void APIENTRY Null_glDrawBuffer (GLenum buf){ NullFuncPtr(); }
	static void APIENTRY Null_glClear (GLbitfield mask){ NullFuncPtr(); }
	static void APIENTRY Null_glClearColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha){ NullFuncPtr(); }
	static void APIENTRY Null_glClearStencil (GLint s){ NullFuncPtr(); }
	static void APIENTRY Null_glClearDepth (GLdouble depth){ NullFuncPtr(); }
	static void APIENTRY Null_glStencilMask (GLuint mask){ NullFuncPtr(); }
	static void APIENTRY Null_glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha){ NullFuncPtr(); }
	static void APIENTRY Null_glDepthMask (GLboolean flag){ NullFuncPtr(); }
	static void APIENTRY Null_glDisable (GLenum cap){ NullFuncPtr(); }
	static void APIENTRY Null_glEnable (GLenum cap){ NullFuncPtr(); }
	static void APIENTRY Null_glFinish (void){ NullFuncPtr(); }
	static void APIENTRY Null_glFlush (void){ NullFuncPtr(); }
	static void APIENTRY Null_glBlendFunc (GLenum sfactor, GLenum dfactor){ NullFuncPtr(); }
	static void APIENTRY Null_glLogicOp (GLenum opcode){ NullFuncPtr(); }
	static void APIENTRY Null_glStencilFunc (GLenum func, GLint ref, GLuint mask){ NullFuncPtr(); }
	static void APIENTRY Null_glStencilOp (GLenum fail, GLenum zfail, GLenum zpass){ NullFuncPtr(); }
	static void APIENTRY Null_glDepthFunc (GLenum func){ NullFuncPtr(); }
	static void APIENTRY Null_glPixelStoref (GLenum pname, GLfloat param){ NullFuncPtr(); }
	static void APIENTRY Null_glPixelStorei (GLenum pname, GLint param){ NullFuncPtr(); }
	static void APIENTRY Null_glReadBuffer (GLenum src){ NullFuncPtr(); }
	static void APIENTRY Null_glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void* pixels){ NullFuncPtr(); }
	static void APIENTRY Null_glGetBooleanv (GLenum pname, GLboolean* data){ NullFuncPtr(); }
	static void APIENTRY Null_glGetDoublev (GLenum pname, GLdouble* data){ NullFuncPtr(); }
	static GLenum APIENTRY Null_glGetError (void){ NullFuncPtr(); return 0; }
	static void APIENTRY Null_glGetFloatv (GLenum pname, GLfloat* data){ NullFuncPtr(); }
	static void APIENTRY Null_glGetIntegerv (GLenum pname, GLint* data){ NullFuncPtr(); }
	static const GLubyte* APIENTRY Null_glGetString (GLenum name){ NullFuncPtr(); return 0; }
	static void APIENTRY Null_glGetTexImage (GLenum target, GLint level, GLenum format, GLenum type, void* pixels){ NullFuncPtr(); }
	static void APIENTRY Null_glGetTexParameterfv (GLenum target, GLenum pname, GLfloat* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetTexParameteriv (GLenum target, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloat* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint* params){ NullFuncPtr(); }
	static GLboolean APIENTRY Null_glIsEnabled (GLenum cap){ NullFuncPtr(); return 0; }
	static void APIENTRY Null_glDepthRange (GLdouble n, GLdouble f){ NullFuncPtr(); }
	static void APIENTRY Null_glViewport (GLint x, GLint y, GLsizei width, GLsizei height){ NullFuncPtr(); }
	Version10::Version10(Func_GetProcAddress GetProcAddress):
		GetProcAddress(GetProcAddress),
		CullFace(GetProc<PFNGLCULLFACEPROC>("glCullFace", Null_glCullFace)),
		FrontFace(GetProc<PFNGLFRONTFACEPROC>("glFrontFace", Null_glFrontFace)),
		Hint(GetProc<PFNGLHINTPROC>("glHint", Null_glHint)),
		LineWidth(GetProc<PFNGLLINEWIDTHPROC>("glLineWidth", Null_glLineWidth)),
		PointSize(GetProc<PFNGLPOINTSIZEPROC>("glPointSize", Null_glPointSize)),
		PolygonMode(GetProc<PFNGLPOLYGONMODEPROC>("glPolygonMode", Null_glPolygonMode)),
		Scissor(GetProc<PFNGLSCISSORPROC>("glScissor", Null_glScissor)),
		TexParameterf(GetProc<PFNGLTEXPARAMETERFPROC>("glTexParameterf", Null_glTexParameterf)),
		TexParameterfv(GetProc<PFNGLTEXPARAMETERFVPROC>("glTexParameterfv", Null_glTexParameterfv)),
		TexParameteri(GetProc<PFNGLTEXPARAMETERIPROC>("glTexParameteri", Null_glTexParameteri)),
		TexParameteriv(GetProc<PFNGLTEXPARAMETERIVPROC>("glTexParameteriv", Null_glTexParameteriv)),
		TexImage1D(GetProc<PFNGLTEXIMAGE1DPROC>("glTexImage1D", Null_glTexImage1D)),
		TexImage2D(GetProc<PFNGLTEXIMAGE2DPROC>("glTexImage2D", Null_glTexImage2D)),
		DrawBuffer(GetProc<PFNGLDRAWBUFFERPROC>("glDrawBuffer", Null_glDrawBuffer)),
		Clear(GetProc<PFNGLCLEARPROC>("glClear", Null_glClear)),
		ClearColor(GetProc<PFNGLCLEARCOLORPROC>("glClearColor", Null_glClearColor)),
		ClearStencil(GetProc<PFNGLCLEARSTENCILPROC>("glClearStencil", Null_glClearStencil)),
		ClearDepth(GetProc<PFNGLCLEARDEPTHPROC>("glClearDepth", Null_glClearDepth)),
		StencilMask(GetProc<PFNGLSTENCILMASKPROC>("glStencilMask", Null_glStencilMask)),
		ColorMask(GetProc<PFNGLCOLORMASKPROC>("glColorMask", Null_glColorMask)),
		DepthMask(GetProc<PFNGLDEPTHMASKPROC>("glDepthMask", Null_glDepthMask)),
		Disable(GetProc<PFNGLDISABLEPROC>("glDisable", Null_glDisable)),
		Enable(GetProc<PFNGLENABLEPROC>("glEnable", Null_glEnable)),
		Finish(GetProc<PFNGLFINISHPROC>("glFinish", Null_glFinish)),
		Flush(GetProc<PFNGLFLUSHPROC>("glFlush", Null_glFlush)),
		BlendFunc(GetProc<PFNGLBLENDFUNCPROC>("glBlendFunc", Null_glBlendFunc)),
		LogicOp(GetProc<PFNGLLOGICOPPROC>("glLogicOp", Null_glLogicOp)),
		StencilFunc(GetProc<PFNGLSTENCILFUNCPROC>("glStencilFunc", Null_glStencilFunc)),
		StencilOp(GetProc<PFNGLSTENCILOPPROC>("glStencilOp", Null_glStencilOp)),
		DepthFunc(GetProc<PFNGLDEPTHFUNCPROC>("glDepthFunc", Null_glDepthFunc)),
		PixelStoref(GetProc<PFNGLPIXELSTOREFPROC>("glPixelStoref", Null_glPixelStoref)),
		PixelStorei(GetProc<PFNGLPIXELSTOREIPROC>("glPixelStorei", Null_glPixelStorei)),
		ReadBuffer(GetProc<PFNGLREADBUFFERPROC>("glReadBuffer", Null_glReadBuffer)),
		ReadPixels(GetProc<PFNGLREADPIXELSPROC>("glReadPixels", Null_glReadPixels)),
		GetBooleanv(GetProc<PFNGLGETBOOLEANVPROC>("glGetBooleanv", Null_glGetBooleanv)),
		GetDoublev(GetProc<PFNGLGETDOUBLEVPROC>("glGetDoublev", Null_glGetDoublev)),
		GetError(GetProc<PFNGLGETERRORPROC>("glGetError", Null_glGetError)),
		GetFloatv(GetProc<PFNGLGETFLOATVPROC>("glGetFloatv", Null_glGetFloatv)),
		GetIntegerv(GetProc<PFNGLGETINTEGERVPROC>("glGetIntegerv", Null_glGetIntegerv)),
		GetString(GetProc<PFNGLGETSTRINGPROC>("glGetString", Null_glGetString)),
		GetTexImage(GetProc<PFNGLGETTEXIMAGEPROC>("glGetTexImage", Null_glGetTexImage)),
		GetTexParameterfv(GetProc<PFNGLGETTEXPARAMETERFVPROC>("glGetTexParameterfv", Null_glGetTexParameterfv)),
		GetTexParameteriv(GetProc<PFNGLGETTEXPARAMETERIVPROC>("glGetTexParameteriv", Null_glGetTexParameteriv)),
		GetTexLevelParameterfv(GetProc<PFNGLGETTEXLEVELPARAMETERFVPROC>("glGetTexLevelParameterfv", Null_glGetTexLevelParameterfv)),
		GetTexLevelParameteriv(GetProc<PFNGLGETTEXLEVELPARAMETERIVPROC>("glGetTexLevelParameteriv", Null_glGetTexLevelParameteriv)),
		IsEnabled(GetProc<PFNGLISENABLEDPROC>("glIsEnabled", Null_glIsEnabled)),
		DepthRange(GetProc<PFNGLDEPTHRANGEPROC>("glDepthRange", Null_glDepthRange)),
		Viewport(GetProc<PFNGLVIEWPORTPROC>("glViewport", Null_glViewport)),
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
			if (strstr(ch, "OpenGL ES")) ch += sizeof "OpenGL ES";
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
	static GLboolean APIENTRY Null_glIsTexture (GLuint texture){ NullFuncPtr(); return 0; }
	Version11::Version11(Func_GetProcAddress GetProcAddress):
		Version10(GetProcAddress),
		DrawArrays(GetProc<PFNGLDRAWARRAYSPROC>("glDrawArrays", Null_glDrawArrays)),
		DrawElements(GetProc<PFNGLDRAWELEMENTSPROC>("glDrawElements", Null_glDrawElements)),
		GetPointerv(GetProc<PFNGLGETPOINTERVPROC>("glGetPointerv", Null_glGetPointerv)),
		PolygonOffset(GetProc<PFNGLPOLYGONOFFSETPROC>("glPolygonOffset", Null_glPolygonOffset)),
		CopyTexImage1D(GetProc<PFNGLCOPYTEXIMAGE1DPROC>("glCopyTexImage1D", Null_glCopyTexImage1D)),
		CopyTexImage2D(GetProc<PFNGLCOPYTEXIMAGE2DPROC>("glCopyTexImage2D", Null_glCopyTexImage2D)),
		CopyTexSubImage1D(GetProc<PFNGLCOPYTEXSUBIMAGE1DPROC>("glCopyTexSubImage1D", Null_glCopyTexSubImage1D)),
		CopyTexSubImage2D(GetProc<PFNGLCOPYTEXSUBIMAGE2DPROC>("glCopyTexSubImage2D", Null_glCopyTexSubImage2D)),
		TexSubImage1D(GetProc<PFNGLTEXSUBIMAGE1DPROC>("glTexSubImage1D", Null_glTexSubImage1D)),
		TexSubImage2D(GetProc<PFNGLTEXSUBIMAGE2DPROC>("glTexSubImage2D", Null_glTexSubImage2D)),
		BindTexture(GetProc<PFNGLBINDTEXTUREPROC>("glBindTexture", Null_glBindTexture)),
		DeleteTextures(GetProc<PFNGLDELETETEXTURESPROC>("glDeleteTextures", Null_glDeleteTextures)),
		GenTextures(GetProc<PFNGLGENTEXTURESPROC>("glGenTextures", Null_glGenTextures)),
		IsTexture(GetProc<PFNGLISTEXTUREPROC>("glIsTexture", Null_glIsTexture))
	{
		Available = Ver_Major > 1 || (Ver_Major == 1 && (Ver_Minor > 1 || (Ver_Minor == 1 && Ver_Release >= 0)));
	}


	static void APIENTRY Null_glDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void* indices){ NullFuncPtr(); }
	static void APIENTRY Null_glTexImage3D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void* pixels){ NullFuncPtr(); }
	static void APIENTRY Null_glTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void* pixels){ NullFuncPtr(); }
	static void APIENTRY Null_glCopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height){ NullFuncPtr(); }
	Version12::Version12(Func_GetProcAddress GetProcAddress):
		Version11(GetProcAddress),
		DrawRangeElements(GetProc<PFNGLDRAWRANGEELEMENTSPROC>("glDrawRangeElements", Null_glDrawRangeElements)),
		TexImage3D(GetProc<PFNGLTEXIMAGE3DPROC>("glTexImage3D", Null_glTexImage3D)),
		TexSubImage3D(GetProc<PFNGLTEXSUBIMAGE3DPROC>("glTexSubImage3D", Null_glTexSubImage3D)),
		CopyTexSubImage3D(GetProc<PFNGLCOPYTEXSUBIMAGE3DPROC>("glCopyTexSubImage3D", Null_glCopyTexSubImage3D))
	{
		Available = Ver_Major > 1 || (Ver_Major == 1 && (Ver_Minor > 2 || (Ver_Minor == 2 && Ver_Release >= 0)));
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
		ActiveTexture(GetProc<PFNGLACTIVETEXTUREPROC>("glActiveTexture", Null_glActiveTexture)),
		SampleCoverage(GetProc<PFNGLSAMPLECOVERAGEPROC>("glSampleCoverage", Null_glSampleCoverage)),
		CompressedTexImage3D(GetProc<PFNGLCOMPRESSEDTEXIMAGE3DPROC>("glCompressedTexImage3D", Null_glCompressedTexImage3D)),
		CompressedTexImage2D(GetProc<PFNGLCOMPRESSEDTEXIMAGE2DPROC>("glCompressedTexImage2D", Null_glCompressedTexImage2D)),
		CompressedTexImage1D(GetProc<PFNGLCOMPRESSEDTEXIMAGE1DPROC>("glCompressedTexImage1D", Null_glCompressedTexImage1D)),
		CompressedTexSubImage3D(GetProc<PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC>("glCompressedTexSubImage3D", Null_glCompressedTexSubImage3D)),
		CompressedTexSubImage2D(GetProc<PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC>("glCompressedTexSubImage2D", Null_glCompressedTexSubImage2D)),
		CompressedTexSubImage1D(GetProc<PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC>("glCompressedTexSubImage1D", Null_glCompressedTexSubImage1D)),
		GetCompressedTexImage(GetProc<PFNGLGETCOMPRESSEDTEXIMAGEPROC>("glGetCompressedTexImage", Null_glGetCompressedTexImage)),
		ClientActiveTexture(GetProc<PFNGLCLIENTACTIVETEXTUREPROC>("glClientActiveTexture", Null_glClientActiveTexture)),
		MultiTexCoord1d(GetProc<PFNGLMULTITEXCOORD1DPROC>("glMultiTexCoord1d", Null_glMultiTexCoord1d)),
		MultiTexCoord1dv(GetProc<PFNGLMULTITEXCOORD1DVPROC>("glMultiTexCoord1dv", Null_glMultiTexCoord1dv)),
		MultiTexCoord1f(GetProc<PFNGLMULTITEXCOORD1FPROC>("glMultiTexCoord1f", Null_glMultiTexCoord1f)),
		MultiTexCoord1fv(GetProc<PFNGLMULTITEXCOORD1FVPROC>("glMultiTexCoord1fv", Null_glMultiTexCoord1fv)),
		MultiTexCoord1i(GetProc<PFNGLMULTITEXCOORD1IPROC>("glMultiTexCoord1i", Null_glMultiTexCoord1i)),
		MultiTexCoord1iv(GetProc<PFNGLMULTITEXCOORD1IVPROC>("glMultiTexCoord1iv", Null_glMultiTexCoord1iv)),
		MultiTexCoord1s(GetProc<PFNGLMULTITEXCOORD1SPROC>("glMultiTexCoord1s", Null_glMultiTexCoord1s)),
		MultiTexCoord1sv(GetProc<PFNGLMULTITEXCOORD1SVPROC>("glMultiTexCoord1sv", Null_glMultiTexCoord1sv)),
		MultiTexCoord2d(GetProc<PFNGLMULTITEXCOORD2DPROC>("glMultiTexCoord2d", Null_glMultiTexCoord2d)),
		MultiTexCoord2dv(GetProc<PFNGLMULTITEXCOORD2DVPROC>("glMultiTexCoord2dv", Null_glMultiTexCoord2dv)),
		MultiTexCoord2f(GetProc<PFNGLMULTITEXCOORD2FPROC>("glMultiTexCoord2f", Null_glMultiTexCoord2f)),
		MultiTexCoord2fv(GetProc<PFNGLMULTITEXCOORD2FVPROC>("glMultiTexCoord2fv", Null_glMultiTexCoord2fv)),
		MultiTexCoord2i(GetProc<PFNGLMULTITEXCOORD2IPROC>("glMultiTexCoord2i", Null_glMultiTexCoord2i)),
		MultiTexCoord2iv(GetProc<PFNGLMULTITEXCOORD2IVPROC>("glMultiTexCoord2iv", Null_glMultiTexCoord2iv)),
		MultiTexCoord2s(GetProc<PFNGLMULTITEXCOORD2SPROC>("glMultiTexCoord2s", Null_glMultiTexCoord2s)),
		MultiTexCoord2sv(GetProc<PFNGLMULTITEXCOORD2SVPROC>("glMultiTexCoord2sv", Null_glMultiTexCoord2sv)),
		MultiTexCoord3d(GetProc<PFNGLMULTITEXCOORD3DPROC>("glMultiTexCoord3d", Null_glMultiTexCoord3d)),
		MultiTexCoord3dv(GetProc<PFNGLMULTITEXCOORD3DVPROC>("glMultiTexCoord3dv", Null_glMultiTexCoord3dv)),
		MultiTexCoord3f(GetProc<PFNGLMULTITEXCOORD3FPROC>("glMultiTexCoord3f", Null_glMultiTexCoord3f)),
		MultiTexCoord3fv(GetProc<PFNGLMULTITEXCOORD3FVPROC>("glMultiTexCoord3fv", Null_glMultiTexCoord3fv)),
		MultiTexCoord3i(GetProc<PFNGLMULTITEXCOORD3IPROC>("glMultiTexCoord3i", Null_glMultiTexCoord3i)),
		MultiTexCoord3iv(GetProc<PFNGLMULTITEXCOORD3IVPROC>("glMultiTexCoord3iv", Null_glMultiTexCoord3iv)),
		MultiTexCoord3s(GetProc<PFNGLMULTITEXCOORD3SPROC>("glMultiTexCoord3s", Null_glMultiTexCoord3s)),
		MultiTexCoord3sv(GetProc<PFNGLMULTITEXCOORD3SVPROC>("glMultiTexCoord3sv", Null_glMultiTexCoord3sv)),
		MultiTexCoord4d(GetProc<PFNGLMULTITEXCOORD4DPROC>("glMultiTexCoord4d", Null_glMultiTexCoord4d)),
		MultiTexCoord4dv(GetProc<PFNGLMULTITEXCOORD4DVPROC>("glMultiTexCoord4dv", Null_glMultiTexCoord4dv)),
		MultiTexCoord4f(GetProc<PFNGLMULTITEXCOORD4FPROC>("glMultiTexCoord4f", Null_glMultiTexCoord4f)),
		MultiTexCoord4fv(GetProc<PFNGLMULTITEXCOORD4FVPROC>("glMultiTexCoord4fv", Null_glMultiTexCoord4fv)),
		MultiTexCoord4i(GetProc<PFNGLMULTITEXCOORD4IPROC>("glMultiTexCoord4i", Null_glMultiTexCoord4i)),
		MultiTexCoord4iv(GetProc<PFNGLMULTITEXCOORD4IVPROC>("glMultiTexCoord4iv", Null_glMultiTexCoord4iv)),
		MultiTexCoord4s(GetProc<PFNGLMULTITEXCOORD4SPROC>("glMultiTexCoord4s", Null_glMultiTexCoord4s)),
		MultiTexCoord4sv(GetProc<PFNGLMULTITEXCOORD4SVPROC>("glMultiTexCoord4sv", Null_glMultiTexCoord4sv)),
		LoadTransposeMatrixf(GetProc<PFNGLLOADTRANSPOSEMATRIXFPROC>("glLoadTransposeMatrixf", Null_glLoadTransposeMatrixf)),
		LoadTransposeMatrixd(GetProc<PFNGLLOADTRANSPOSEMATRIXDPROC>("glLoadTransposeMatrixd", Null_glLoadTransposeMatrixd)),
		MultTransposeMatrixf(GetProc<PFNGLMULTTRANSPOSEMATRIXFPROC>("glMultTransposeMatrixf", Null_glMultTransposeMatrixf)),
		MultTransposeMatrixd(GetProc<PFNGLMULTTRANSPOSEMATRIXDPROC>("glMultTransposeMatrixd", Null_glMultTransposeMatrixd))
	{
		Available = Ver_Major > 1 || (Ver_Major == 1 && (Ver_Minor > 3 || (Ver_Minor == 3 && Ver_Release >= 0)));
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
		BlendFuncSeparate(GetProc<PFNGLBLENDFUNCSEPARATEPROC>("glBlendFuncSeparate", Null_glBlendFuncSeparate)),
		MultiDrawArrays(GetProc<PFNGLMULTIDRAWARRAYSPROC>("glMultiDrawArrays", Null_glMultiDrawArrays)),
		MultiDrawElements(GetProc<PFNGLMULTIDRAWELEMENTSPROC>("glMultiDrawElements", Null_glMultiDrawElements)),
		PointParameterf(GetProc<PFNGLPOINTPARAMETERFPROC>("glPointParameterf", Null_glPointParameterf)),
		PointParameterfv(GetProc<PFNGLPOINTPARAMETERFVPROC>("glPointParameterfv", Null_glPointParameterfv)),
		PointParameteri(GetProc<PFNGLPOINTPARAMETERIPROC>("glPointParameteri", Null_glPointParameteri)),
		PointParameteriv(GetProc<PFNGLPOINTPARAMETERIVPROC>("glPointParameteriv", Null_glPointParameteriv)),
		FogCoordf(GetProc<PFNGLFOGCOORDFPROC>("glFogCoordf", Null_glFogCoordf)),
		FogCoordfv(GetProc<PFNGLFOGCOORDFVPROC>("glFogCoordfv", Null_glFogCoordfv)),
		FogCoordd(GetProc<PFNGLFOGCOORDDPROC>("glFogCoordd", Null_glFogCoordd)),
		FogCoorddv(GetProc<PFNGLFOGCOORDDVPROC>("glFogCoorddv", Null_glFogCoorddv)),
		FogCoordPointer(GetProc<PFNGLFOGCOORDPOINTERPROC>("glFogCoordPointer", Null_glFogCoordPointer)),
		SecondaryColor3b(GetProc<PFNGLSECONDARYCOLOR3BPROC>("glSecondaryColor3b", Null_glSecondaryColor3b)),
		SecondaryColor3bv(GetProc<PFNGLSECONDARYCOLOR3BVPROC>("glSecondaryColor3bv", Null_glSecondaryColor3bv)),
		SecondaryColor3d(GetProc<PFNGLSECONDARYCOLOR3DPROC>("glSecondaryColor3d", Null_glSecondaryColor3d)),
		SecondaryColor3dv(GetProc<PFNGLSECONDARYCOLOR3DVPROC>("glSecondaryColor3dv", Null_glSecondaryColor3dv)),
		SecondaryColor3f(GetProc<PFNGLSECONDARYCOLOR3FPROC>("glSecondaryColor3f", Null_glSecondaryColor3f)),
		SecondaryColor3fv(GetProc<PFNGLSECONDARYCOLOR3FVPROC>("glSecondaryColor3fv", Null_glSecondaryColor3fv)),
		SecondaryColor3i(GetProc<PFNGLSECONDARYCOLOR3IPROC>("glSecondaryColor3i", Null_glSecondaryColor3i)),
		SecondaryColor3iv(GetProc<PFNGLSECONDARYCOLOR3IVPROC>("glSecondaryColor3iv", Null_glSecondaryColor3iv)),
		SecondaryColor3s(GetProc<PFNGLSECONDARYCOLOR3SPROC>("glSecondaryColor3s", Null_glSecondaryColor3s)),
		SecondaryColor3sv(GetProc<PFNGLSECONDARYCOLOR3SVPROC>("glSecondaryColor3sv", Null_glSecondaryColor3sv)),
		SecondaryColor3ub(GetProc<PFNGLSECONDARYCOLOR3UBPROC>("glSecondaryColor3ub", Null_glSecondaryColor3ub)),
		SecondaryColor3ubv(GetProc<PFNGLSECONDARYCOLOR3UBVPROC>("glSecondaryColor3ubv", Null_glSecondaryColor3ubv)),
		SecondaryColor3ui(GetProc<PFNGLSECONDARYCOLOR3UIPROC>("glSecondaryColor3ui", Null_glSecondaryColor3ui)),
		SecondaryColor3uiv(GetProc<PFNGLSECONDARYCOLOR3UIVPROC>("glSecondaryColor3uiv", Null_glSecondaryColor3uiv)),
		SecondaryColor3us(GetProc<PFNGLSECONDARYCOLOR3USPROC>("glSecondaryColor3us", Null_glSecondaryColor3us)),
		SecondaryColor3usv(GetProc<PFNGLSECONDARYCOLOR3USVPROC>("glSecondaryColor3usv", Null_glSecondaryColor3usv)),
		SecondaryColorPointer(GetProc<PFNGLSECONDARYCOLORPOINTERPROC>("glSecondaryColorPointer", Null_glSecondaryColorPointer)),
		WindowPos2d(GetProc<PFNGLWINDOWPOS2DPROC>("glWindowPos2d", Null_glWindowPos2d)),
		WindowPos2dv(GetProc<PFNGLWINDOWPOS2DVPROC>("glWindowPos2dv", Null_glWindowPos2dv)),
		WindowPos2f(GetProc<PFNGLWINDOWPOS2FPROC>("glWindowPos2f", Null_glWindowPos2f)),
		WindowPos2fv(GetProc<PFNGLWINDOWPOS2FVPROC>("glWindowPos2fv", Null_glWindowPos2fv)),
		WindowPos2i(GetProc<PFNGLWINDOWPOS2IPROC>("glWindowPos2i", Null_glWindowPos2i)),
		WindowPos2iv(GetProc<PFNGLWINDOWPOS2IVPROC>("glWindowPos2iv", Null_glWindowPos2iv)),
		WindowPos2s(GetProc<PFNGLWINDOWPOS2SPROC>("glWindowPos2s", Null_glWindowPos2s)),
		WindowPos2sv(GetProc<PFNGLWINDOWPOS2SVPROC>("glWindowPos2sv", Null_glWindowPos2sv)),
		WindowPos3d(GetProc<PFNGLWINDOWPOS3DPROC>("glWindowPos3d", Null_glWindowPos3d)),
		WindowPos3dv(GetProc<PFNGLWINDOWPOS3DVPROC>("glWindowPos3dv", Null_glWindowPos3dv)),
		WindowPos3f(GetProc<PFNGLWINDOWPOS3FPROC>("glWindowPos3f", Null_glWindowPos3f)),
		WindowPos3fv(GetProc<PFNGLWINDOWPOS3FVPROC>("glWindowPos3fv", Null_glWindowPos3fv)),
		WindowPos3i(GetProc<PFNGLWINDOWPOS3IPROC>("glWindowPos3i", Null_glWindowPos3i)),
		WindowPos3iv(GetProc<PFNGLWINDOWPOS3IVPROC>("glWindowPos3iv", Null_glWindowPos3iv)),
		WindowPos3s(GetProc<PFNGLWINDOWPOS3SPROC>("glWindowPos3s", Null_glWindowPos3s)),
		WindowPos3sv(GetProc<PFNGLWINDOWPOS3SVPROC>("glWindowPos3sv", Null_glWindowPos3sv)),
		BlendColor(GetProc<PFNGLBLENDCOLORPROC>("glBlendColor", Null_glBlendColor)),
		BlendEquation(GetProc<PFNGLBLENDEQUATIONPROC>("glBlendEquation", Null_glBlendEquation))
	{
		Available = Ver_Major > 1 || (Ver_Major == 1 && (Ver_Minor > 4 || (Ver_Minor == 4 && Ver_Release >= 0)));
	}


	static void APIENTRY Null_glGenQueries (GLsizei n, GLuint* ids){ NullFuncPtr(); }
	static void APIENTRY Null_glDeleteQueries (GLsizei n, const GLuint* ids){ NullFuncPtr(); }
	static GLboolean APIENTRY Null_glIsQuery (GLuint id){ NullFuncPtr(); return 0; }
	static void APIENTRY Null_glBeginQuery (GLenum target, GLuint id){ NullFuncPtr(); }
	static void APIENTRY Null_glEndQuery (GLenum target){ NullFuncPtr(); }
	static void APIENTRY Null_glGetQueryiv (GLenum target, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetQueryObjectiv (GLuint id, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetQueryObjectuiv (GLuint id, GLenum pname, GLuint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glBindBuffer (GLenum target, GLuint buffer){ NullFuncPtr(); }
	static void APIENTRY Null_glDeleteBuffers (GLsizei n, const GLuint* buffers){ NullFuncPtr(); }
	static void APIENTRY Null_glGenBuffers (GLsizei n, GLuint* buffers){ NullFuncPtr(); }
	static GLboolean APIENTRY Null_glIsBuffer (GLuint buffer){ NullFuncPtr(); return 0; }
	static void APIENTRY Null_glBufferData (GLenum target, GLsizeiptr size, const void* data, GLenum usage){ NullFuncPtr(); }
	static void APIENTRY Null_glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const void* data){ NullFuncPtr(); }
	static void APIENTRY Null_glGetBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, void* data){ NullFuncPtr(); }
	static void* APIENTRY Null_glMapBuffer (GLenum target, GLenum access){ NullFuncPtr(); return 0; }
	static GLboolean APIENTRY Null_glUnmapBuffer (GLenum target){ NullFuncPtr(); return 0; }
	static void APIENTRY Null_glGetBufferParameteriv (GLenum target, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetBufferPointerv (GLenum target, GLenum pname, void** params){ NullFuncPtr(); }
	Version15::Version15(Func_GetProcAddress GetProcAddress):
		Version14(GetProcAddress),
		GenQueries(GetProc<PFNGLGENQUERIESPROC>("glGenQueries", Null_glGenQueries)),
		DeleteQueries(GetProc<PFNGLDELETEQUERIESPROC>("glDeleteQueries", Null_glDeleteQueries)),
		IsQuery(GetProc<PFNGLISQUERYPROC>("glIsQuery", Null_glIsQuery)),
		BeginQuery(GetProc<PFNGLBEGINQUERYPROC>("glBeginQuery", Null_glBeginQuery)),
		EndQuery(GetProc<PFNGLENDQUERYPROC>("glEndQuery", Null_glEndQuery)),
		GetQueryiv(GetProc<PFNGLGETQUERYIVPROC>("glGetQueryiv", Null_glGetQueryiv)),
		GetQueryObjectiv(GetProc<PFNGLGETQUERYOBJECTIVPROC>("glGetQueryObjectiv", Null_glGetQueryObjectiv)),
		GetQueryObjectuiv(GetProc<PFNGLGETQUERYOBJECTUIVPROC>("glGetQueryObjectuiv", Null_glGetQueryObjectuiv)),
		BindBuffer(GetProc<PFNGLBINDBUFFERPROC>("glBindBuffer", Null_glBindBuffer)),
		DeleteBuffers(GetProc<PFNGLDELETEBUFFERSPROC>("glDeleteBuffers", Null_glDeleteBuffers)),
		GenBuffers(GetProc<PFNGLGENBUFFERSPROC>("glGenBuffers", Null_glGenBuffers)),
		IsBuffer(GetProc<PFNGLISBUFFERPROC>("glIsBuffer", Null_glIsBuffer)),
		BufferData(GetProc<PFNGLBUFFERDATAPROC>("glBufferData", Null_glBufferData)),
		BufferSubData(GetProc<PFNGLBUFFERSUBDATAPROC>("glBufferSubData", Null_glBufferSubData)),
		GetBufferSubData(GetProc<PFNGLGETBUFFERSUBDATAPROC>("glGetBufferSubData", Null_glGetBufferSubData)),
		MapBuffer(GetProc<PFNGLMAPBUFFERPROC>("glMapBuffer", Null_glMapBuffer)),
		UnmapBuffer(GetProc<PFNGLUNMAPBUFFERPROC>("glUnmapBuffer", Null_glUnmapBuffer)),
		GetBufferParameteriv(GetProc<PFNGLGETBUFFERPARAMETERIVPROC>("glGetBufferParameteriv", Null_glGetBufferParameteriv)),
		GetBufferPointerv(GetProc<PFNGLGETBUFFERPOINTERVPROC>("glGetBufferPointerv", Null_glGetBufferPointerv))
	{
		Available = Ver_Major > 1 || (Ver_Major == 1 && (Ver_Minor > 5 || (Ver_Minor == 5 && Ver_Release >= 0)));
	}


	static void APIENTRY Null_glBlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha){ NullFuncPtr(); }
	static void APIENTRY Null_glDrawBuffers (GLsizei n, const GLenum* bufs){ NullFuncPtr(); }
	static void APIENTRY Null_glStencilOpSeparate (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass){ NullFuncPtr(); }
	static void APIENTRY Null_glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask){ NullFuncPtr(); }
	static void APIENTRY Null_glStencilMaskSeparate (GLenum face, GLuint mask){ NullFuncPtr(); }
	static void APIENTRY Null_glAttachShader (GLuint program, GLuint shader){ NullFuncPtr(); }
	static void APIENTRY Null_glBindAttribLocation (GLuint program, GLuint index, const GLchar* name){ NullFuncPtr(); }
	static void APIENTRY Null_glCompileShader (GLuint shader){ NullFuncPtr(); }
	static GLuint APIENTRY Null_glCreateProgram (void){ NullFuncPtr(); return 0; }
	static GLuint APIENTRY Null_glCreateShader (GLenum type){ NullFuncPtr(); return 0; }
	static void APIENTRY Null_glDeleteProgram (GLuint program){ NullFuncPtr(); }
	static void APIENTRY Null_glDeleteShader (GLuint shader){ NullFuncPtr(); }
	static void APIENTRY Null_glDetachShader (GLuint program, GLuint shader){ NullFuncPtr(); }
	static void APIENTRY Null_glDisableVertexAttribArray (GLuint index){ NullFuncPtr(); }
	static void APIENTRY Null_glEnableVertexAttribArray (GLuint index){ NullFuncPtr(); }
	static void APIENTRY Null_glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name){ NullFuncPtr(); }
	static void APIENTRY Null_glGetActiveUniform (GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name){ NullFuncPtr(); }
	static void APIENTRY Null_glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei* count, GLuint* shaders){ NullFuncPtr(); }
	static GLint APIENTRY Null_glGetAttribLocation (GLuint program, const GLchar* name){ NullFuncPtr(); return 0; }
	static void APIENTRY Null_glGetProgramiv (GLuint program, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei* length, GLchar* infoLog){ NullFuncPtr(); }
	static void APIENTRY Null_glGetShaderiv (GLuint shader, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* infoLog){ NullFuncPtr(); }
	static void APIENTRY Null_glGetShaderSource (GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* source){ NullFuncPtr(); }
	static GLint APIENTRY Null_glGetUniformLocation (GLuint program, const GLchar* name){ NullFuncPtr(); return 0; }
	static void APIENTRY Null_glGetUniformfv (GLuint program, GLint location, GLfloat* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetUniformiv (GLuint program, GLint location, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetVertexAttribdv (GLuint index, GLenum pname, GLdouble* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetVertexAttribiv (GLuint index, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetVertexAttribPointerv (GLuint index, GLenum pname, void** pointer){ NullFuncPtr(); }
	static GLboolean APIENTRY Null_glIsProgram (GLuint program){ NullFuncPtr(); return 0; }
	static GLboolean APIENTRY Null_glIsShader (GLuint shader){ NullFuncPtr(); return 0; }
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
		BlendEquationSeparate(GetProc<PFNGLBLENDEQUATIONSEPARATEPROC>("glBlendEquationSeparate", Null_glBlendEquationSeparate)),
		DrawBuffers(GetProc<PFNGLDRAWBUFFERSPROC>("glDrawBuffers", Null_glDrawBuffers)),
		StencilOpSeparate(GetProc<PFNGLSTENCILOPSEPARATEPROC>("glStencilOpSeparate", Null_glStencilOpSeparate)),
		StencilFuncSeparate(GetProc<PFNGLSTENCILFUNCSEPARATEPROC>("glStencilFuncSeparate", Null_glStencilFuncSeparate)),
		StencilMaskSeparate(GetProc<PFNGLSTENCILMASKSEPARATEPROC>("glStencilMaskSeparate", Null_glStencilMaskSeparate)),
		AttachShader(GetProc<PFNGLATTACHSHADERPROC>("glAttachShader", Null_glAttachShader)),
		BindAttribLocation(GetProc<PFNGLBINDATTRIBLOCATIONPROC>("glBindAttribLocation", Null_glBindAttribLocation)),
		CompileShader(GetProc<PFNGLCOMPILESHADERPROC>("glCompileShader", Null_glCompileShader)),
		CreateProgram(GetProc<PFNGLCREATEPROGRAMPROC>("glCreateProgram", Null_glCreateProgram)),
		CreateShader(GetProc<PFNGLCREATESHADERPROC>("glCreateShader", Null_glCreateShader)),
		DeleteProgram(GetProc<PFNGLDELETEPROGRAMPROC>("glDeleteProgram", Null_glDeleteProgram)),
		DeleteShader(GetProc<PFNGLDELETESHADERPROC>("glDeleteShader", Null_glDeleteShader)),
		DetachShader(GetProc<PFNGLDETACHSHADERPROC>("glDetachShader", Null_glDetachShader)),
		DisableVertexAttribArray(GetProc<PFNGLDISABLEVERTEXATTRIBARRAYPROC>("glDisableVertexAttribArray", Null_glDisableVertexAttribArray)),
		EnableVertexAttribArray(GetProc<PFNGLENABLEVERTEXATTRIBARRAYPROC>("glEnableVertexAttribArray", Null_glEnableVertexAttribArray)),
		GetActiveAttrib(GetProc<PFNGLGETACTIVEATTRIBPROC>("glGetActiveAttrib", Null_glGetActiveAttrib)),
		GetActiveUniform(GetProc<PFNGLGETACTIVEUNIFORMPROC>("glGetActiveUniform", Null_glGetActiveUniform)),
		GetAttachedShaders(GetProc<PFNGLGETATTACHEDSHADERSPROC>("glGetAttachedShaders", Null_glGetAttachedShaders)),
		GetAttribLocation(GetProc<PFNGLGETATTRIBLOCATIONPROC>("glGetAttribLocation", Null_glGetAttribLocation)),
		GetProgramiv(GetProc<PFNGLGETPROGRAMIVPROC>("glGetProgramiv", Null_glGetProgramiv)),
		GetProgramInfoLog(GetProc<PFNGLGETPROGRAMINFOLOGPROC>("glGetProgramInfoLog", Null_glGetProgramInfoLog)),
		GetShaderiv(GetProc<PFNGLGETSHADERIVPROC>("glGetShaderiv", Null_glGetShaderiv)),
		GetShaderInfoLog(GetProc<PFNGLGETSHADERINFOLOGPROC>("glGetShaderInfoLog", Null_glGetShaderInfoLog)),
		GetShaderSource(GetProc<PFNGLGETSHADERSOURCEPROC>("glGetShaderSource", Null_glGetShaderSource)),
		GetUniformLocation(GetProc<PFNGLGETUNIFORMLOCATIONPROC>("glGetUniformLocation", Null_glGetUniformLocation)),
		GetUniformfv(GetProc<PFNGLGETUNIFORMFVPROC>("glGetUniformfv", Null_glGetUniformfv)),
		GetUniformiv(GetProc<PFNGLGETUNIFORMIVPROC>("glGetUniformiv", Null_glGetUniformiv)),
		GetVertexAttribdv(GetProc<PFNGLGETVERTEXATTRIBDVPROC>("glGetVertexAttribdv", Null_glGetVertexAttribdv)),
		GetVertexAttribfv(GetProc<PFNGLGETVERTEXATTRIBFVPROC>("glGetVertexAttribfv", Null_glGetVertexAttribfv)),
		GetVertexAttribiv(GetProc<PFNGLGETVERTEXATTRIBIVPROC>("glGetVertexAttribiv", Null_glGetVertexAttribiv)),
		GetVertexAttribPointerv(GetProc<PFNGLGETVERTEXATTRIBPOINTERVPROC>("glGetVertexAttribPointerv", Null_glGetVertexAttribPointerv)),
		IsProgram(GetProc<PFNGLISPROGRAMPROC>("glIsProgram", Null_glIsProgram)),
		IsShader(GetProc<PFNGLISSHADERPROC>("glIsShader", Null_glIsShader)),
		LinkProgram(GetProc<PFNGLLINKPROGRAMPROC>("glLinkProgram", Null_glLinkProgram)),
		ShaderSource(GetProc<PFNGLSHADERSOURCEPROC>("glShaderSource", Null_glShaderSource)),
		UseProgram(GetProc<PFNGLUSEPROGRAMPROC>("glUseProgram", Null_glUseProgram)),
		Uniform1f(GetProc<PFNGLUNIFORM1FPROC>("glUniform1f", Null_glUniform1f)),
		Uniform2f(GetProc<PFNGLUNIFORM2FPROC>("glUniform2f", Null_glUniform2f)),
		Uniform3f(GetProc<PFNGLUNIFORM3FPROC>("glUniform3f", Null_glUniform3f)),
		Uniform4f(GetProc<PFNGLUNIFORM4FPROC>("glUniform4f", Null_glUniform4f)),
		Uniform1i(GetProc<PFNGLUNIFORM1IPROC>("glUniform1i", Null_glUniform1i)),
		Uniform2i(GetProc<PFNGLUNIFORM2IPROC>("glUniform2i", Null_glUniform2i)),
		Uniform3i(GetProc<PFNGLUNIFORM3IPROC>("glUniform3i", Null_glUniform3i)),
		Uniform4i(GetProc<PFNGLUNIFORM4IPROC>("glUniform4i", Null_glUniform4i)),
		Uniform1fv(GetProc<PFNGLUNIFORM1FVPROC>("glUniform1fv", Null_glUniform1fv)),
		Uniform2fv(GetProc<PFNGLUNIFORM2FVPROC>("glUniform2fv", Null_glUniform2fv)),
		Uniform3fv(GetProc<PFNGLUNIFORM3FVPROC>("glUniform3fv", Null_glUniform3fv)),
		Uniform4fv(GetProc<PFNGLUNIFORM4FVPROC>("glUniform4fv", Null_glUniform4fv)),
		Uniform1iv(GetProc<PFNGLUNIFORM1IVPROC>("glUniform1iv", Null_glUniform1iv)),
		Uniform2iv(GetProc<PFNGLUNIFORM2IVPROC>("glUniform2iv", Null_glUniform2iv)),
		Uniform3iv(GetProc<PFNGLUNIFORM3IVPROC>("glUniform3iv", Null_glUniform3iv)),
		Uniform4iv(GetProc<PFNGLUNIFORM4IVPROC>("glUniform4iv", Null_glUniform4iv)),
		UniformMatrix2fv(GetProc<PFNGLUNIFORMMATRIX2FVPROC>("glUniformMatrix2fv", Null_glUniformMatrix2fv)),
		UniformMatrix3fv(GetProc<PFNGLUNIFORMMATRIX3FVPROC>("glUniformMatrix3fv", Null_glUniformMatrix3fv)),
		UniformMatrix4fv(GetProc<PFNGLUNIFORMMATRIX4FVPROC>("glUniformMatrix4fv", Null_glUniformMatrix4fv)),
		ValidateProgram(GetProc<PFNGLVALIDATEPROGRAMPROC>("glValidateProgram", Null_glValidateProgram)),
		VertexAttrib1d(GetProc<PFNGLVERTEXATTRIB1DPROC>("glVertexAttrib1d", Null_glVertexAttrib1d)),
		VertexAttrib1dv(GetProc<PFNGLVERTEXATTRIB1DVPROC>("glVertexAttrib1dv", Null_glVertexAttrib1dv)),
		VertexAttrib1f(GetProc<PFNGLVERTEXATTRIB1FPROC>("glVertexAttrib1f", Null_glVertexAttrib1f)),
		VertexAttrib1fv(GetProc<PFNGLVERTEXATTRIB1FVPROC>("glVertexAttrib1fv", Null_glVertexAttrib1fv)),
		VertexAttrib1s(GetProc<PFNGLVERTEXATTRIB1SPROC>("glVertexAttrib1s", Null_glVertexAttrib1s)),
		VertexAttrib1sv(GetProc<PFNGLVERTEXATTRIB1SVPROC>("glVertexAttrib1sv", Null_glVertexAttrib1sv)),
		VertexAttrib2d(GetProc<PFNGLVERTEXATTRIB2DPROC>("glVertexAttrib2d", Null_glVertexAttrib2d)),
		VertexAttrib2dv(GetProc<PFNGLVERTEXATTRIB2DVPROC>("glVertexAttrib2dv", Null_glVertexAttrib2dv)),
		VertexAttrib2f(GetProc<PFNGLVERTEXATTRIB2FPROC>("glVertexAttrib2f", Null_glVertexAttrib2f)),
		VertexAttrib2fv(GetProc<PFNGLVERTEXATTRIB2FVPROC>("glVertexAttrib2fv", Null_glVertexAttrib2fv)),
		VertexAttrib2s(GetProc<PFNGLVERTEXATTRIB2SPROC>("glVertexAttrib2s", Null_glVertexAttrib2s)),
		VertexAttrib2sv(GetProc<PFNGLVERTEXATTRIB2SVPROC>("glVertexAttrib2sv", Null_glVertexAttrib2sv)),
		VertexAttrib3d(GetProc<PFNGLVERTEXATTRIB3DPROC>("glVertexAttrib3d", Null_glVertexAttrib3d)),
		VertexAttrib3dv(GetProc<PFNGLVERTEXATTRIB3DVPROC>("glVertexAttrib3dv", Null_glVertexAttrib3dv)),
		VertexAttrib3f(GetProc<PFNGLVERTEXATTRIB3FPROC>("glVertexAttrib3f", Null_glVertexAttrib3f)),
		VertexAttrib3fv(GetProc<PFNGLVERTEXATTRIB3FVPROC>("glVertexAttrib3fv", Null_glVertexAttrib3fv)),
		VertexAttrib3s(GetProc<PFNGLVERTEXATTRIB3SPROC>("glVertexAttrib3s", Null_glVertexAttrib3s)),
		VertexAttrib3sv(GetProc<PFNGLVERTEXATTRIB3SVPROC>("glVertexAttrib3sv", Null_glVertexAttrib3sv)),
		VertexAttrib4Nbv(GetProc<PFNGLVERTEXATTRIB4NBVPROC>("glVertexAttrib4Nbv", Null_glVertexAttrib4Nbv)),
		VertexAttrib4Niv(GetProc<PFNGLVERTEXATTRIB4NIVPROC>("glVertexAttrib4Niv", Null_glVertexAttrib4Niv)),
		VertexAttrib4Nsv(GetProc<PFNGLVERTEXATTRIB4NSVPROC>("glVertexAttrib4Nsv", Null_glVertexAttrib4Nsv)),
		VertexAttrib4Nub(GetProc<PFNGLVERTEXATTRIB4NUBPROC>("glVertexAttrib4Nub", Null_glVertexAttrib4Nub)),
		VertexAttrib4Nubv(GetProc<PFNGLVERTEXATTRIB4NUBVPROC>("glVertexAttrib4Nubv", Null_glVertexAttrib4Nubv)),
		VertexAttrib4Nuiv(GetProc<PFNGLVERTEXATTRIB4NUIVPROC>("glVertexAttrib4Nuiv", Null_glVertexAttrib4Nuiv)),
		VertexAttrib4Nusv(GetProc<PFNGLVERTEXATTRIB4NUSVPROC>("glVertexAttrib4Nusv", Null_glVertexAttrib4Nusv)),
		VertexAttrib4bv(GetProc<PFNGLVERTEXATTRIB4BVPROC>("glVertexAttrib4bv", Null_glVertexAttrib4bv)),
		VertexAttrib4d(GetProc<PFNGLVERTEXATTRIB4DPROC>("glVertexAttrib4d", Null_glVertexAttrib4d)),
		VertexAttrib4dv(GetProc<PFNGLVERTEXATTRIB4DVPROC>("glVertexAttrib4dv", Null_glVertexAttrib4dv)),
		VertexAttrib4f(GetProc<PFNGLVERTEXATTRIB4FPROC>("glVertexAttrib4f", Null_glVertexAttrib4f)),
		VertexAttrib4fv(GetProc<PFNGLVERTEXATTRIB4FVPROC>("glVertexAttrib4fv", Null_glVertexAttrib4fv)),
		VertexAttrib4iv(GetProc<PFNGLVERTEXATTRIB4IVPROC>("glVertexAttrib4iv", Null_glVertexAttrib4iv)),
		VertexAttrib4s(GetProc<PFNGLVERTEXATTRIB4SPROC>("glVertexAttrib4s", Null_glVertexAttrib4s)),
		VertexAttrib4sv(GetProc<PFNGLVERTEXATTRIB4SVPROC>("glVertexAttrib4sv", Null_glVertexAttrib4sv)),
		VertexAttrib4ubv(GetProc<PFNGLVERTEXATTRIB4UBVPROC>("glVertexAttrib4ubv", Null_glVertexAttrib4ubv)),
		VertexAttrib4uiv(GetProc<PFNGLVERTEXATTRIB4UIVPROC>("glVertexAttrib4uiv", Null_glVertexAttrib4uiv)),
		VertexAttrib4usv(GetProc<PFNGLVERTEXATTRIB4USVPROC>("glVertexAttrib4usv", Null_glVertexAttrib4usv)),
		VertexAttribPointer(GetProc<PFNGLVERTEXATTRIBPOINTERPROC>("glVertexAttribPointer", Null_glVertexAttribPointer))
	{
		Available = Ver_Major > 2 || (Ver_Major == 2 && (Ver_Minor > 0 || (Ver_Minor == 0 && Ver_Release >= 0)));
	}


	static void APIENTRY Null_glUniformMatrix2x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformMatrix3x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformMatrix2x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformMatrix4x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformMatrix3x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformMatrix4x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value){ NullFuncPtr(); }
	Version21::Version21(Func_GetProcAddress GetProcAddress):
		Version20(GetProcAddress),
		UniformMatrix2x3fv(GetProc<PFNGLUNIFORMMATRIX2X3FVPROC>("glUniformMatrix2x3fv", Null_glUniformMatrix2x3fv)),
		UniformMatrix3x2fv(GetProc<PFNGLUNIFORMMATRIX3X2FVPROC>("glUniformMatrix3x2fv", Null_glUniformMatrix3x2fv)),
		UniformMatrix2x4fv(GetProc<PFNGLUNIFORMMATRIX2X4FVPROC>("glUniformMatrix2x4fv", Null_glUniformMatrix2x4fv)),
		UniformMatrix4x2fv(GetProc<PFNGLUNIFORMMATRIX4X2FVPROC>("glUniformMatrix4x2fv", Null_glUniformMatrix4x2fv)),
		UniformMatrix3x4fv(GetProc<PFNGLUNIFORMMATRIX3X4FVPROC>("glUniformMatrix3x4fv", Null_glUniformMatrix3x4fv)),
		UniformMatrix4x3fv(GetProc<PFNGLUNIFORMMATRIX4X3FVPROC>("glUniformMatrix4x3fv", Null_glUniformMatrix4x3fv))
	{
		Available = Ver_Major > 2 || (Ver_Major == 2 && (Ver_Minor > 1 || (Ver_Minor == 1 && Ver_Release >= 0)));
	}


	static void APIENTRY Null_glColorMaski (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a){ NullFuncPtr(); }
	static void APIENTRY Null_glGetBooleani_v (GLenum target, GLuint index, GLboolean* data){ NullFuncPtr(); }
	static void APIENTRY Null_glGetIntegeri_v (GLenum target, GLuint index, GLint* data){ NullFuncPtr(); }
	static void APIENTRY Null_glEnablei (GLenum target, GLuint index){ NullFuncPtr(); }
	static void APIENTRY Null_glDisablei (GLenum target, GLuint index){ NullFuncPtr(); }
	static GLboolean APIENTRY Null_glIsEnabledi (GLenum target, GLuint index){ NullFuncPtr(); return 0; }
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
	static GLint APIENTRY Null_glGetFragDataLocation (GLuint program, const GLchar* name){ NullFuncPtr(); return 0; }
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
	static const GLubyte* APIENTRY Null_glGetStringi (GLenum name, GLuint index){ NullFuncPtr(); return 0; }
	static GLboolean APIENTRY Null_glIsRenderbuffer (GLuint renderbuffer){ NullFuncPtr(); return 0; }
	static void APIENTRY Null_glBindRenderbuffer (GLenum target, GLuint renderbuffer){ NullFuncPtr(); }
	static void APIENTRY Null_glDeleteRenderbuffers (GLsizei n, const GLuint* renderbuffers){ NullFuncPtr(); }
	static void APIENTRY Null_glGenRenderbuffers (GLsizei n, GLuint* renderbuffers){ NullFuncPtr(); }
	static void APIENTRY Null_glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height){ NullFuncPtr(); }
	static void APIENTRY Null_glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint* params){ NullFuncPtr(); }
	static GLboolean APIENTRY Null_glIsFramebuffer (GLuint framebuffer){ NullFuncPtr(); return 0; }
	static void APIENTRY Null_glBindFramebuffer (GLenum target, GLuint framebuffer){ NullFuncPtr(); }
	static void APIENTRY Null_glDeleteFramebuffers (GLsizei n, const GLuint* framebuffers){ NullFuncPtr(); }
	static void APIENTRY Null_glGenFramebuffers (GLsizei n, GLuint* framebuffers){ NullFuncPtr(); }
	static GLenum APIENTRY Null_glCheckFramebufferStatus (GLenum target){ NullFuncPtr(); return 0; }
	static void APIENTRY Null_glFramebufferTexture1D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level){ NullFuncPtr(); }
	static void APIENTRY Null_glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level){ NullFuncPtr(); }
	static void APIENTRY Null_glFramebufferTexture3D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset){ NullFuncPtr(); }
	static void APIENTRY Null_glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer){ NullFuncPtr(); }
	static void APIENTRY Null_glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGenerateMipmap (GLenum target){ NullFuncPtr(); }
	static void APIENTRY Null_glBlitFramebuffer (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter){ NullFuncPtr(); }
	static void APIENTRY Null_glRenderbufferStorageMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height){ NullFuncPtr(); }
	static void APIENTRY Null_glFramebufferTextureLayer (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer){ NullFuncPtr(); }
	static void* APIENTRY Null_glMapBufferRange (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access){ NullFuncPtr(); return 0; }
	static void APIENTRY Null_glFlushMappedBufferRange (GLenum target, GLintptr offset, GLsizeiptr length){ NullFuncPtr(); }
	static void APIENTRY Null_glBindVertexArray (GLuint array){ NullFuncPtr(); }
	static void APIENTRY Null_glDeleteVertexArrays (GLsizei n, const GLuint* arrays){ NullFuncPtr(); }
	static void APIENTRY Null_glGenVertexArrays (GLsizei n, GLuint* arrays){ NullFuncPtr(); }
	static GLboolean APIENTRY Null_glIsVertexArray (GLuint array){ NullFuncPtr(); return 0; }
	Version30::Version30(Func_GetProcAddress GetProcAddress):
		Version21(GetProcAddress),
		ColorMaski(GetProc<PFNGLCOLORMASKIPROC>("glColorMaski", Null_glColorMaski)),
		GetBooleani_v(GetProc<PFNGLGETBOOLEANI_VPROC>("glGetBooleani_v", Null_glGetBooleani_v)),
		GetIntegeri_v(GetProc<PFNGLGETINTEGERI_VPROC>("glGetIntegeri_v", Null_glGetIntegeri_v)),
		Enablei(GetProc<PFNGLENABLEIPROC>("glEnablei", Null_glEnablei)),
		Disablei(GetProc<PFNGLDISABLEIPROC>("glDisablei", Null_glDisablei)),
		IsEnabledi(GetProc<PFNGLISENABLEDIPROC>("glIsEnabledi", Null_glIsEnabledi)),
		BeginTransformFeedback(GetProc<PFNGLBEGINTRANSFORMFEEDBACKPROC>("glBeginTransformFeedback", Null_glBeginTransformFeedback)),
		EndTransformFeedback(GetProc<PFNGLENDTRANSFORMFEEDBACKPROC>("glEndTransformFeedback", Null_glEndTransformFeedback)),
		BindBufferRange(GetProc<PFNGLBINDBUFFERRANGEPROC>("glBindBufferRange", Null_glBindBufferRange)),
		BindBufferBase(GetProc<PFNGLBINDBUFFERBASEPROC>("glBindBufferBase", Null_glBindBufferBase)),
		TransformFeedbackVaryings(GetProc<PFNGLTRANSFORMFEEDBACKVARYINGSPROC>("glTransformFeedbackVaryings", Null_glTransformFeedbackVaryings)),
		GetTransformFeedbackVarying(GetProc<PFNGLGETTRANSFORMFEEDBACKVARYINGPROC>("glGetTransformFeedbackVarying", Null_glGetTransformFeedbackVarying)),
		ClampColor(GetProc<PFNGLCLAMPCOLORPROC>("glClampColor", Null_glClampColor)),
		BeginConditionalRender(GetProc<PFNGLBEGINCONDITIONALRENDERPROC>("glBeginConditionalRender", Null_glBeginConditionalRender)),
		EndConditionalRender(GetProc<PFNGLENDCONDITIONALRENDERPROC>("glEndConditionalRender", Null_glEndConditionalRender)),
		VertexAttribIPointer(GetProc<PFNGLVERTEXATTRIBIPOINTERPROC>("glVertexAttribIPointer", Null_glVertexAttribIPointer)),
		GetVertexAttribIiv(GetProc<PFNGLGETVERTEXATTRIBIIVPROC>("glGetVertexAttribIiv", Null_glGetVertexAttribIiv)),
		GetVertexAttribIuiv(GetProc<PFNGLGETVERTEXATTRIBIUIVPROC>("glGetVertexAttribIuiv", Null_glGetVertexAttribIuiv)),
		VertexAttribI1i(GetProc<PFNGLVERTEXATTRIBI1IPROC>("glVertexAttribI1i", Null_glVertexAttribI1i)),
		VertexAttribI2i(GetProc<PFNGLVERTEXATTRIBI2IPROC>("glVertexAttribI2i", Null_glVertexAttribI2i)),
		VertexAttribI3i(GetProc<PFNGLVERTEXATTRIBI3IPROC>("glVertexAttribI3i", Null_glVertexAttribI3i)),
		VertexAttribI4i(GetProc<PFNGLVERTEXATTRIBI4IPROC>("glVertexAttribI4i", Null_glVertexAttribI4i)),
		VertexAttribI1ui(GetProc<PFNGLVERTEXATTRIBI1UIPROC>("glVertexAttribI1ui", Null_glVertexAttribI1ui)),
		VertexAttribI2ui(GetProc<PFNGLVERTEXATTRIBI2UIPROC>("glVertexAttribI2ui", Null_glVertexAttribI2ui)),
		VertexAttribI3ui(GetProc<PFNGLVERTEXATTRIBI3UIPROC>("glVertexAttribI3ui", Null_glVertexAttribI3ui)),
		VertexAttribI4ui(GetProc<PFNGLVERTEXATTRIBI4UIPROC>("glVertexAttribI4ui", Null_glVertexAttribI4ui)),
		VertexAttribI1iv(GetProc<PFNGLVERTEXATTRIBI1IVPROC>("glVertexAttribI1iv", Null_glVertexAttribI1iv)),
		VertexAttribI2iv(GetProc<PFNGLVERTEXATTRIBI2IVPROC>("glVertexAttribI2iv", Null_glVertexAttribI2iv)),
		VertexAttribI3iv(GetProc<PFNGLVERTEXATTRIBI3IVPROC>("glVertexAttribI3iv", Null_glVertexAttribI3iv)),
		VertexAttribI4iv(GetProc<PFNGLVERTEXATTRIBI4IVPROC>("glVertexAttribI4iv", Null_glVertexAttribI4iv)),
		VertexAttribI1uiv(GetProc<PFNGLVERTEXATTRIBI1UIVPROC>("glVertexAttribI1uiv", Null_glVertexAttribI1uiv)),
		VertexAttribI2uiv(GetProc<PFNGLVERTEXATTRIBI2UIVPROC>("glVertexAttribI2uiv", Null_glVertexAttribI2uiv)),
		VertexAttribI3uiv(GetProc<PFNGLVERTEXATTRIBI3UIVPROC>("glVertexAttribI3uiv", Null_glVertexAttribI3uiv)),
		VertexAttribI4uiv(GetProc<PFNGLVERTEXATTRIBI4UIVPROC>("glVertexAttribI4uiv", Null_glVertexAttribI4uiv)),
		VertexAttribI4bv(GetProc<PFNGLVERTEXATTRIBI4BVPROC>("glVertexAttribI4bv", Null_glVertexAttribI4bv)),
		VertexAttribI4sv(GetProc<PFNGLVERTEXATTRIBI4SVPROC>("glVertexAttribI4sv", Null_glVertexAttribI4sv)),
		VertexAttribI4ubv(GetProc<PFNGLVERTEXATTRIBI4UBVPROC>("glVertexAttribI4ubv", Null_glVertexAttribI4ubv)),
		VertexAttribI4usv(GetProc<PFNGLVERTEXATTRIBI4USVPROC>("glVertexAttribI4usv", Null_glVertexAttribI4usv)),
		GetUniformuiv(GetProc<PFNGLGETUNIFORMUIVPROC>("glGetUniformuiv", Null_glGetUniformuiv)),
		BindFragDataLocation(GetProc<PFNGLBINDFRAGDATALOCATIONPROC>("glBindFragDataLocation", Null_glBindFragDataLocation)),
		GetFragDataLocation(GetProc<PFNGLGETFRAGDATALOCATIONPROC>("glGetFragDataLocation", Null_glGetFragDataLocation)),
		Uniform1ui(GetProc<PFNGLUNIFORM1UIPROC>("glUniform1ui", Null_glUniform1ui)),
		Uniform2ui(GetProc<PFNGLUNIFORM2UIPROC>("glUniform2ui", Null_glUniform2ui)),
		Uniform3ui(GetProc<PFNGLUNIFORM3UIPROC>("glUniform3ui", Null_glUniform3ui)),
		Uniform4ui(GetProc<PFNGLUNIFORM4UIPROC>("glUniform4ui", Null_glUniform4ui)),
		Uniform1uiv(GetProc<PFNGLUNIFORM1UIVPROC>("glUniform1uiv", Null_glUniform1uiv)),
		Uniform2uiv(GetProc<PFNGLUNIFORM2UIVPROC>("glUniform2uiv", Null_glUniform2uiv)),
		Uniform3uiv(GetProc<PFNGLUNIFORM3UIVPROC>("glUniform3uiv", Null_glUniform3uiv)),
		Uniform4uiv(GetProc<PFNGLUNIFORM4UIVPROC>("glUniform4uiv", Null_glUniform4uiv)),
		TexParameterIiv(GetProc<PFNGLTEXPARAMETERIIVPROC>("glTexParameterIiv", Null_glTexParameterIiv)),
		TexParameterIuiv(GetProc<PFNGLTEXPARAMETERIUIVPROC>("glTexParameterIuiv", Null_glTexParameterIuiv)),
		GetTexParameterIiv(GetProc<PFNGLGETTEXPARAMETERIIVPROC>("glGetTexParameterIiv", Null_glGetTexParameterIiv)),
		GetTexParameterIuiv(GetProc<PFNGLGETTEXPARAMETERIUIVPROC>("glGetTexParameterIuiv", Null_glGetTexParameterIuiv)),
		ClearBufferiv(GetProc<PFNGLCLEARBUFFERIVPROC>("glClearBufferiv", Null_glClearBufferiv)),
		ClearBufferuiv(GetProc<PFNGLCLEARBUFFERUIVPROC>("glClearBufferuiv", Null_glClearBufferuiv)),
		ClearBufferfv(GetProc<PFNGLCLEARBUFFERFVPROC>("glClearBufferfv", Null_glClearBufferfv)),
		ClearBufferfi(GetProc<PFNGLCLEARBUFFERFIPROC>("glClearBufferfi", Null_glClearBufferfi)),
		GetStringi(GetProc<PFNGLGETSTRINGIPROC>("glGetStringi", Null_glGetStringi)),
		IsRenderbuffer(GetProc<PFNGLISRENDERBUFFERPROC>("glIsRenderbuffer", Null_glIsRenderbuffer)),
		BindRenderbuffer(GetProc<PFNGLBINDRENDERBUFFERPROC>("glBindRenderbuffer", Null_glBindRenderbuffer)),
		DeleteRenderbuffers(GetProc<PFNGLDELETERENDERBUFFERSPROC>("glDeleteRenderbuffers", Null_glDeleteRenderbuffers)),
		GenRenderbuffers(GetProc<PFNGLGENRENDERBUFFERSPROC>("glGenRenderbuffers", Null_glGenRenderbuffers)),
		RenderbufferStorage(GetProc<PFNGLRENDERBUFFERSTORAGEPROC>("glRenderbufferStorage", Null_glRenderbufferStorage)),
		GetRenderbufferParameteriv(GetProc<PFNGLGETRENDERBUFFERPARAMETERIVPROC>("glGetRenderbufferParameteriv", Null_glGetRenderbufferParameteriv)),
		IsFramebuffer(GetProc<PFNGLISFRAMEBUFFERPROC>("glIsFramebuffer", Null_glIsFramebuffer)),
		BindFramebuffer(GetProc<PFNGLBINDFRAMEBUFFERPROC>("glBindFramebuffer", Null_glBindFramebuffer)),
		DeleteFramebuffers(GetProc<PFNGLDELETEFRAMEBUFFERSPROC>("glDeleteFramebuffers", Null_glDeleteFramebuffers)),
		GenFramebuffers(GetProc<PFNGLGENFRAMEBUFFERSPROC>("glGenFramebuffers", Null_glGenFramebuffers)),
		CheckFramebufferStatus(GetProc<PFNGLCHECKFRAMEBUFFERSTATUSPROC>("glCheckFramebufferStatus", Null_glCheckFramebufferStatus)),
		FramebufferTexture1D(GetProc<PFNGLFRAMEBUFFERTEXTURE1DPROC>("glFramebufferTexture1D", Null_glFramebufferTexture1D)),
		FramebufferTexture2D(GetProc<PFNGLFRAMEBUFFERTEXTURE2DPROC>("glFramebufferTexture2D", Null_glFramebufferTexture2D)),
		FramebufferTexture3D(GetProc<PFNGLFRAMEBUFFERTEXTURE3DPROC>("glFramebufferTexture3D", Null_glFramebufferTexture3D)),
		FramebufferRenderbuffer(GetProc<PFNGLFRAMEBUFFERRENDERBUFFERPROC>("glFramebufferRenderbuffer", Null_glFramebufferRenderbuffer)),
		GetFramebufferAttachmentParameteriv(GetProc<PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC>("glGetFramebufferAttachmentParameteriv", Null_glGetFramebufferAttachmentParameteriv)),
		GenerateMipmap(GetProc<PFNGLGENERATEMIPMAPPROC>("glGenerateMipmap", Null_glGenerateMipmap)),
		BlitFramebuffer(GetProc<PFNGLBLITFRAMEBUFFERPROC>("glBlitFramebuffer", Null_glBlitFramebuffer)),
		RenderbufferStorageMultisample(GetProc<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC>("glRenderbufferStorageMultisample", Null_glRenderbufferStorageMultisample)),
		FramebufferTextureLayer(GetProc<PFNGLFRAMEBUFFERTEXTURELAYERPROC>("glFramebufferTextureLayer", Null_glFramebufferTextureLayer)),
		MapBufferRange(GetProc<PFNGLMAPBUFFERRANGEPROC>("glMapBufferRange", Null_glMapBufferRange)),
		FlushMappedBufferRange(GetProc<PFNGLFLUSHMAPPEDBUFFERRANGEPROC>("glFlushMappedBufferRange", Null_glFlushMappedBufferRange)),
		BindVertexArray(GetProc<PFNGLBINDVERTEXARRAYPROC>("glBindVertexArray", Null_glBindVertexArray)),
		DeleteVertexArrays(GetProc<PFNGLDELETEVERTEXARRAYSPROC>("glDeleteVertexArrays", Null_glDeleteVertexArrays)),
		GenVertexArrays(GetProc<PFNGLGENVERTEXARRAYSPROC>("glGenVertexArrays", Null_glGenVertexArrays)),
		IsVertexArray(GetProc<PFNGLISVERTEXARRAYPROC>("glIsVertexArray", Null_glIsVertexArray))
	{
		Available = Ver_Major > 3 || (Ver_Major == 3 && (Ver_Minor > 0 || (Ver_Minor == 0 && Ver_Release >= 0)));
	}


	static void APIENTRY Null_glDrawArraysInstanced (GLenum mode, GLint first, GLsizei count, GLsizei instancecount){ NullFuncPtr(); }
	static void APIENTRY Null_glDrawElementsInstanced (GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instancecount){ NullFuncPtr(); }
	static void APIENTRY Null_glTexBuffer (GLenum target, GLenum internalformat, GLuint buffer){ NullFuncPtr(); }
	static void APIENTRY Null_glPrimitiveRestartIndex (GLuint index){ NullFuncPtr(); }
	static void APIENTRY Null_glCopyBufferSubData (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size){ NullFuncPtr(); }
	static void APIENTRY Null_glGetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar* const* uniformNames, GLuint* uniformIndices){ NullFuncPtr(); }
	static void APIENTRY Null_glGetActiveUniformsiv (GLuint program, GLsizei uniformCount, const GLuint* uniformIndices, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetActiveUniformName (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformName){ NullFuncPtr(); }
	static GLuint APIENTRY Null_glGetUniformBlockIndex (GLuint program, const GLchar* uniformBlockName){ NullFuncPtr(); return 0; }
	static void APIENTRY Null_glGetActiveUniformBlockiv (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint* params){ NullFuncPtr(); }
	static void APIENTRY Null_glGetActiveUniformBlockName (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformBlockName){ NullFuncPtr(); }
	static void APIENTRY Null_glUniformBlockBinding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding){ NullFuncPtr(); }
	Version31::Version31(Func_GetProcAddress GetProcAddress):
		Version30(GetProcAddress),
		DrawArraysInstanced(GetProc<PFNGLDRAWARRAYSINSTANCEDPROC>("glDrawArraysInstanced", Null_glDrawArraysInstanced)),
		DrawElementsInstanced(GetProc<PFNGLDRAWELEMENTSINSTANCEDPROC>("glDrawElementsInstanced", Null_glDrawElementsInstanced)),
		TexBuffer(GetProc<PFNGLTEXBUFFERPROC>("glTexBuffer", Null_glTexBuffer)),
		PrimitiveRestartIndex(GetProc<PFNGLPRIMITIVERESTARTINDEXPROC>("glPrimitiveRestartIndex", Null_glPrimitiveRestartIndex)),
		CopyBufferSubData(GetProc<PFNGLCOPYBUFFERSUBDATAPROC>("glCopyBufferSubData", Null_glCopyBufferSubData)),
		GetUniformIndices(GetProc<PFNGLGETUNIFORMINDICESPROC>("glGetUniformIndices", Null_glGetUniformIndices)),
		GetActiveUniformsiv(GetProc<PFNGLGETACTIVEUNIFORMSIVPROC>("glGetActiveUniformsiv", Null_glGetActiveUniformsiv)),
		GetActiveUniformName(GetProc<PFNGLGETACTIVEUNIFORMNAMEPROC>("glGetActiveUniformName", Null_glGetActiveUniformName)),
		GetUniformBlockIndex(GetProc<PFNGLGETUNIFORMBLOCKINDEXPROC>("glGetUniformBlockIndex", Null_glGetUniformBlockIndex)),
		GetActiveUniformBlockiv(GetProc<PFNGLGETACTIVEUNIFORMBLOCKIVPROC>("glGetActiveUniformBlockiv", Null_glGetActiveUniformBlockiv)),
		GetActiveUniformBlockName(GetProc<PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC>("glGetActiveUniformBlockName", Null_glGetActiveUniformBlockName)),
		UniformBlockBinding(GetProc<PFNGLUNIFORMBLOCKBINDINGPROC>("glUniformBlockBinding", Null_glUniformBlockBinding))
	{
		Available = Ver_Major > 3 || (Ver_Major == 3 && (Ver_Minor > 1 || (Ver_Minor == 1 && Ver_Release >= 0)));
	}


	static void APIENTRY Null_glDrawElementsBaseVertex (GLenum mode, GLsizei count, GLenum type, const void* indices, GLint basevertex){ NullFuncPtr(); }
	static void APIENTRY Null_glDrawRangeElementsBaseVertex (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void* indices, GLint basevertex){ NullFuncPtr(); }
	static void APIENTRY Null_glDrawElementsInstancedBaseVertex (GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instancecount, GLint basevertex){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiDrawElementsBaseVertex (GLenum mode, const GLsizei* count, GLenum type, const void* const* indices, GLsizei drawcount, const GLint* basevertex){ NullFuncPtr(); }
	static void APIENTRY Null_glProvokingVertex (GLenum mode){ NullFuncPtr(); }
	static GLsync APIENTRY Null_glFenceSync (GLenum condition, GLbitfield flags){ NullFuncPtr(); return 0; }
	static GLboolean APIENTRY Null_glIsSync (GLsync sync){ NullFuncPtr(); return 0; }
	static void APIENTRY Null_glDeleteSync (GLsync sync){ NullFuncPtr(); }
	static GLenum APIENTRY Null_glClientWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout){ NullFuncPtr(); return 0; }
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
		DrawElementsBaseVertex(GetProc<PFNGLDRAWELEMENTSBASEVERTEXPROC>("glDrawElementsBaseVertex", Null_glDrawElementsBaseVertex)),
		DrawRangeElementsBaseVertex(GetProc<PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC>("glDrawRangeElementsBaseVertex", Null_glDrawRangeElementsBaseVertex)),
		DrawElementsInstancedBaseVertex(GetProc<PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC>("glDrawElementsInstancedBaseVertex", Null_glDrawElementsInstancedBaseVertex)),
		MultiDrawElementsBaseVertex(GetProc<PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC>("glMultiDrawElementsBaseVertex", Null_glMultiDrawElementsBaseVertex)),
		ProvokingVertex(GetProc<PFNGLPROVOKINGVERTEXPROC>("glProvokingVertex", Null_glProvokingVertex)),
		FenceSync(GetProc<PFNGLFENCESYNCPROC>("glFenceSync", Null_glFenceSync)),
		IsSync(GetProc<PFNGLISSYNCPROC>("glIsSync", Null_glIsSync)),
		DeleteSync(GetProc<PFNGLDELETESYNCPROC>("glDeleteSync", Null_glDeleteSync)),
		ClientWaitSync(GetProc<PFNGLCLIENTWAITSYNCPROC>("glClientWaitSync", Null_glClientWaitSync)),
		WaitSync(GetProc<PFNGLWAITSYNCPROC>("glWaitSync", Null_glWaitSync)),
		GetInteger64v(GetProc<PFNGLGETINTEGER64VPROC>("glGetInteger64v", Null_glGetInteger64v)),
		GetSynciv(GetProc<PFNGLGETSYNCIVPROC>("glGetSynciv", Null_glGetSynciv)),
		GetInteger64i_v(GetProc<PFNGLGETINTEGER64I_VPROC>("glGetInteger64i_v", Null_glGetInteger64i_v)),
		GetBufferParameteri64v(GetProc<PFNGLGETBUFFERPARAMETERI64VPROC>("glGetBufferParameteri64v", Null_glGetBufferParameteri64v)),
		FramebufferTexture(GetProc<PFNGLFRAMEBUFFERTEXTUREPROC>("glFramebufferTexture", Null_glFramebufferTexture)),
		TexImage2DMultisample(GetProc<PFNGLTEXIMAGE2DMULTISAMPLEPROC>("glTexImage2DMultisample", Null_glTexImage2DMultisample)),
		TexImage3DMultisample(GetProc<PFNGLTEXIMAGE3DMULTISAMPLEPROC>("glTexImage3DMultisample", Null_glTexImage3DMultisample)),
		GetMultisamplefv(GetProc<PFNGLGETMULTISAMPLEFVPROC>("glGetMultisamplefv", Null_glGetMultisamplefv)),
		SampleMaski(GetProc<PFNGLSAMPLEMASKIPROC>("glSampleMaski", Null_glSampleMaski))
	{
		Available = Ver_Major > 3 || (Ver_Major == 3 && (Ver_Minor > 2 || (Ver_Minor == 2 && Ver_Release >= 0)));
	}


	static void APIENTRY Null_glBindFragDataLocationIndexed (GLuint program, GLuint colorNumber, GLuint index, const GLchar* name){ NullFuncPtr(); }
	static GLint APIENTRY Null_glGetFragDataIndex (GLuint program, const GLchar* name){ NullFuncPtr(); return 0; }
	static void APIENTRY Null_glGenSamplers (GLsizei count, GLuint* samplers){ NullFuncPtr(); }
	static void APIENTRY Null_glDeleteSamplers (GLsizei count, const GLuint* samplers){ NullFuncPtr(); }
	static GLboolean APIENTRY Null_glIsSampler (GLuint sampler){ NullFuncPtr(); return 0; }
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
		BindFragDataLocationIndexed(GetProc<PFNGLBINDFRAGDATALOCATIONINDEXEDPROC>("glBindFragDataLocationIndexed", Null_glBindFragDataLocationIndexed)),
		GetFragDataIndex(GetProc<PFNGLGETFRAGDATAINDEXPROC>("glGetFragDataIndex", Null_glGetFragDataIndex)),
		GenSamplers(GetProc<PFNGLGENSAMPLERSPROC>("glGenSamplers", Null_glGenSamplers)),
		DeleteSamplers(GetProc<PFNGLDELETESAMPLERSPROC>("glDeleteSamplers", Null_glDeleteSamplers)),
		IsSampler(GetProc<PFNGLISSAMPLERPROC>("glIsSampler", Null_glIsSampler)),
		BindSampler(GetProc<PFNGLBINDSAMPLERPROC>("glBindSampler", Null_glBindSampler)),
		SamplerParameteri(GetProc<PFNGLSAMPLERPARAMETERIPROC>("glSamplerParameteri", Null_glSamplerParameteri)),
		SamplerParameteriv(GetProc<PFNGLSAMPLERPARAMETERIVPROC>("glSamplerParameteriv", Null_glSamplerParameteriv)),
		SamplerParameterf(GetProc<PFNGLSAMPLERPARAMETERFPROC>("glSamplerParameterf", Null_glSamplerParameterf)),
		SamplerParameterfv(GetProc<PFNGLSAMPLERPARAMETERFVPROC>("glSamplerParameterfv", Null_glSamplerParameterfv)),
		SamplerParameterIiv(GetProc<PFNGLSAMPLERPARAMETERIIVPROC>("glSamplerParameterIiv", Null_glSamplerParameterIiv)),
		SamplerParameterIuiv(GetProc<PFNGLSAMPLERPARAMETERIUIVPROC>("glSamplerParameterIuiv", Null_glSamplerParameterIuiv)),
		GetSamplerParameteriv(GetProc<PFNGLGETSAMPLERPARAMETERIVPROC>("glGetSamplerParameteriv", Null_glGetSamplerParameteriv)),
		GetSamplerParameterIiv(GetProc<PFNGLGETSAMPLERPARAMETERIIVPROC>("glGetSamplerParameterIiv", Null_glGetSamplerParameterIiv)),
		GetSamplerParameterfv(GetProc<PFNGLGETSAMPLERPARAMETERFVPROC>("glGetSamplerParameterfv", Null_glGetSamplerParameterfv)),
		GetSamplerParameterIuiv(GetProc<PFNGLGETSAMPLERPARAMETERIUIVPROC>("glGetSamplerParameterIuiv", Null_glGetSamplerParameterIuiv)),
		QueryCounter(GetProc<PFNGLQUERYCOUNTERPROC>("glQueryCounter", Null_glQueryCounter)),
		GetQueryObjecti64v(GetProc<PFNGLGETQUERYOBJECTI64VPROC>("glGetQueryObjecti64v", Null_glGetQueryObjecti64v)),
		GetQueryObjectui64v(GetProc<PFNGLGETQUERYOBJECTUI64VPROC>("glGetQueryObjectui64v", Null_glGetQueryObjectui64v)),
		VertexAttribDivisor(GetProc<PFNGLVERTEXATTRIBDIVISORPROC>("glVertexAttribDivisor", Null_glVertexAttribDivisor)),
		VertexAttribP1ui(GetProc<PFNGLVERTEXATTRIBP1UIPROC>("glVertexAttribP1ui", Null_glVertexAttribP1ui)),
		VertexAttribP1uiv(GetProc<PFNGLVERTEXATTRIBP1UIVPROC>("glVertexAttribP1uiv", Null_glVertexAttribP1uiv)),
		VertexAttribP2ui(GetProc<PFNGLVERTEXATTRIBP2UIPROC>("glVertexAttribP2ui", Null_glVertexAttribP2ui)),
		VertexAttribP2uiv(GetProc<PFNGLVERTEXATTRIBP2UIVPROC>("glVertexAttribP2uiv", Null_glVertexAttribP2uiv)),
		VertexAttribP3ui(GetProc<PFNGLVERTEXATTRIBP3UIPROC>("glVertexAttribP3ui", Null_glVertexAttribP3ui)),
		VertexAttribP3uiv(GetProc<PFNGLVERTEXATTRIBP3UIVPROC>("glVertexAttribP3uiv", Null_glVertexAttribP3uiv)),
		VertexAttribP4ui(GetProc<PFNGLVERTEXATTRIBP4UIPROC>("glVertexAttribP4ui", Null_glVertexAttribP4ui)),
		VertexAttribP4uiv(GetProc<PFNGLVERTEXATTRIBP4UIVPROC>("glVertexAttribP4uiv", Null_glVertexAttribP4uiv)),
		VertexP2ui(GetProc<PFNGLVERTEXP2UIPROC>("glVertexP2ui", Null_glVertexP2ui)),
		VertexP2uiv(GetProc<PFNGLVERTEXP2UIVPROC>("glVertexP2uiv", Null_glVertexP2uiv)),
		VertexP3ui(GetProc<PFNGLVERTEXP3UIPROC>("glVertexP3ui", Null_glVertexP3ui)),
		VertexP3uiv(GetProc<PFNGLVERTEXP3UIVPROC>("glVertexP3uiv", Null_glVertexP3uiv)),
		VertexP4ui(GetProc<PFNGLVERTEXP4UIPROC>("glVertexP4ui", Null_glVertexP4ui)),
		VertexP4uiv(GetProc<PFNGLVERTEXP4UIVPROC>("glVertexP4uiv", Null_glVertexP4uiv)),
		TexCoordP1ui(GetProc<PFNGLTEXCOORDP1UIPROC>("glTexCoordP1ui", Null_glTexCoordP1ui)),
		TexCoordP1uiv(GetProc<PFNGLTEXCOORDP1UIVPROC>("glTexCoordP1uiv", Null_glTexCoordP1uiv)),
		TexCoordP2ui(GetProc<PFNGLTEXCOORDP2UIPROC>("glTexCoordP2ui", Null_glTexCoordP2ui)),
		TexCoordP2uiv(GetProc<PFNGLTEXCOORDP2UIVPROC>("glTexCoordP2uiv", Null_glTexCoordP2uiv)),
		TexCoordP3ui(GetProc<PFNGLTEXCOORDP3UIPROC>("glTexCoordP3ui", Null_glTexCoordP3ui)),
		TexCoordP3uiv(GetProc<PFNGLTEXCOORDP3UIVPROC>("glTexCoordP3uiv", Null_glTexCoordP3uiv)),
		TexCoordP4ui(GetProc<PFNGLTEXCOORDP4UIPROC>("glTexCoordP4ui", Null_glTexCoordP4ui)),
		TexCoordP4uiv(GetProc<PFNGLTEXCOORDP4UIVPROC>("glTexCoordP4uiv", Null_glTexCoordP4uiv)),
		MultiTexCoordP1ui(GetProc<PFNGLMULTITEXCOORDP1UIPROC>("glMultiTexCoordP1ui", Null_glMultiTexCoordP1ui)),
		MultiTexCoordP1uiv(GetProc<PFNGLMULTITEXCOORDP1UIVPROC>("glMultiTexCoordP1uiv", Null_glMultiTexCoordP1uiv)),
		MultiTexCoordP2ui(GetProc<PFNGLMULTITEXCOORDP2UIPROC>("glMultiTexCoordP2ui", Null_glMultiTexCoordP2ui)),
		MultiTexCoordP2uiv(GetProc<PFNGLMULTITEXCOORDP2UIVPROC>("glMultiTexCoordP2uiv", Null_glMultiTexCoordP2uiv)),
		MultiTexCoordP3ui(GetProc<PFNGLMULTITEXCOORDP3UIPROC>("glMultiTexCoordP3ui", Null_glMultiTexCoordP3ui)),
		MultiTexCoordP3uiv(GetProc<PFNGLMULTITEXCOORDP3UIVPROC>("glMultiTexCoordP3uiv", Null_glMultiTexCoordP3uiv)),
		MultiTexCoordP4ui(GetProc<PFNGLMULTITEXCOORDP4UIPROC>("glMultiTexCoordP4ui", Null_glMultiTexCoordP4ui)),
		MultiTexCoordP4uiv(GetProc<PFNGLMULTITEXCOORDP4UIVPROC>("glMultiTexCoordP4uiv", Null_glMultiTexCoordP4uiv)),
		NormalP3ui(GetProc<PFNGLNORMALP3UIPROC>("glNormalP3ui", Null_glNormalP3ui)),
		NormalP3uiv(GetProc<PFNGLNORMALP3UIVPROC>("glNormalP3uiv", Null_glNormalP3uiv)),
		ColorP3ui(GetProc<PFNGLCOLORP3UIPROC>("glColorP3ui", Null_glColorP3ui)),
		ColorP3uiv(GetProc<PFNGLCOLORP3UIVPROC>("glColorP3uiv", Null_glColorP3uiv)),
		ColorP4ui(GetProc<PFNGLCOLORP4UIPROC>("glColorP4ui", Null_glColorP4ui)),
		ColorP4uiv(GetProc<PFNGLCOLORP4UIVPROC>("glColorP4uiv", Null_glColorP4uiv)),
		SecondaryColorP3ui(GetProc<PFNGLSECONDARYCOLORP3UIPROC>("glSecondaryColorP3ui", Null_glSecondaryColorP3ui)),
		SecondaryColorP3uiv(GetProc<PFNGLSECONDARYCOLORP3UIVPROC>("glSecondaryColorP3uiv", Null_glSecondaryColorP3uiv))
	{
		Available = Ver_Major > 3 || (Ver_Major == 3 && (Ver_Minor > 3 || (Ver_Minor == 3 && Ver_Release >= 0)));
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
	static GLint APIENTRY Null_glGetSubroutineUniformLocation (GLuint program, GLenum shadertype, const GLchar* name){ NullFuncPtr(); return 0; }
	static GLuint APIENTRY Null_glGetSubroutineIndex (GLuint program, GLenum shadertype, const GLchar* name){ NullFuncPtr(); return 0; }
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
	static GLboolean APIENTRY Null_glIsTransformFeedback (GLuint id){ NullFuncPtr(); return 0; }
	static void APIENTRY Null_glPauseTransformFeedback (void){ NullFuncPtr(); }
	static void APIENTRY Null_glResumeTransformFeedback (void){ NullFuncPtr(); }
	static void APIENTRY Null_glDrawTransformFeedback (GLenum mode, GLuint id){ NullFuncPtr(); }
	static void APIENTRY Null_glDrawTransformFeedbackStream (GLenum mode, GLuint id, GLuint stream){ NullFuncPtr(); }
	static void APIENTRY Null_glBeginQueryIndexed (GLenum target, GLuint index, GLuint id){ NullFuncPtr(); }
	static void APIENTRY Null_glEndQueryIndexed (GLenum target, GLuint index){ NullFuncPtr(); }
	static void APIENTRY Null_glGetQueryIndexediv (GLenum target, GLuint index, GLenum pname, GLint* params){ NullFuncPtr(); }
	Version40::Version40(Func_GetProcAddress GetProcAddress):
		Version33(GetProcAddress),
		MinSampleShading(GetProc<PFNGLMINSAMPLESHADINGPROC>("glMinSampleShading", Null_glMinSampleShading)),
		BlendEquationi(GetProc<PFNGLBLENDEQUATIONIPROC>("glBlendEquationi", Null_glBlendEquationi)),
		BlendEquationSeparatei(GetProc<PFNGLBLENDEQUATIONSEPARATEIPROC>("glBlendEquationSeparatei", Null_glBlendEquationSeparatei)),
		BlendFunci(GetProc<PFNGLBLENDFUNCIPROC>("glBlendFunci", Null_glBlendFunci)),
		BlendFuncSeparatei(GetProc<PFNGLBLENDFUNCSEPARATEIPROC>("glBlendFuncSeparatei", Null_glBlendFuncSeparatei)),
		DrawArraysIndirect(GetProc<PFNGLDRAWARRAYSINDIRECTPROC>("glDrawArraysIndirect", Null_glDrawArraysIndirect)),
		DrawElementsIndirect(GetProc<PFNGLDRAWELEMENTSINDIRECTPROC>("glDrawElementsIndirect", Null_glDrawElementsIndirect)),
		Uniform1d(GetProc<PFNGLUNIFORM1DPROC>("glUniform1d", Null_glUniform1d)),
		Uniform2d(GetProc<PFNGLUNIFORM2DPROC>("glUniform2d", Null_glUniform2d)),
		Uniform3d(GetProc<PFNGLUNIFORM3DPROC>("glUniform3d", Null_glUniform3d)),
		Uniform4d(GetProc<PFNGLUNIFORM4DPROC>("glUniform4d", Null_glUniform4d)),
		Uniform1dv(GetProc<PFNGLUNIFORM1DVPROC>("glUniform1dv", Null_glUniform1dv)),
		Uniform2dv(GetProc<PFNGLUNIFORM2DVPROC>("glUniform2dv", Null_glUniform2dv)),
		Uniform3dv(GetProc<PFNGLUNIFORM3DVPROC>("glUniform3dv", Null_glUniform3dv)),
		Uniform4dv(GetProc<PFNGLUNIFORM4DVPROC>("glUniform4dv", Null_glUniform4dv)),
		UniformMatrix2dv(GetProc<PFNGLUNIFORMMATRIX2DVPROC>("glUniformMatrix2dv", Null_glUniformMatrix2dv)),
		UniformMatrix3dv(GetProc<PFNGLUNIFORMMATRIX3DVPROC>("glUniformMatrix3dv", Null_glUniformMatrix3dv)),
		UniformMatrix4dv(GetProc<PFNGLUNIFORMMATRIX4DVPROC>("glUniformMatrix4dv", Null_glUniformMatrix4dv)),
		UniformMatrix2x3dv(GetProc<PFNGLUNIFORMMATRIX2X3DVPROC>("glUniformMatrix2x3dv", Null_glUniformMatrix2x3dv)),
		UniformMatrix2x4dv(GetProc<PFNGLUNIFORMMATRIX2X4DVPROC>("glUniformMatrix2x4dv", Null_glUniformMatrix2x4dv)),
		UniformMatrix3x2dv(GetProc<PFNGLUNIFORMMATRIX3X2DVPROC>("glUniformMatrix3x2dv", Null_glUniformMatrix3x2dv)),
		UniformMatrix3x4dv(GetProc<PFNGLUNIFORMMATRIX3X4DVPROC>("glUniformMatrix3x4dv", Null_glUniformMatrix3x4dv)),
		UniformMatrix4x2dv(GetProc<PFNGLUNIFORMMATRIX4X2DVPROC>("glUniformMatrix4x2dv", Null_glUniformMatrix4x2dv)),
		UniformMatrix4x3dv(GetProc<PFNGLUNIFORMMATRIX4X3DVPROC>("glUniformMatrix4x3dv", Null_glUniformMatrix4x3dv)),
		GetUniformdv(GetProc<PFNGLGETUNIFORMDVPROC>("glGetUniformdv", Null_glGetUniformdv)),
		GetSubroutineUniformLocation(GetProc<PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC>("glGetSubroutineUniformLocation", Null_glGetSubroutineUniformLocation)),
		GetSubroutineIndex(GetProc<PFNGLGETSUBROUTINEINDEXPROC>("glGetSubroutineIndex", Null_glGetSubroutineIndex)),
		GetActiveSubroutineUniformiv(GetProc<PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC>("glGetActiveSubroutineUniformiv", Null_glGetActiveSubroutineUniformiv)),
		GetActiveSubroutineUniformName(GetProc<PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC>("glGetActiveSubroutineUniformName", Null_glGetActiveSubroutineUniformName)),
		GetActiveSubroutineName(GetProc<PFNGLGETACTIVESUBROUTINENAMEPROC>("glGetActiveSubroutineName", Null_glGetActiveSubroutineName)),
		UniformSubroutinesuiv(GetProc<PFNGLUNIFORMSUBROUTINESUIVPROC>("glUniformSubroutinesuiv", Null_glUniformSubroutinesuiv)),
		GetUniformSubroutineuiv(GetProc<PFNGLGETUNIFORMSUBROUTINEUIVPROC>("glGetUniformSubroutineuiv", Null_glGetUniformSubroutineuiv)),
		GetProgramStageiv(GetProc<PFNGLGETPROGRAMSTAGEIVPROC>("glGetProgramStageiv", Null_glGetProgramStageiv)),
		PatchParameteri(GetProc<PFNGLPATCHPARAMETERIPROC>("glPatchParameteri", Null_glPatchParameteri)),
		PatchParameterfv(GetProc<PFNGLPATCHPARAMETERFVPROC>("glPatchParameterfv", Null_glPatchParameterfv)),
		BindTransformFeedback(GetProc<PFNGLBINDTRANSFORMFEEDBACKPROC>("glBindTransformFeedback", Null_glBindTransformFeedback)),
		DeleteTransformFeedbacks(GetProc<PFNGLDELETETRANSFORMFEEDBACKSPROC>("glDeleteTransformFeedbacks", Null_glDeleteTransformFeedbacks)),
		GenTransformFeedbacks(GetProc<PFNGLGENTRANSFORMFEEDBACKSPROC>("glGenTransformFeedbacks", Null_glGenTransformFeedbacks)),
		IsTransformFeedback(GetProc<PFNGLISTRANSFORMFEEDBACKPROC>("glIsTransformFeedback", Null_glIsTransformFeedback)),
		PauseTransformFeedback(GetProc<PFNGLPAUSETRANSFORMFEEDBACKPROC>("glPauseTransformFeedback", Null_glPauseTransformFeedback)),
		ResumeTransformFeedback(GetProc<PFNGLRESUMETRANSFORMFEEDBACKPROC>("glResumeTransformFeedback", Null_glResumeTransformFeedback)),
		DrawTransformFeedback(GetProc<PFNGLDRAWTRANSFORMFEEDBACKPROC>("glDrawTransformFeedback", Null_glDrawTransformFeedback)),
		DrawTransformFeedbackStream(GetProc<PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC>("glDrawTransformFeedbackStream", Null_glDrawTransformFeedbackStream)),
		BeginQueryIndexed(GetProc<PFNGLBEGINQUERYINDEXEDPROC>("glBeginQueryIndexed", Null_glBeginQueryIndexed)),
		EndQueryIndexed(GetProc<PFNGLENDQUERYINDEXEDPROC>("glEndQueryIndexed", Null_glEndQueryIndexed)),
		GetQueryIndexediv(GetProc<PFNGLGETQUERYINDEXEDIVPROC>("glGetQueryIndexediv", Null_glGetQueryIndexediv))
	{
		Available = Ver_Major > 4 || (Ver_Major == 4 && (Ver_Minor > 0 || (Ver_Minor == 0 && Ver_Release >= 0)));
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
	static GLuint APIENTRY Null_glCreateShaderProgramv (GLenum type, GLsizei count, const GLchar* const* strings){ NullFuncPtr(); return 0; }
	static void APIENTRY Null_glBindProgramPipeline (GLuint pipeline){ NullFuncPtr(); }
	static void APIENTRY Null_glDeleteProgramPipelines (GLsizei n, const GLuint* pipelines){ NullFuncPtr(); }
	static void APIENTRY Null_glGenProgramPipelines (GLsizei n, GLuint* pipelines){ NullFuncPtr(); }
	static GLboolean APIENTRY Null_glIsProgramPipeline (GLuint pipeline){ NullFuncPtr(); return 0; }
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
		ReleaseShaderCompiler(GetProc<PFNGLRELEASESHADERCOMPILERPROC>("glReleaseShaderCompiler", Null_glReleaseShaderCompiler)),
		ShaderBinary(GetProc<PFNGLSHADERBINARYPROC>("glShaderBinary", Null_glShaderBinary)),
		GetShaderPrecisionFormat(GetProc<PFNGLGETSHADERPRECISIONFORMATPROC>("glGetShaderPrecisionFormat", Null_glGetShaderPrecisionFormat)),
		DepthRangef(GetProc<PFNGLDEPTHRANGEFPROC>("glDepthRangef", Null_glDepthRangef)),
		ClearDepthf(GetProc<PFNGLCLEARDEPTHFPROC>("glClearDepthf", Null_glClearDepthf)),
		GetProgramBinary(GetProc<PFNGLGETPROGRAMBINARYPROC>("glGetProgramBinary", Null_glGetProgramBinary)),
		ProgramBinary(GetProc<PFNGLPROGRAMBINARYPROC>("glProgramBinary", Null_glProgramBinary)),
		ProgramParameteri(GetProc<PFNGLPROGRAMPARAMETERIPROC>("glProgramParameteri", Null_glProgramParameteri)),
		UseProgramStages(GetProc<PFNGLUSEPROGRAMSTAGESPROC>("glUseProgramStages", Null_glUseProgramStages)),
		ActiveShaderProgram(GetProc<PFNGLACTIVESHADERPROGRAMPROC>("glActiveShaderProgram", Null_glActiveShaderProgram)),
		CreateShaderProgramv(GetProc<PFNGLCREATESHADERPROGRAMVPROC>("glCreateShaderProgramv", Null_glCreateShaderProgramv)),
		BindProgramPipeline(GetProc<PFNGLBINDPROGRAMPIPELINEPROC>("glBindProgramPipeline", Null_glBindProgramPipeline)),
		DeleteProgramPipelines(GetProc<PFNGLDELETEPROGRAMPIPELINESPROC>("glDeleteProgramPipelines", Null_glDeleteProgramPipelines)),
		GenProgramPipelines(GetProc<PFNGLGENPROGRAMPIPELINESPROC>("glGenProgramPipelines", Null_glGenProgramPipelines)),
		IsProgramPipeline(GetProc<PFNGLISPROGRAMPIPELINEPROC>("glIsProgramPipeline", Null_glIsProgramPipeline)),
		GetProgramPipelineiv(GetProc<PFNGLGETPROGRAMPIPELINEIVPROC>("glGetProgramPipelineiv", Null_glGetProgramPipelineiv)),
		ProgramUniform1i(GetProc<PFNGLPROGRAMUNIFORM1IPROC>("glProgramUniform1i", Null_glProgramUniform1i)),
		ProgramUniform1iv(GetProc<PFNGLPROGRAMUNIFORM1IVPROC>("glProgramUniform1iv", Null_glProgramUniform1iv)),
		ProgramUniform1f(GetProc<PFNGLPROGRAMUNIFORM1FPROC>("glProgramUniform1f", Null_glProgramUniform1f)),
		ProgramUniform1fv(GetProc<PFNGLPROGRAMUNIFORM1FVPROC>("glProgramUniform1fv", Null_glProgramUniform1fv)),
		ProgramUniform1d(GetProc<PFNGLPROGRAMUNIFORM1DPROC>("glProgramUniform1d", Null_glProgramUniform1d)),
		ProgramUniform1dv(GetProc<PFNGLPROGRAMUNIFORM1DVPROC>("glProgramUniform1dv", Null_glProgramUniform1dv)),
		ProgramUniform1ui(GetProc<PFNGLPROGRAMUNIFORM1UIPROC>("glProgramUniform1ui", Null_glProgramUniform1ui)),
		ProgramUniform1uiv(GetProc<PFNGLPROGRAMUNIFORM1UIVPROC>("glProgramUniform1uiv", Null_glProgramUniform1uiv)),
		ProgramUniform2i(GetProc<PFNGLPROGRAMUNIFORM2IPROC>("glProgramUniform2i", Null_glProgramUniform2i)),
		ProgramUniform2iv(GetProc<PFNGLPROGRAMUNIFORM2IVPROC>("glProgramUniform2iv", Null_glProgramUniform2iv)),
		ProgramUniform2f(GetProc<PFNGLPROGRAMUNIFORM2FPROC>("glProgramUniform2f", Null_glProgramUniform2f)),
		ProgramUniform2fv(GetProc<PFNGLPROGRAMUNIFORM2FVPROC>("glProgramUniform2fv", Null_glProgramUniform2fv)),
		ProgramUniform2d(GetProc<PFNGLPROGRAMUNIFORM2DPROC>("glProgramUniform2d", Null_glProgramUniform2d)),
		ProgramUniform2dv(GetProc<PFNGLPROGRAMUNIFORM2DVPROC>("glProgramUniform2dv", Null_glProgramUniform2dv)),
		ProgramUniform2ui(GetProc<PFNGLPROGRAMUNIFORM2UIPROC>("glProgramUniform2ui", Null_glProgramUniform2ui)),
		ProgramUniform2uiv(GetProc<PFNGLPROGRAMUNIFORM2UIVPROC>("glProgramUniform2uiv", Null_glProgramUniform2uiv)),
		ProgramUniform3i(GetProc<PFNGLPROGRAMUNIFORM3IPROC>("glProgramUniform3i", Null_glProgramUniform3i)),
		ProgramUniform3iv(GetProc<PFNGLPROGRAMUNIFORM3IVPROC>("glProgramUniform3iv", Null_glProgramUniform3iv)),
		ProgramUniform3f(GetProc<PFNGLPROGRAMUNIFORM3FPROC>("glProgramUniform3f", Null_glProgramUniform3f)),
		ProgramUniform3fv(GetProc<PFNGLPROGRAMUNIFORM3FVPROC>("glProgramUniform3fv", Null_glProgramUniform3fv)),
		ProgramUniform3d(GetProc<PFNGLPROGRAMUNIFORM3DPROC>("glProgramUniform3d", Null_glProgramUniform3d)),
		ProgramUniform3dv(GetProc<PFNGLPROGRAMUNIFORM3DVPROC>("glProgramUniform3dv", Null_glProgramUniform3dv)),
		ProgramUniform3ui(GetProc<PFNGLPROGRAMUNIFORM3UIPROC>("glProgramUniform3ui", Null_glProgramUniform3ui)),
		ProgramUniform3uiv(GetProc<PFNGLPROGRAMUNIFORM3UIVPROC>("glProgramUniform3uiv", Null_glProgramUniform3uiv)),
		ProgramUniform4i(GetProc<PFNGLPROGRAMUNIFORM4IPROC>("glProgramUniform4i", Null_glProgramUniform4i)),
		ProgramUniform4iv(GetProc<PFNGLPROGRAMUNIFORM4IVPROC>("glProgramUniform4iv", Null_glProgramUniform4iv)),
		ProgramUniform4f(GetProc<PFNGLPROGRAMUNIFORM4FPROC>("glProgramUniform4f", Null_glProgramUniform4f)),
		ProgramUniform4fv(GetProc<PFNGLPROGRAMUNIFORM4FVPROC>("glProgramUniform4fv", Null_glProgramUniform4fv)),
		ProgramUniform4d(GetProc<PFNGLPROGRAMUNIFORM4DPROC>("glProgramUniform4d", Null_glProgramUniform4d)),
		ProgramUniform4dv(GetProc<PFNGLPROGRAMUNIFORM4DVPROC>("glProgramUniform4dv", Null_glProgramUniform4dv)),
		ProgramUniform4ui(GetProc<PFNGLPROGRAMUNIFORM4UIPROC>("glProgramUniform4ui", Null_glProgramUniform4ui)),
		ProgramUniform4uiv(GetProc<PFNGLPROGRAMUNIFORM4UIVPROC>("glProgramUniform4uiv", Null_glProgramUniform4uiv)),
		ProgramUniformMatrix2fv(GetProc<PFNGLPROGRAMUNIFORMMATRIX2FVPROC>("glProgramUniformMatrix2fv", Null_glProgramUniformMatrix2fv)),
		ProgramUniformMatrix3fv(GetProc<PFNGLPROGRAMUNIFORMMATRIX3FVPROC>("glProgramUniformMatrix3fv", Null_glProgramUniformMatrix3fv)),
		ProgramUniformMatrix4fv(GetProc<PFNGLPROGRAMUNIFORMMATRIX4FVPROC>("glProgramUniformMatrix4fv", Null_glProgramUniformMatrix4fv)),
		ProgramUniformMatrix2dv(GetProc<PFNGLPROGRAMUNIFORMMATRIX2DVPROC>("glProgramUniformMatrix2dv", Null_glProgramUniformMatrix2dv)),
		ProgramUniformMatrix3dv(GetProc<PFNGLPROGRAMUNIFORMMATRIX3DVPROC>("glProgramUniformMatrix3dv", Null_glProgramUniformMatrix3dv)),
		ProgramUniformMatrix4dv(GetProc<PFNGLPROGRAMUNIFORMMATRIX4DVPROC>("glProgramUniformMatrix4dv", Null_glProgramUniformMatrix4dv)),
		ProgramUniformMatrix2x3fv(GetProc<PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC>("glProgramUniformMatrix2x3fv", Null_glProgramUniformMatrix2x3fv)),
		ProgramUniformMatrix3x2fv(GetProc<PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC>("glProgramUniformMatrix3x2fv", Null_glProgramUniformMatrix3x2fv)),
		ProgramUniformMatrix2x4fv(GetProc<PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC>("glProgramUniformMatrix2x4fv", Null_glProgramUniformMatrix2x4fv)),
		ProgramUniformMatrix4x2fv(GetProc<PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC>("glProgramUniformMatrix4x2fv", Null_glProgramUniformMatrix4x2fv)),
		ProgramUniformMatrix3x4fv(GetProc<PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC>("glProgramUniformMatrix3x4fv", Null_glProgramUniformMatrix3x4fv)),
		ProgramUniformMatrix4x3fv(GetProc<PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC>("glProgramUniformMatrix4x3fv", Null_glProgramUniformMatrix4x3fv)),
		ProgramUniformMatrix2x3dv(GetProc<PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC>("glProgramUniformMatrix2x3dv", Null_glProgramUniformMatrix2x3dv)),
		ProgramUniformMatrix3x2dv(GetProc<PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC>("glProgramUniformMatrix3x2dv", Null_glProgramUniformMatrix3x2dv)),
		ProgramUniformMatrix2x4dv(GetProc<PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC>("glProgramUniformMatrix2x4dv", Null_glProgramUniformMatrix2x4dv)),
		ProgramUniformMatrix4x2dv(GetProc<PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC>("glProgramUniformMatrix4x2dv", Null_glProgramUniformMatrix4x2dv)),
		ProgramUniformMatrix3x4dv(GetProc<PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC>("glProgramUniformMatrix3x4dv", Null_glProgramUniformMatrix3x4dv)),
		ProgramUniformMatrix4x3dv(GetProc<PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC>("glProgramUniformMatrix4x3dv", Null_glProgramUniformMatrix4x3dv)),
		ValidateProgramPipeline(GetProc<PFNGLVALIDATEPROGRAMPIPELINEPROC>("glValidateProgramPipeline", Null_glValidateProgramPipeline)),
		GetProgramPipelineInfoLog(GetProc<PFNGLGETPROGRAMPIPELINEINFOLOGPROC>("glGetProgramPipelineInfoLog", Null_glGetProgramPipelineInfoLog)),
		VertexAttribL1d(GetProc<PFNGLVERTEXATTRIBL1DPROC>("glVertexAttribL1d", Null_glVertexAttribL1d)),
		VertexAttribL2d(GetProc<PFNGLVERTEXATTRIBL2DPROC>("glVertexAttribL2d", Null_glVertexAttribL2d)),
		VertexAttribL3d(GetProc<PFNGLVERTEXATTRIBL3DPROC>("glVertexAttribL3d", Null_glVertexAttribL3d)),
		VertexAttribL4d(GetProc<PFNGLVERTEXATTRIBL4DPROC>("glVertexAttribL4d", Null_glVertexAttribL4d)),
		VertexAttribL1dv(GetProc<PFNGLVERTEXATTRIBL1DVPROC>("glVertexAttribL1dv", Null_glVertexAttribL1dv)),
		VertexAttribL2dv(GetProc<PFNGLVERTEXATTRIBL2DVPROC>("glVertexAttribL2dv", Null_glVertexAttribL2dv)),
		VertexAttribL3dv(GetProc<PFNGLVERTEXATTRIBL3DVPROC>("glVertexAttribL3dv", Null_glVertexAttribL3dv)),
		VertexAttribL4dv(GetProc<PFNGLVERTEXATTRIBL4DVPROC>("glVertexAttribL4dv", Null_glVertexAttribL4dv)),
		VertexAttribLPointer(GetProc<PFNGLVERTEXATTRIBLPOINTERPROC>("glVertexAttribLPointer", Null_glVertexAttribLPointer)),
		GetVertexAttribLdv(GetProc<PFNGLGETVERTEXATTRIBLDVPROC>("glGetVertexAttribLdv", Null_glGetVertexAttribLdv)),
		ViewportArrayv(GetProc<PFNGLVIEWPORTARRAYVPROC>("glViewportArrayv", Null_glViewportArrayv)),
		ViewportIndexedf(GetProc<PFNGLVIEWPORTINDEXEDFPROC>("glViewportIndexedf", Null_glViewportIndexedf)),
		ViewportIndexedfv(GetProc<PFNGLVIEWPORTINDEXEDFVPROC>("glViewportIndexedfv", Null_glViewportIndexedfv)),
		ScissorArrayv(GetProc<PFNGLSCISSORARRAYVPROC>("glScissorArrayv", Null_glScissorArrayv)),
		ScissorIndexed(GetProc<PFNGLSCISSORINDEXEDPROC>("glScissorIndexed", Null_glScissorIndexed)),
		ScissorIndexedv(GetProc<PFNGLSCISSORINDEXEDVPROC>("glScissorIndexedv", Null_glScissorIndexedv)),
		DepthRangeArrayv(GetProc<PFNGLDEPTHRANGEARRAYVPROC>("glDepthRangeArrayv", Null_glDepthRangeArrayv)),
		DepthRangeIndexed(GetProc<PFNGLDEPTHRANGEINDEXEDPROC>("glDepthRangeIndexed", Null_glDepthRangeIndexed)),
		GetFloati_v(GetProc<PFNGLGETFLOATI_VPROC>("glGetFloati_v", Null_glGetFloati_v)),
		GetDoublei_v(GetProc<PFNGLGETDOUBLEI_VPROC>("glGetDoublei_v", Null_glGetDoublei_v))
	{
		Available = Ver_Major > 4 || (Ver_Major == 4 && (Ver_Minor > 1 || (Ver_Minor == 1 && Ver_Release >= 0)));
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
		DrawArraysInstancedBaseInstance(GetProc<PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC>("glDrawArraysInstancedBaseInstance", Null_glDrawArraysInstancedBaseInstance)),
		DrawElementsInstancedBaseInstance(GetProc<PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC>("glDrawElementsInstancedBaseInstance", Null_glDrawElementsInstancedBaseInstance)),
		DrawElementsInstancedBaseVertexBaseInstance(GetProc<PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC>("glDrawElementsInstancedBaseVertexBaseInstance", Null_glDrawElementsInstancedBaseVertexBaseInstance)),
		GetInternalformativ(GetProc<PFNGLGETINTERNALFORMATIVPROC>("glGetInternalformativ", Null_glGetInternalformativ)),
		GetActiveAtomicCounterBufferiv(GetProc<PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC>("glGetActiveAtomicCounterBufferiv", Null_glGetActiveAtomicCounterBufferiv)),
		BindImageTexture(GetProc<PFNGLBINDIMAGETEXTUREPROC>("glBindImageTexture", Null_glBindImageTexture)),
		MemoryBarrier(GetProc<PFNGLMEMORYBARRIERPROC>("glMemoryBarrier", Null_glMemoryBarrier)),
		TexStorage1D(GetProc<PFNGLTEXSTORAGE1DPROC>("glTexStorage1D", Null_glTexStorage1D)),
		TexStorage2D(GetProc<PFNGLTEXSTORAGE2DPROC>("glTexStorage2D", Null_glTexStorage2D)),
		TexStorage3D(GetProc<PFNGLTEXSTORAGE3DPROC>("glTexStorage3D", Null_glTexStorage3D)),
		DrawTransformFeedbackInstanced(GetProc<PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC>("glDrawTransformFeedbackInstanced", Null_glDrawTransformFeedbackInstanced)),
		DrawTransformFeedbackStreamInstanced(GetProc<PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC>("glDrawTransformFeedbackStreamInstanced", Null_glDrawTransformFeedbackStreamInstanced))
	{
		Available = Ver_Major > 4 || (Ver_Major == 4 && (Ver_Minor > 2 || (Ver_Minor == 2 && Ver_Release >= 0)));
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
	static GLuint APIENTRY Null_glGetProgramResourceIndex (GLuint program, GLenum programInterface, const GLchar* name){ NullFuncPtr(); return 0; }
	static void APIENTRY Null_glGetProgramResourceName (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei* length, GLchar* name){ NullFuncPtr(); }
	static void APIENTRY Null_glGetProgramResourceiv (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum* props, GLsizei count, GLsizei* length, GLint* params){ NullFuncPtr(); }
	static GLint APIENTRY Null_glGetProgramResourceLocation (GLuint program, GLenum programInterface, const GLchar* name){ NullFuncPtr(); return 0; }
	static GLint APIENTRY Null_glGetProgramResourceLocationIndex (GLuint program, GLenum programInterface, const GLchar* name){ NullFuncPtr(); return 0; }
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
	static GLuint APIENTRY Null_glGetDebugMessageLog (GLuint count, GLsizei bufSize, GLenum* sources, GLenum* types, GLuint* ids, GLenum* severities, GLsizei* lengths, GLchar* messageLog){ NullFuncPtr(); return 0; }
	static void APIENTRY Null_glPushDebugGroup (GLenum source, GLuint id, GLsizei length, const GLchar* message){ NullFuncPtr(); }
	static void APIENTRY Null_glPopDebugGroup (void){ NullFuncPtr(); }
	static void APIENTRY Null_glObjectLabel (GLenum identifier, GLuint name, GLsizei length, const GLchar* label){ NullFuncPtr(); }
	static void APIENTRY Null_glGetObjectLabel (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei* length, GLchar* label){ NullFuncPtr(); }
	static void APIENTRY Null_glObjectPtrLabel (const void* ptr, GLsizei length, const GLchar* label){ NullFuncPtr(); }
	static void APIENTRY Null_glGetObjectPtrLabel (const void* ptr, GLsizei bufSize, GLsizei* length, GLchar* label){ NullFuncPtr(); }
	Version43::Version43(Func_GetProcAddress GetProcAddress):
		Version42(GetProcAddress),
		ClearBufferData(GetProc<PFNGLCLEARBUFFERDATAPROC>("glClearBufferData", Null_glClearBufferData)),
		ClearBufferSubData(GetProc<PFNGLCLEARBUFFERSUBDATAPROC>("glClearBufferSubData", Null_glClearBufferSubData)),
		DispatchCompute(GetProc<PFNGLDISPATCHCOMPUTEPROC>("glDispatchCompute", Null_glDispatchCompute)),
		DispatchComputeIndirect(GetProc<PFNGLDISPATCHCOMPUTEINDIRECTPROC>("glDispatchComputeIndirect", Null_glDispatchComputeIndirect)),
		CopyImageSubData(GetProc<PFNGLCOPYIMAGESUBDATAPROC>("glCopyImageSubData", Null_glCopyImageSubData)),
		FramebufferParameteri(GetProc<PFNGLFRAMEBUFFERPARAMETERIPROC>("glFramebufferParameteri", Null_glFramebufferParameteri)),
		GetFramebufferParameteriv(GetProc<PFNGLGETFRAMEBUFFERPARAMETERIVPROC>("glGetFramebufferParameteriv", Null_glGetFramebufferParameteriv)),
		GetInternalformati64v(GetProc<PFNGLGETINTERNALFORMATI64VPROC>("glGetInternalformati64v", Null_glGetInternalformati64v)),
		InvalidateTexSubImage(GetProc<PFNGLINVALIDATETEXSUBIMAGEPROC>("glInvalidateTexSubImage", Null_glInvalidateTexSubImage)),
		InvalidateTexImage(GetProc<PFNGLINVALIDATETEXIMAGEPROC>("glInvalidateTexImage", Null_glInvalidateTexImage)),
		InvalidateBufferSubData(GetProc<PFNGLINVALIDATEBUFFERSUBDATAPROC>("glInvalidateBufferSubData", Null_glInvalidateBufferSubData)),
		InvalidateBufferData(GetProc<PFNGLINVALIDATEBUFFERDATAPROC>("glInvalidateBufferData", Null_glInvalidateBufferData)),
		InvalidateFramebuffer(GetProc<PFNGLINVALIDATEFRAMEBUFFERPROC>("glInvalidateFramebuffer", Null_glInvalidateFramebuffer)),
		InvalidateSubFramebuffer(GetProc<PFNGLINVALIDATESUBFRAMEBUFFERPROC>("glInvalidateSubFramebuffer", Null_glInvalidateSubFramebuffer)),
		MultiDrawArraysIndirect(GetProc<PFNGLMULTIDRAWARRAYSINDIRECTPROC>("glMultiDrawArraysIndirect", Null_glMultiDrawArraysIndirect)),
		MultiDrawElementsIndirect(GetProc<PFNGLMULTIDRAWELEMENTSINDIRECTPROC>("glMultiDrawElementsIndirect", Null_glMultiDrawElementsIndirect)),
		GetProgramInterfaceiv(GetProc<PFNGLGETPROGRAMINTERFACEIVPROC>("glGetProgramInterfaceiv", Null_glGetProgramInterfaceiv)),
		GetProgramResourceIndex(GetProc<PFNGLGETPROGRAMRESOURCEINDEXPROC>("glGetProgramResourceIndex", Null_glGetProgramResourceIndex)),
		GetProgramResourceName(GetProc<PFNGLGETPROGRAMRESOURCENAMEPROC>("glGetProgramResourceName", Null_glGetProgramResourceName)),
		GetProgramResourceiv(GetProc<PFNGLGETPROGRAMRESOURCEIVPROC>("glGetProgramResourceiv", Null_glGetProgramResourceiv)),
		GetProgramResourceLocation(GetProc<PFNGLGETPROGRAMRESOURCELOCATIONPROC>("glGetProgramResourceLocation", Null_glGetProgramResourceLocation)),
		GetProgramResourceLocationIndex(GetProc<PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC>("glGetProgramResourceLocationIndex", Null_glGetProgramResourceLocationIndex)),
		ShaderStorageBlockBinding(GetProc<PFNGLSHADERSTORAGEBLOCKBINDINGPROC>("glShaderStorageBlockBinding", Null_glShaderStorageBlockBinding)),
		TexBufferRange(GetProc<PFNGLTEXBUFFERRANGEPROC>("glTexBufferRange", Null_glTexBufferRange)),
		TexStorage2DMultisample(GetProc<PFNGLTEXSTORAGE2DMULTISAMPLEPROC>("glTexStorage2DMultisample", Null_glTexStorage2DMultisample)),
		TexStorage3DMultisample(GetProc<PFNGLTEXSTORAGE3DMULTISAMPLEPROC>("glTexStorage3DMultisample", Null_glTexStorage3DMultisample)),
		TextureView(GetProc<PFNGLTEXTUREVIEWPROC>("glTextureView", Null_glTextureView)),
		BindVertexBuffer(GetProc<PFNGLBINDVERTEXBUFFERPROC>("glBindVertexBuffer", Null_glBindVertexBuffer)),
		VertexAttribFormat(GetProc<PFNGLVERTEXATTRIBFORMATPROC>("glVertexAttribFormat", Null_glVertexAttribFormat)),
		VertexAttribIFormat(GetProc<PFNGLVERTEXATTRIBIFORMATPROC>("glVertexAttribIFormat", Null_glVertexAttribIFormat)),
		VertexAttribLFormat(GetProc<PFNGLVERTEXATTRIBLFORMATPROC>("glVertexAttribLFormat", Null_glVertexAttribLFormat)),
		VertexAttribBinding(GetProc<PFNGLVERTEXATTRIBBINDINGPROC>("glVertexAttribBinding", Null_glVertexAttribBinding)),
		VertexBindingDivisor(GetProc<PFNGLVERTEXBINDINGDIVISORPROC>("glVertexBindingDivisor", Null_glVertexBindingDivisor)),
		DebugMessageControl(GetProc<PFNGLDEBUGMESSAGECONTROLPROC>("glDebugMessageControl", Null_glDebugMessageControl)),
		DebugMessageInsert(GetProc<PFNGLDEBUGMESSAGEINSERTPROC>("glDebugMessageInsert", Null_glDebugMessageInsert)),
		DebugMessageCallback(GetProc<PFNGLDEBUGMESSAGECALLBACKPROC>("glDebugMessageCallback", Null_glDebugMessageCallback)),
		GetDebugMessageLog(GetProc<PFNGLGETDEBUGMESSAGELOGPROC>("glGetDebugMessageLog", Null_glGetDebugMessageLog)),
		PushDebugGroup(GetProc<PFNGLPUSHDEBUGGROUPPROC>("glPushDebugGroup", Null_glPushDebugGroup)),
		PopDebugGroup(GetProc<PFNGLPOPDEBUGGROUPPROC>("glPopDebugGroup", Null_glPopDebugGroup)),
		ObjectLabel(GetProc<PFNGLOBJECTLABELPROC>("glObjectLabel", Null_glObjectLabel)),
		GetObjectLabel(GetProc<PFNGLGETOBJECTLABELPROC>("glGetObjectLabel", Null_glGetObjectLabel)),
		ObjectPtrLabel(GetProc<PFNGLOBJECTPTRLABELPROC>("glObjectPtrLabel", Null_glObjectPtrLabel)),
		GetObjectPtrLabel(GetProc<PFNGLGETOBJECTPTRLABELPROC>("glGetObjectPtrLabel", Null_glGetObjectPtrLabel))
	{
		Available = Ver_Major > 4 || (Ver_Major == 4 && (Ver_Minor > 3 || (Ver_Minor == 3 && Ver_Release >= 0)));
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
		BufferStorage(GetProc<PFNGLBUFFERSTORAGEPROC>("glBufferStorage", Null_glBufferStorage)),
		ClearTexImage(GetProc<PFNGLCLEARTEXIMAGEPROC>("glClearTexImage", Null_glClearTexImage)),
		ClearTexSubImage(GetProc<PFNGLCLEARTEXSUBIMAGEPROC>("glClearTexSubImage", Null_glClearTexSubImage)),
		BindBuffersBase(GetProc<PFNGLBINDBUFFERSBASEPROC>("glBindBuffersBase", Null_glBindBuffersBase)),
		BindBuffersRange(GetProc<PFNGLBINDBUFFERSRANGEPROC>("glBindBuffersRange", Null_glBindBuffersRange)),
		BindTextures(GetProc<PFNGLBINDTEXTURESPROC>("glBindTextures", Null_glBindTextures)),
		BindSamplers(GetProc<PFNGLBINDSAMPLERSPROC>("glBindSamplers", Null_glBindSamplers)),
		BindImageTextures(GetProc<PFNGLBINDIMAGETEXTURESPROC>("glBindImageTextures", Null_glBindImageTextures)),
		BindVertexBuffers(GetProc<PFNGLBINDVERTEXBUFFERSPROC>("glBindVertexBuffers", Null_glBindVertexBuffers))
	{
		Available = Ver_Major > 4 || (Ver_Major == 4 && (Ver_Minor > 4 || (Ver_Minor == 4 && Ver_Release >= 0)));
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
	static void* APIENTRY Null_glMapNamedBuffer (GLuint buffer, GLenum access){ NullFuncPtr(); return 0; }
	static void* APIENTRY Null_glMapNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access){ NullFuncPtr(); return 0; }
	static GLboolean APIENTRY Null_glUnmapNamedBuffer (GLuint buffer){ NullFuncPtr(); return 0; }
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
	static GLenum APIENTRY Null_glCheckNamedFramebufferStatus (GLuint framebuffer, GLenum target){ NullFuncPtr(); return 0; }
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
	static GLenum APIENTRY Null_glGetGraphicsResetStatus (void){ NullFuncPtr(); return 0; }
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
		ClipControl(GetProc<PFNGLCLIPCONTROLPROC>("glClipControl", Null_glClipControl)),
		CreateTransformFeedbacks(GetProc<PFNGLCREATETRANSFORMFEEDBACKSPROC>("glCreateTransformFeedbacks", Null_glCreateTransformFeedbacks)),
		TransformFeedbackBufferBase(GetProc<PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC>("glTransformFeedbackBufferBase", Null_glTransformFeedbackBufferBase)),
		TransformFeedbackBufferRange(GetProc<PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC>("glTransformFeedbackBufferRange", Null_glTransformFeedbackBufferRange)),
		GetTransformFeedbackiv(GetProc<PFNGLGETTRANSFORMFEEDBACKIVPROC>("glGetTransformFeedbackiv", Null_glGetTransformFeedbackiv)),
		GetTransformFeedbacki_v(GetProc<PFNGLGETTRANSFORMFEEDBACKI_VPROC>("glGetTransformFeedbacki_v", Null_glGetTransformFeedbacki_v)),
		GetTransformFeedbacki64_v(GetProc<PFNGLGETTRANSFORMFEEDBACKI64_VPROC>("glGetTransformFeedbacki64_v", Null_glGetTransformFeedbacki64_v)),
		CreateBuffers(GetProc<PFNGLCREATEBUFFERSPROC>("glCreateBuffers", Null_glCreateBuffers)),
		NamedBufferStorage(GetProc<PFNGLNAMEDBUFFERSTORAGEPROC>("glNamedBufferStorage", Null_glNamedBufferStorage)),
		NamedBufferData(GetProc<PFNGLNAMEDBUFFERDATAPROC>("glNamedBufferData", Null_glNamedBufferData)),
		NamedBufferSubData(GetProc<PFNGLNAMEDBUFFERSUBDATAPROC>("glNamedBufferSubData", Null_glNamedBufferSubData)),
		CopyNamedBufferSubData(GetProc<PFNGLCOPYNAMEDBUFFERSUBDATAPROC>("glCopyNamedBufferSubData", Null_glCopyNamedBufferSubData)),
		ClearNamedBufferData(GetProc<PFNGLCLEARNAMEDBUFFERDATAPROC>("glClearNamedBufferData", Null_glClearNamedBufferData)),
		ClearNamedBufferSubData(GetProc<PFNGLCLEARNAMEDBUFFERSUBDATAPROC>("glClearNamedBufferSubData", Null_glClearNamedBufferSubData)),
		MapNamedBuffer(GetProc<PFNGLMAPNAMEDBUFFERPROC>("glMapNamedBuffer", Null_glMapNamedBuffer)),
		MapNamedBufferRange(GetProc<PFNGLMAPNAMEDBUFFERRANGEPROC>("glMapNamedBufferRange", Null_glMapNamedBufferRange)),
		UnmapNamedBuffer(GetProc<PFNGLUNMAPNAMEDBUFFERPROC>("glUnmapNamedBuffer", Null_glUnmapNamedBuffer)),
		FlushMappedNamedBufferRange(GetProc<PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC>("glFlushMappedNamedBufferRange", Null_glFlushMappedNamedBufferRange)),
		GetNamedBufferParameteriv(GetProc<PFNGLGETNAMEDBUFFERPARAMETERIVPROC>("glGetNamedBufferParameteriv", Null_glGetNamedBufferParameteriv)),
		GetNamedBufferParameteri64v(GetProc<PFNGLGETNAMEDBUFFERPARAMETERI64VPROC>("glGetNamedBufferParameteri64v", Null_glGetNamedBufferParameteri64v)),
		GetNamedBufferPointerv(GetProc<PFNGLGETNAMEDBUFFERPOINTERVPROC>("glGetNamedBufferPointerv", Null_glGetNamedBufferPointerv)),
		GetNamedBufferSubData(GetProc<PFNGLGETNAMEDBUFFERSUBDATAPROC>("glGetNamedBufferSubData", Null_glGetNamedBufferSubData)),
		CreateFramebuffers(GetProc<PFNGLCREATEFRAMEBUFFERSPROC>("glCreateFramebuffers", Null_glCreateFramebuffers)),
		NamedFramebufferRenderbuffer(GetProc<PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC>("glNamedFramebufferRenderbuffer", Null_glNamedFramebufferRenderbuffer)),
		NamedFramebufferParameteri(GetProc<PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC>("glNamedFramebufferParameteri", Null_glNamedFramebufferParameteri)),
		NamedFramebufferTexture(GetProc<PFNGLNAMEDFRAMEBUFFERTEXTUREPROC>("glNamedFramebufferTexture", Null_glNamedFramebufferTexture)),
		NamedFramebufferTextureLayer(GetProc<PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC>("glNamedFramebufferTextureLayer", Null_glNamedFramebufferTextureLayer)),
		NamedFramebufferDrawBuffer(GetProc<PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC>("glNamedFramebufferDrawBuffer", Null_glNamedFramebufferDrawBuffer)),
		NamedFramebufferDrawBuffers(GetProc<PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC>("glNamedFramebufferDrawBuffers", Null_glNamedFramebufferDrawBuffers)),
		NamedFramebufferReadBuffer(GetProc<PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC>("glNamedFramebufferReadBuffer", Null_glNamedFramebufferReadBuffer)),
		InvalidateNamedFramebufferData(GetProc<PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC>("glInvalidateNamedFramebufferData", Null_glInvalidateNamedFramebufferData)),
		InvalidateNamedFramebufferSubData(GetProc<PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC>("glInvalidateNamedFramebufferSubData", Null_glInvalidateNamedFramebufferSubData)),
		ClearNamedFramebufferiv(GetProc<PFNGLCLEARNAMEDFRAMEBUFFERIVPROC>("glClearNamedFramebufferiv", Null_glClearNamedFramebufferiv)),
		ClearNamedFramebufferuiv(GetProc<PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC>("glClearNamedFramebufferuiv", Null_glClearNamedFramebufferuiv)),
		ClearNamedFramebufferfv(GetProc<PFNGLCLEARNAMEDFRAMEBUFFERFVPROC>("glClearNamedFramebufferfv", Null_glClearNamedFramebufferfv)),
		ClearNamedFramebufferfi(GetProc<PFNGLCLEARNAMEDFRAMEBUFFERFIPROC>("glClearNamedFramebufferfi", Null_glClearNamedFramebufferfi)),
		BlitNamedFramebuffer(GetProc<PFNGLBLITNAMEDFRAMEBUFFERPROC>("glBlitNamedFramebuffer", Null_glBlitNamedFramebuffer)),
		CheckNamedFramebufferStatus(GetProc<PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC>("glCheckNamedFramebufferStatus", Null_glCheckNamedFramebufferStatus)),
		GetNamedFramebufferParameteriv(GetProc<PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC>("glGetNamedFramebufferParameteriv", Null_glGetNamedFramebufferParameteriv)),
		GetNamedFramebufferAttachmentParameteriv(GetProc<PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC>("glGetNamedFramebufferAttachmentParameteriv", Null_glGetNamedFramebufferAttachmentParameteriv)),
		CreateRenderbuffers(GetProc<PFNGLCREATERENDERBUFFERSPROC>("glCreateRenderbuffers", Null_glCreateRenderbuffers)),
		NamedRenderbufferStorage(GetProc<PFNGLNAMEDRENDERBUFFERSTORAGEPROC>("glNamedRenderbufferStorage", Null_glNamedRenderbufferStorage)),
		NamedRenderbufferStorageMultisample(GetProc<PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC>("glNamedRenderbufferStorageMultisample", Null_glNamedRenderbufferStorageMultisample)),
		GetNamedRenderbufferParameteriv(GetProc<PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC>("glGetNamedRenderbufferParameteriv", Null_glGetNamedRenderbufferParameteriv)),
		CreateTextures(GetProc<PFNGLCREATETEXTURESPROC>("glCreateTextures", Null_glCreateTextures)),
		TextureBuffer(GetProc<PFNGLTEXTUREBUFFERPROC>("glTextureBuffer", Null_glTextureBuffer)),
		TextureBufferRange(GetProc<PFNGLTEXTUREBUFFERRANGEPROC>("glTextureBufferRange", Null_glTextureBufferRange)),
		TextureStorage1D(GetProc<PFNGLTEXTURESTORAGE1DPROC>("glTextureStorage1D", Null_glTextureStorage1D)),
		TextureStorage2D(GetProc<PFNGLTEXTURESTORAGE2DPROC>("glTextureStorage2D", Null_glTextureStorage2D)),
		TextureStorage3D(GetProc<PFNGLTEXTURESTORAGE3DPROC>("glTextureStorage3D", Null_glTextureStorage3D)),
		TextureStorage2DMultisample(GetProc<PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC>("glTextureStorage2DMultisample", Null_glTextureStorage2DMultisample)),
		TextureStorage3DMultisample(GetProc<PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC>("glTextureStorage3DMultisample", Null_glTextureStorage3DMultisample)),
		TextureSubImage1D(GetProc<PFNGLTEXTURESUBIMAGE1DPROC>("glTextureSubImage1D", Null_glTextureSubImage1D)),
		TextureSubImage2D(GetProc<PFNGLTEXTURESUBIMAGE2DPROC>("glTextureSubImage2D", Null_glTextureSubImage2D)),
		TextureSubImage3D(GetProc<PFNGLTEXTURESUBIMAGE3DPROC>("glTextureSubImage3D", Null_glTextureSubImage3D)),
		CompressedTextureSubImage1D(GetProc<PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC>("glCompressedTextureSubImage1D", Null_glCompressedTextureSubImage1D)),
		CompressedTextureSubImage2D(GetProc<PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC>("glCompressedTextureSubImage2D", Null_glCompressedTextureSubImage2D)),
		CompressedTextureSubImage3D(GetProc<PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC>("glCompressedTextureSubImage3D", Null_glCompressedTextureSubImage3D)),
		CopyTextureSubImage1D(GetProc<PFNGLCOPYTEXTURESUBIMAGE1DPROC>("glCopyTextureSubImage1D", Null_glCopyTextureSubImage1D)),
		CopyTextureSubImage2D(GetProc<PFNGLCOPYTEXTURESUBIMAGE2DPROC>("glCopyTextureSubImage2D", Null_glCopyTextureSubImage2D)),
		CopyTextureSubImage3D(GetProc<PFNGLCOPYTEXTURESUBIMAGE3DPROC>("glCopyTextureSubImage3D", Null_glCopyTextureSubImage3D)),
		TextureParameterf(GetProc<PFNGLTEXTUREPARAMETERFPROC>("glTextureParameterf", Null_glTextureParameterf)),
		TextureParameterfv(GetProc<PFNGLTEXTUREPARAMETERFVPROC>("glTextureParameterfv", Null_glTextureParameterfv)),
		TextureParameteri(GetProc<PFNGLTEXTUREPARAMETERIPROC>("glTextureParameteri", Null_glTextureParameteri)),
		TextureParameterIiv(GetProc<PFNGLTEXTUREPARAMETERIIVPROC>("glTextureParameterIiv", Null_glTextureParameterIiv)),
		TextureParameterIuiv(GetProc<PFNGLTEXTUREPARAMETERIUIVPROC>("glTextureParameterIuiv", Null_glTextureParameterIuiv)),
		TextureParameteriv(GetProc<PFNGLTEXTUREPARAMETERIVPROC>("glTextureParameteriv", Null_glTextureParameteriv)),
		GenerateTextureMipmap(GetProc<PFNGLGENERATETEXTUREMIPMAPPROC>("glGenerateTextureMipmap", Null_glGenerateTextureMipmap)),
		BindTextureUnit(GetProc<PFNGLBINDTEXTUREUNITPROC>("glBindTextureUnit", Null_glBindTextureUnit)),
		GetTextureImage(GetProc<PFNGLGETTEXTUREIMAGEPROC>("glGetTextureImage", Null_glGetTextureImage)),
		GetCompressedTextureImage(GetProc<PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC>("glGetCompressedTextureImage", Null_glGetCompressedTextureImage)),
		GetTextureLevelParameterfv(GetProc<PFNGLGETTEXTURELEVELPARAMETERFVPROC>("glGetTextureLevelParameterfv", Null_glGetTextureLevelParameterfv)),
		GetTextureLevelParameteriv(GetProc<PFNGLGETTEXTURELEVELPARAMETERIVPROC>("glGetTextureLevelParameteriv", Null_glGetTextureLevelParameteriv)),
		GetTextureParameterfv(GetProc<PFNGLGETTEXTUREPARAMETERFVPROC>("glGetTextureParameterfv", Null_glGetTextureParameterfv)),
		GetTextureParameterIiv(GetProc<PFNGLGETTEXTUREPARAMETERIIVPROC>("glGetTextureParameterIiv", Null_glGetTextureParameterIiv)),
		GetTextureParameterIuiv(GetProc<PFNGLGETTEXTUREPARAMETERIUIVPROC>("glGetTextureParameterIuiv", Null_glGetTextureParameterIuiv)),
		GetTextureParameteriv(GetProc<PFNGLGETTEXTUREPARAMETERIVPROC>("glGetTextureParameteriv", Null_glGetTextureParameteriv)),
		CreateVertexArrays(GetProc<PFNGLCREATEVERTEXARRAYSPROC>("glCreateVertexArrays", Null_glCreateVertexArrays)),
		DisableVertexArrayAttrib(GetProc<PFNGLDISABLEVERTEXARRAYATTRIBPROC>("glDisableVertexArrayAttrib", Null_glDisableVertexArrayAttrib)),
		EnableVertexArrayAttrib(GetProc<PFNGLENABLEVERTEXARRAYATTRIBPROC>("glEnableVertexArrayAttrib", Null_glEnableVertexArrayAttrib)),
		VertexArrayElementBuffer(GetProc<PFNGLVERTEXARRAYELEMENTBUFFERPROC>("glVertexArrayElementBuffer", Null_glVertexArrayElementBuffer)),
		VertexArrayVertexBuffer(GetProc<PFNGLVERTEXARRAYVERTEXBUFFERPROC>("glVertexArrayVertexBuffer", Null_glVertexArrayVertexBuffer)),
		VertexArrayVertexBuffers(GetProc<PFNGLVERTEXARRAYVERTEXBUFFERSPROC>("glVertexArrayVertexBuffers", Null_glVertexArrayVertexBuffers)),
		VertexArrayAttribBinding(GetProc<PFNGLVERTEXARRAYATTRIBBINDINGPROC>("glVertexArrayAttribBinding", Null_glVertexArrayAttribBinding)),
		VertexArrayAttribFormat(GetProc<PFNGLVERTEXARRAYATTRIBFORMATPROC>("glVertexArrayAttribFormat", Null_glVertexArrayAttribFormat)),
		VertexArrayAttribIFormat(GetProc<PFNGLVERTEXARRAYATTRIBIFORMATPROC>("glVertexArrayAttribIFormat", Null_glVertexArrayAttribIFormat)),
		VertexArrayAttribLFormat(GetProc<PFNGLVERTEXARRAYATTRIBLFORMATPROC>("glVertexArrayAttribLFormat", Null_glVertexArrayAttribLFormat)),
		VertexArrayBindingDivisor(GetProc<PFNGLVERTEXARRAYBINDINGDIVISORPROC>("glVertexArrayBindingDivisor", Null_glVertexArrayBindingDivisor)),
		GetVertexArrayiv(GetProc<PFNGLGETVERTEXARRAYIVPROC>("glGetVertexArrayiv", Null_glGetVertexArrayiv)),
		GetVertexArrayIndexediv(GetProc<PFNGLGETVERTEXARRAYINDEXEDIVPROC>("glGetVertexArrayIndexediv", Null_glGetVertexArrayIndexediv)),
		GetVertexArrayIndexed64iv(GetProc<PFNGLGETVERTEXARRAYINDEXED64IVPROC>("glGetVertexArrayIndexed64iv", Null_glGetVertexArrayIndexed64iv)),
		CreateSamplers(GetProc<PFNGLCREATESAMPLERSPROC>("glCreateSamplers", Null_glCreateSamplers)),
		CreateProgramPipelines(GetProc<PFNGLCREATEPROGRAMPIPELINESPROC>("glCreateProgramPipelines", Null_glCreateProgramPipelines)),
		CreateQueries(GetProc<PFNGLCREATEQUERIESPROC>("glCreateQueries", Null_glCreateQueries)),
		GetQueryBufferObjecti64v(GetProc<PFNGLGETQUERYBUFFEROBJECTI64VPROC>("glGetQueryBufferObjecti64v", Null_glGetQueryBufferObjecti64v)),
		GetQueryBufferObjectiv(GetProc<PFNGLGETQUERYBUFFEROBJECTIVPROC>("glGetQueryBufferObjectiv", Null_glGetQueryBufferObjectiv)),
		GetQueryBufferObjectui64v(GetProc<PFNGLGETQUERYBUFFEROBJECTUI64VPROC>("glGetQueryBufferObjectui64v", Null_glGetQueryBufferObjectui64v)),
		GetQueryBufferObjectuiv(GetProc<PFNGLGETQUERYBUFFEROBJECTUIVPROC>("glGetQueryBufferObjectuiv", Null_glGetQueryBufferObjectuiv)),
		MemoryBarrierByRegion(GetProc<PFNGLMEMORYBARRIERBYREGIONPROC>("glMemoryBarrierByRegion", Null_glMemoryBarrierByRegion)),
		GetTextureSubImage(GetProc<PFNGLGETTEXTURESUBIMAGEPROC>("glGetTextureSubImage", Null_glGetTextureSubImage)),
		GetCompressedTextureSubImage(GetProc<PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC>("glGetCompressedTextureSubImage", Null_glGetCompressedTextureSubImage)),
		GetGraphicsResetStatus(GetProc<PFNGLGETGRAPHICSRESETSTATUSPROC>("glGetGraphicsResetStatus", Null_glGetGraphicsResetStatus)),
		GetnCompressedTexImage(GetProc<PFNGLGETNCOMPRESSEDTEXIMAGEPROC>("glGetnCompressedTexImage", Null_glGetnCompressedTexImage)),
		GetnTexImage(GetProc<PFNGLGETNTEXIMAGEPROC>("glGetnTexImage", Null_glGetnTexImage)),
		GetnUniformdv(GetProc<PFNGLGETNUNIFORMDVPROC>("glGetnUniformdv", Null_glGetnUniformdv)),
		GetnUniformfv(GetProc<PFNGLGETNUNIFORMFVPROC>("glGetnUniformfv", Null_glGetnUniformfv)),
		GetnUniformiv(GetProc<PFNGLGETNUNIFORMIVPROC>("glGetnUniformiv", Null_glGetnUniformiv)),
		GetnUniformuiv(GetProc<PFNGLGETNUNIFORMUIVPROC>("glGetnUniformuiv", Null_glGetnUniformuiv)),
		ReadnPixels(GetProc<PFNGLREADNPIXELSPROC>("glReadnPixels", Null_glReadnPixels)),
		GetnMapdv(GetProc<PFNGLGETNMAPDVPROC>("glGetnMapdv", Null_glGetnMapdv)),
		GetnMapfv(GetProc<PFNGLGETNMAPFVPROC>("glGetnMapfv", Null_glGetnMapfv)),
		GetnMapiv(GetProc<PFNGLGETNMAPIVPROC>("glGetnMapiv", Null_glGetnMapiv)),
		GetnPixelMapfv(GetProc<PFNGLGETNPIXELMAPFVPROC>("glGetnPixelMapfv", Null_glGetnPixelMapfv)),
		GetnPixelMapuiv(GetProc<PFNGLGETNPIXELMAPUIVPROC>("glGetnPixelMapuiv", Null_glGetnPixelMapuiv)),
		GetnPixelMapusv(GetProc<PFNGLGETNPIXELMAPUSVPROC>("glGetnPixelMapusv", Null_glGetnPixelMapusv)),
		GetnPolygonStipple(GetProc<PFNGLGETNPOLYGONSTIPPLEPROC>("glGetnPolygonStipple", Null_glGetnPolygonStipple)),
		GetnColorTable(GetProc<PFNGLGETNCOLORTABLEPROC>("glGetnColorTable", Null_glGetnColorTable)),
		GetnConvolutionFilter(GetProc<PFNGLGETNCONVOLUTIONFILTERPROC>("glGetnConvolutionFilter", Null_glGetnConvolutionFilter)),
		GetnSeparableFilter(GetProc<PFNGLGETNSEPARABLEFILTERPROC>("glGetnSeparableFilter", Null_glGetnSeparableFilter)),
		GetnHistogram(GetProc<PFNGLGETNHISTOGRAMPROC>("glGetnHistogram", Null_glGetnHistogram)),
		GetnMinmax(GetProc<PFNGLGETNMINMAXPROC>("glGetnMinmax", Null_glGetnMinmax)),
		TextureBarrier(GetProc<PFNGLTEXTUREBARRIERPROC>("glTextureBarrier", Null_glTextureBarrier))
	{
		Available = Ver_Major > 4 || (Ver_Major == 4 && (Ver_Minor > 5 || (Ver_Minor == 5 && Ver_Release >= 0)));
	}


	static void APIENTRY Null_glSpecializeShader (GLuint shader, const GLchar* pEntryPoint, GLuint numSpecializationConstants, const GLuint* pConstantIndex, const GLuint* pConstantValue){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiDrawArraysIndirectCount (GLenum mode, const void* indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride){ NullFuncPtr(); }
	static void APIENTRY Null_glMultiDrawElementsIndirectCount (GLenum mode, GLenum type, const void* indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride){ NullFuncPtr(); }
	static void APIENTRY Null_glPolygonOffsetClamp (GLfloat factor, GLfloat units, GLfloat clamp){ NullFuncPtr(); }
	Version46::Version46(Func_GetProcAddress GetProcAddress):
		Version45(GetProcAddress),
		SpecializeShader(GetProc<PFNGLSPECIALIZESHADERPROC>("glSpecializeShader", Null_glSpecializeShader)),
		MultiDrawArraysIndirectCount(GetProc<PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC>("glMultiDrawArraysIndirectCount", Null_glMultiDrawArraysIndirectCount)),
		MultiDrawElementsIndirectCount(GetProc<PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC>("glMultiDrawElementsIndirectCount", Null_glMultiDrawElementsIndirectCount)),
		PolygonOffsetClamp(GetProc<PFNGLPOLYGONOFFSETCLAMPPROC>("glPolygonOffsetClamp", Null_glPolygonOffsetClamp))
	{
		Available = Ver_Major > 4 || (Ver_Major == 4 && (Ver_Minor > 6 || (Ver_Minor == 6 && Ver_Release >= 0)));
	}


};
