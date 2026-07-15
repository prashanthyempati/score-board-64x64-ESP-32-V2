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
