#include "Display64x64.h"

Display64x64::Display64x64()
    : matrix(HARDWARE_TYPE,
             PIN_DATA,
             PIN_CLK,
             PIN_CS,
             MODULES_PER_ROW)
{
}

void Display64x64::begin()
{
    matrix.begin();
    matrix.control(MD_MAX72XX::INTENSITY, 2);
    matrix.clear();
}

void Display64x64::clear()
{
    matrix.clear();
}

void Display64x64::render(const FrameBuffer &fb)
{
    renderRow(0, fb);
    matrix.update();
}

void Display64x64::renderRow(uint8_t rowChain,
                             const FrameBuffer &fb)
{
    (void)rowChain;

    for (uint8_t module = 0; module < MODULES_PER_ROW; module++)
    {
        for (uint8_t row = 0; row < 8; row++)
        {
            uint8_t value = 0;

            for (uint8_t col = 0; col < 8; col++)
            {
                uint8_t x = module * 8 + col;
                uint8_t y = row;

                if (fb.getPixel(x, y))
                    value |= (1 << col);
            }

            matrix.setRow(module, row, value);
        }
    }
}