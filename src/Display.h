#ifndef DISPLAY_H
#define DISPLAY_H

#include <MD_MAX72xx.h>
#include <SPI.h>
#include "Config.h"

class Display
{
public:
    void begin();
    void clear();
    void printCenter(const char *text);

    void drawPixel(uint8_t x, uint8_t y, bool state);
    void drawChar(uint8_t x, uint8_t y, char c);
    void drawText(uint8_t x, uint8_t y, const char *text);

private:
    MD_MAX72XX matrix =
        MD_MAX72XX(HARDWARE_TYPE, PIN_DATA, PIN_CLK, PIN_CS, MAX_DEVICES);
};

#endif
