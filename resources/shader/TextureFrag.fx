#version 460 core

out vec4 FragColor;

in vec4 curColor;

in vec2 curTexcord;

uniform sampler2D curTexture;

void main()
{
    FragColor = texture(curTexture, curTexcord);
}