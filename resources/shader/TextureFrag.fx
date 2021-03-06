#version 460 core

out vec4 FragColor;

in vec4 curColor;

in vec2 curTexcord;

uniform sampler2D curTexture0;
uniform sampler2D curTexture1;

void main()
{
    FragColor = mix(texture(curTexture0, curTexcord), texture(curTexture1, vec2(1.0f - curTexcord.x, curTexcord.y)), 0.2f);
}