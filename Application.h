#ifndef LEARNOPENGL_APPLICATION_H
#define LEARNOPENGL_APPLICATION_H

#include "stb_image.h"

#include <iostream>
#include "glad/glad.h"
#include "GLFW/glfw3.h"

#include "Shader.h"

class Application
{
public:
    Shader* shader;
    virtual void Iniatialize();
    virtual void OnDraw();
    bool CreateShader(GLenum shaderType, const GLchar* const* shaderSource, unsigned int* shader);
};


#endif //LEARNOPENGL_APPLICATION_H
