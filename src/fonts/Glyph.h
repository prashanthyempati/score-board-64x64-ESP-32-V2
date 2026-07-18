#ifndef GLYPH_H
#define GLYPH_H

#include <Arduino.h>

struct Glyph
{
    uint8_t width;
    uint8_t height;
    const uint8_t *bitmap;
};

#endif