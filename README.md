* ### 没用到的uniform会被删掉
curTexture0没有用到，会被优化掉，并且由于优化时机不确定，在initialize给curTexture1赋到单元1也会被清掉，优化后curTexture1被自动赋到单元0
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
