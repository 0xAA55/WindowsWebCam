
#include "glfwwrap.hpp"
#include "glmesh.hpp"
#include "gltexstream.hpp"

#include <webcam/webcam.hpp>

#include<memory>

using namespace GLFWWrap;
using namespace GL;
using namespace GLRenderer;
using namespace WindowsWebCamTypeLib;

int main(void)
{

	struct MyWebCamDemoWindowType : public GLFWWrap::GLFWwindowType
	{
		using QuadVertexType = Vertex<float, 2, 2, 0>;
		using QuadMeshType = Mesh<QuadVertexType, GLubyte, int>;

		bool Initialized = false;
		std::shared_ptr<QuadMeshType> QuadMesh = nullptr;
		std::shared_ptr<Program> DrawQuadProgram = nullptr;
		std::shared_ptr<TexStream> TexStreamer = nullptr;
		std::shared_ptr<WebCamType> WebCam = nullptr;

		static void OnWebcamFrameCB(void* Userdata, WebCamType& wc, bool FrameUpdated)
		{
			auto PtrThis = reinterpret_cast<MyWebCamDemoWindowType*>(Userdata);
			if (!FrameUpdated) wc.QueryFrame();
		}

		void Initialize(const GLCtxType& gl)
		{
			auto Vertices = std::vector<QuadVertexType>
			{
				{ vec2(-1, -1), vec2(0, 1) },
				{ vec2(1, -1),  vec2(1, 1) },
				{ vec2(-1, 1),  vec2(0, 0) },
				{ vec2(1, 1),   vec2(1, 0) },
			};
			auto Indices = std::vector<GLubyte>{ 0,1,2,1,3,2 };
			QuadMesh = std::make_shared<QuadMeshType>(gl, Vertices, Indices);
			DrawQuadProgram = std::make_shared<Program>(gl,
"#version 130\n"
"in vec2 iPosition;"
"in vec2 iTexCoord;"
"out vec2 vTexCoord;"
"void main()"
"{"
"    vTexCoord = iTexCoord;"
"    gl_Position = vec4(iPosition, 0, 1);"
"}"
,
"",
"#version 130\n"
"in vec2 vTexCoord;"
"uniform sampler2D iTexture;"
"out vec4 FragColor;"
"void main()"
"{"
"    FragColor = texture2D(iTexture, vTexCoord);"
"}"
			);

			WebCam = std::make_shared<WebCamType>(OnWebcamFrameCB, this, false);
			WebCam->QueryFrame();
			TexStreamer = std::make_shared<TexStream>(gl, WebCam->GetFrameBuffer());

			Initialized = true;
		}

		virtual bool OnMainLoop(uint32_t Width, uint32_t Height, double Time) override
		{
			float ratio;
			auto& gl = GetMakeCurrent();
			ratio = Width / (float)Height;
			gl.Viewport(0, 0, Width, Height);
			gl.Clear(gl.COLOR_BUFFER_BIT);

			if (!Initialized) Initialize(gl);

			DrawQuadProgram->Use();
			TexStreamer->BindUniform(*DrawQuadProgram, "iTexture", 0);
			QuadMesh->Draw(*DrawQuadProgram, 0);

			if (WebCam->IsFrameUpdated())
			{
				WebCam->SetIsFrameUpdated(false);
				TexStreamer->Update();
				WebCam->QueryFrame();
			}

			SwapBuffers();
			return true;
		}
	};

	auto MyDemo = MyWebCamDemoWindowType();
	MyDemo.EnterMainLoop();
	MyDemo.WebCam.reset();

	return 0;
}
