#ifndef MAX7219_DRIVER_H
#define MAX7219_DRIVER_H

#include <Arduino.h>
#include <SPI.h>

#include "Config.h"

class MAX7219Driver
{
public:
    void begin();

    void send(
        uint8_t chain,
        uint8_t module,
        uint8_t reg,
        uint8_t value);

private:
    void select(uint8_t chain);
    void deselect(uint8_t chain);
};

#endif