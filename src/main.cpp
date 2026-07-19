#include <Arduino.h>

#include "Display64x64.h"
#include "FrameBuffer.h"
#include "Graphics.h"

FrameBuffer frameBuffer;
Graphics graphics(frameBuffer);
Display64x64 display;

void setup()
{
    display.begin();

    graphics.clear();

    // Draw a dot in the center of every 8x8 module
    for (int y = 0; y < 64; y += 8)
    {
        for (int x = 0; x < 64; x += 8)
        {
            graphics.drawPixel(x + 3, y + 3);
        }
    }

    // Draw vertical grid lines
    for (int x = 0; x < 64; x += 8)
    {
        graphics.drawVLine(x, 0, 64);
    }

    // Draw horizontal grid lines
    for (int y = 0; y < 64; y += 8)
    {
        graphics.drawHLine(0, y, 64);
    }

    display.render(frameBuffer);
}

void loop()
{
}