#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <Arduino.h>

class Display;

class Graphics
{
public:
    Graphics(Display &display);

    void drawChar(uint8_t x, uint8_t y, char c);
    void drawText(uint8_t x, uint8_t y, const char *text);

private:
    Display &display;
};

#endif