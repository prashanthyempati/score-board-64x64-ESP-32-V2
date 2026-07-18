#include "Graphics.h"

Graphics::Graphics(FrameBuffer &fb)
    : frameBuffer(fb)
{
}

void Graphics::clear()
{
    frameBuffer.clear();
}

void Graphics::drawPixel(int x, int y)
{
    drawPixel(x, y, true);
}

void Graphics::drawPixel(int x, int y, bool state)
{
    frameBuffer.setPixel(x, y, state);
}

void Graphics::drawHLine(int x, int y, int length)
{
    for (int i = 0; i < length; i++)
    {
        drawPixel(x + i, y);
    }
}

void Graphics::drawVLine(int x, int y, int length)
{
    for (int i = 0; i < length; i++)
    {
        drawPixel(x, y + i);
    }
}

void Graphics::drawRect(int x, int y, int width, int height)
{
    drawHLine(x, y, width);
    drawHLine(x, y + height - 1, width);

    drawVLine(x, y, height);
    drawVLine(x + width - 1, y, height);
}

void Graphics::fillRect(int x, int y, int width, int height)
{
    for (int row = 0; row < height; row++)
    {
        drawHLine(x, y + row, width);
    }
}