#include <Arduino.h>
#include "Display.h"
#include "Scoreboard.h"
#include "Renderer.h"

Display display;
Scoreboard board;
Renderer renderer(display);

void setup()
{
    display.begin();

    board.setScore("52/1");
    board.setTarget(90);
    board.setOvers("6.0");

    board.setBatter1("KHALEEL", 30);
    board.setBatter2("PRASHANTH", 22);
}

void loop()
{
    renderer.showScore(board);
    delay(2000);

    renderer.showTarget(board);
    delay(2000);

    renderer.showOvers(board);
    delay(2000);

    renderer.showBatter1(board);
    delay(2000);

    renderer.showBatter2(board);
    delay(2000);
}