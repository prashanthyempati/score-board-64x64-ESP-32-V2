#include <Arduino.h>

#include "Display64x64.h"
#include "FrameBuffer.h"
#include "Graphics.h"

Display64x64 display;
FrameBuffer fb;
Graphics graphics(fb);

void setup()
{
    graphics.clear();

    graphics.drawPixel(0, 0);

    display.render(fb);
}

void loop()
{
}