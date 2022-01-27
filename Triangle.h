#ifndef LEARNOPENGL_TRIANGLE_H
#define LEARNOPENGL_TRIANGLE_H

#include "Application.h"

class Triangle : public Application
{
public:
    //Triangle();
    void Iniatialize() override;
    void OnDraw() override;

private:
    unsigned int VAO;
    const char *vertexShaderSource = "#version 460 core\n"
                                     "\n"
                                     "layout (location = 0) in vec3 aPos;\n"
                                     "\n"
                                     "layout (location = 1) in vec3 aColor;\n"
                                     "\n"
                                     "out vec4 curColor;\n"
                                     "\n"
                                     "void main()\n"
                                     "{\n"
                                     "    gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
                                     "    curColor = vec4(aColor, 1.0);\n"
                                     "}";
    const char *fragShaderSource = "#version 460 core\n"
                                   "\n"
                                   "out vec4 FragColor;\n"
                                   "\n"
                                   "in vec4 curColor;\n"
                                   "\n"
                                   "void main()\n"
                                   "{\n"
                                   "    FragColor = curColor;\n"
                                   "}";
    float vertices [18] = {-0.5f, -0.5f, 0, 1.0f, 0.0f, 0.0f,
                          0.5f, -0.5f, 0, 0, 1.0f, 0,
                          0, 0.5f, 0, 0, 0, 1.0f};
};


#endif //LEARNOPENGL_TRIANGLE_H
