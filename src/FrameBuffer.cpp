#include "FrameBuffer.h"

FrameBuffer::FrameBuffer()
{
    clear();
}

void FrameBuffer::clear()
{
    for (uint8_t y = 0; y < HEIGHT; y++)
    {
        for (uint8_t x = 0; x < WIDTH; x++)
        {
            pixels[y][x] = false;
        }
    }
}

void FrameBuffer::setPixel(uint8_t x, uint8_t y, bool state)
{
    if (x >= WIDTH || y >= HEIGHT)
        return;

    pixels[y][x] = state;
}

bool FrameBuffer::getPixel(uint8_t x, uint8_t y) const
{
    if (x >= WIDTH || y >= HEIGHT)
        return false;

    return pixels[y][x];
}