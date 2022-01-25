#version 460 core

out vec4 FragColor;

in vec4 curColor;

void main()
{
    FragColor = curColor;
}