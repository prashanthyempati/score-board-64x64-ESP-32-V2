#ifndef FONT_H
#define FONT_H

#include <Arduino.h>

struct Glyph
{
    uint8_t width;
    uint8_t height;
    const uint8_t *bitmap;
};

class Font
{
public:
    virtual Glyph getGlyph(char c) const = 0;
};

#endif