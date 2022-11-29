#include "scripts/OpenGLInteraface/OpenGL2DRect/COpenGL2DRect.h"
#include <iostream>


int main(int argc, char *argv[]) {
    auto opengl = std::make_shared<COpenGL2DRect>("Test");
    opengl->SetVertextShader("./scripts/shader/vertex2DRectShader.glsl");
    opengl->SetFragmentShader("./scripts/shader/fragment2DRectShader.glsl");
    opengl->SetTexturePath("./scripts/data/resources/textures/container.jpg");
    if (opengl->Init()) {
        while (opengl->Update()) {

        }
    }
    return 0;
}