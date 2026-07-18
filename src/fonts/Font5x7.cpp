#include "Font5x7.h"

// Font table will go here

Glyph getGlyph(char c)
{
    Glyph g;

    g.width = 5;
    g.height = 7;
    g.bitmap = nullptr;

    return g;
}