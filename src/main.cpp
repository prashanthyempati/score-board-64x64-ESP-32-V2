#include <Arduino.h>
#include "Display.h"

Display display;

void setup()
{
    Serial.begin(115200);

    display.begin();

    display.printCenter("WELCOME");
}

void loop()
{
}