#version 460 core

out vec4 FragColor;

in vec4 curColor;

uniform vec4 ourColor;

void main()
{
    FragColor = ourColor;
}