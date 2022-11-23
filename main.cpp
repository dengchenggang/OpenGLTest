#include "scripts/OpenGLInteraface/COpenGLContext.h"
#include <iostream>


int main(int argc, char *argv[]) {
    auto opengl = std::make_shared<COpenGLRectangle>("Test");
    opengl->SetVertextShader("./scripts/shader/testVertexShader.glsl");
    opengl->SetFragmentShader("./scripts/shader/testFragmentShader.glsl");
    opengl->SetTexture1("./scripts/data/resources/textures/container.jpg");
    opengl->SetTexture2("./scripts/data/resources/textures/awesomeface.png");
    if (opengl->Init()) {
        opengl->Update();
    }
    return 0;
}