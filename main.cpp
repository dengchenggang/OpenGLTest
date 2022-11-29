#include "scripts/OpenGLInteraface/OpenGL2DRect/COpenGL2DRect.h"
#include <iostream>


int main(int argc, char *argv[]) {
    auto opengl = std::make_shared<COpenGL2DRect>("Test");
    opengl->SetVertextShader("./scripts/resources/shader/vertex2DRectShader.glsl");
    opengl->SetFragmentShader("./scripts/resources/shader/fragment2DRectShader.glsl");
    opengl->SetTexturePath("./scripts/resources/textures/container.jpg");
    if (opengl->Init()) {
        while (opengl->Update()) {

        }
    }
    return 0;
}