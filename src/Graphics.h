#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "FrameBuffer.h"

class Graphics
{
public:
    Graphics(FrameBuffer &fb);

    void clear();

    void drawPixel(int x, int y);
    void drawPixel(int x, int y, bool state);

    void drawHLine(int x, int y, int length);
    void drawVLine(int x, int y, int length);

    void drawRect(int x, int y, int width, int height);
    void fillRect(int x, int y, int width, int height);

private:
    FrameBuffer &frameBuffer;
};

#endif