#ifndef FRAMEBUFFER_H
#define FRAMEBUFFER_H

#include <Arduino.h>

class FrameBuffer
{
public:
    static const uint8_t WIDTH = 64;
    static const uint8_t HEIGHT = 64;

    FrameBuffer();

    void clear();

    void setPixel(uint8_t x, uint8_t y, bool state);

    bool getPixel(uint8_t x, uint8_t y) const;

private:
    bool pixels[HEIGHT][WIDTH];
};

#endif