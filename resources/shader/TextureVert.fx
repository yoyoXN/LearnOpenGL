#version 460 core

layout (location = 0) in vec3 aPos;

layout (location = 1) in vec3 aColor;

layout (location = 2) in vec2 aTexcord;

out vec4 curColor;

out vec2 curTexcord;

void main()
{
    gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);
    curColor = vec4(aColor, 1.0);
    curTexcord = aTexcord;
}