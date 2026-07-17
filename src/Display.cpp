#include "Display.h"

void Display::begin()
{
    matrix.begin();
    matrix.control(MD_MAX72XX::INTENSITY, 2);
    matrix.clear();
}

void Display::clear()
{
    matrix.clear();
}

void Display::drawPixel(uint8_t x, uint8_t y, bool state)
{
    matrix.setPoint(y, x, state);
}

void Display::printCenter(const char *text)
{
    matrix.clear();

    int x = 0;

    while (*text)
    {
        matrix.setChar(x, *text++);
        x += 6;
    }

    matrix.update();
}