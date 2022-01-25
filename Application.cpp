#define STB_IMAGE_IMPLEMENTATION

#include "Application.h"

void Application::Iniatialize()
{

}

void Application::OnDraw()
{

}

bool Application::CreateShader(GLenum shaderType, const GLchar* const* shaderSource, unsigned int* shader)
{
    *shader = glCreateShader(shaderType);
    glShaderSource(*shader, 1, shaderSource, nullptr);
    glCompileShader(*shader);
    int succes;
    glGetShaderiv(*shader, GL_COMPILE_STATUS, &succes);
    if (!succes)
    {
        char infoLog[512];
        glGetShaderInfoLog(*shader, 512, nullptr, infoLog);
        std::cout << "Error Compile shader " << shaderType << "\n" << infoLog << std::endl;
    }
    return succes;
}
