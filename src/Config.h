#pragma once

#include <MD_MAX72xx.h>

#define HARDWARE_TYPE MD_MAX72XX::ICSTATION_HW

#define MODULES_PER_ROW 8
#define ROWS 8

#define PIN_DATA 23
#define PIN_CLK 18

const uint8_t CS_PINS[ROWS] =
{
    5,
    17,
    16,
    4,
    2,
    15,
    13,
    12
};