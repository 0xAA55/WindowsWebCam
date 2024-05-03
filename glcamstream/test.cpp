
#include "glfwwrap.hpp"

int main(void)
{
    struct MyWebCamDemoWindowType : public GLFWWrap::GLFWwindowType
    {
        virtual bool OnMainLoop(uint32_t Width, uint32_t Height, double Time) override
        {
            float ratio;
            auto& gl = GetMakeCurrent();
            ratio = Width / (float)Height;
            gl.Viewport(0, 0, Width, Height);
            gl.Clear(gl.COLOR_BUFFER_BIT);

            SwapBuffers();
            return true;
        }
    };

    auto MyDemo = MyWebCamDemoWindowType();
    MyDemo.EnterMainLoop();
}
