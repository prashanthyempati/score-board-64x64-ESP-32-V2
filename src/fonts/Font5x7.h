#ifndef FONT5X7_H
#define FONT5X7_H

#include <Arduino.h>

struct Glyph
{
    uint8_t width;
    uint8_t height;
    const uint8_t *bitmap;
};

Glyph getGlyph(char c);

#endif