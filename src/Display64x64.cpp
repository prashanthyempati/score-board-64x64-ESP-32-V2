#include "Display64x64.h"

Display64x64::Display64x64()
{
    for (uint8_t i = 0; i < ROWS; i++)
    {
        rows[i] = new MD_MAX72XX(
            HARDWARE_TYPE,
            PIN_DATA,
            PIN_CLK,
            CS_PINS[i],
            MODULES_PER_ROW);
    }
}

void Display64x64::begin()
{
    for (uint8_t i = 0; i < ROWS; i++)
    {
        rows[i]->begin();
        rows[i]->control(MD_MAX72XX::INTENSITY, 2);
        rows[i]->clear();
    }
}

void Display64x64::clear()
{
    for (uint8_t i = 0; i < ROWS; i++)
    {
        rows[i]->clear();
    }
}

void Display64x64::render(const FrameBuffer &fb)
{
    for (uint8_t row = 0; row < ROWS; row++)
    {
        renderRow(row, fb);

        rows[row]->update();
    }
}

void Display64x64::renderRow(
    uint8_t rowChain,
    const FrameBuffer &fb)
{
    for (uint8_t module = 0; module < MODULES_PER_ROW; module++)
    {
        for (uint8_t row = 0; row < 8; row++)
        {
            uint8_t value = 0;

            for (uint8_t col = 0; col < 8; col++)
            {
                uint8_t x = module * 8 + col;
                uint8_t y = rowChain * 8 + row;

                if (fb.getPixel(x, y))
                {
                    value |= (1 << col);
                }
            }

            rows[rowChain]->setRow(module, row, value);
        }
    }
}