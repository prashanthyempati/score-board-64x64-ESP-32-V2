#ifndef DISPLAY64X64_H
#define DISPLAY64X64_H

#include <MD_MAX72xx.h>
#include <SPI.h>

#include "Config.h"
#include "FrameBuffer.h"

class Display64x64
{
public:
    Display64x64();

    void begin();
    void clear();
    void render(const FrameBuffer &fb);

private:
    MD_MAX72XX* rows[ROWS];

    void renderRow(
        uint8_t rowChain,
        const FrameBuffer &fb);
};

#endif