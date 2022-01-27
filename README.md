* ### 没用到的uniform会被删掉
curTexture0没有用到，会在编译时被优化掉
```
#version 460 core

out vec4 FragColor;

in vec4 curColor;

in vec2 curTexcord;

uniform sampler2D curTexture0;
uniform sampler2D curTexture1;

void main()
{
    FragColor = texture(curTexture1, curTexcord);
}
```
