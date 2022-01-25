
#ifndef LEARNOPENGL_TEXTURE_H
#define LEARNOPENGL_TEXTURE_H

#include "Application.h"

class Texture : public Application
{
private:
    unsigned int VAO;
public:
    void Iniatialize() override;
    void OnDraw() override;
};


#endif //LEARNOPENGL_TEXTURE_H
