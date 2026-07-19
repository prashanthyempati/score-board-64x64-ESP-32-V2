#include "Graphics.h"
#include "fonts/Font5x7.h"

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

void Graphics::drawChar(int x, int y, char c)
{
    Glyph glyph = getGlyph(c);

    if (glyph.bitmap == nullptr)
        return;

    for (uint8_t col = 0; col < glyph.width; col++)
    {
        uint8_t bits = glyph.bitmap[col];

        for (uint8_t row = 0; row < glyph.height; row++)
        {
            bool pixel = (bits & (1 << row)) != 0;

            drawPixel(x + col, y + row, pixel);
        }
    }
}

void Graphics::drawText(int x, int y, const char *text)
{
    while (*text)
    {
        drawChar(x, y, *text);

        x += 6;   // 5 pixels + 1 pixel spacing

        text++;
    }
}