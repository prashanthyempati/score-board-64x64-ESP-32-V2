#include <Arduino.h>
#include "Display.h"

Display display;

void setup()
{
    display.begin();

    display.printCenter("HELLO");
}

void loop()
{
}