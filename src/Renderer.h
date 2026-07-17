#ifndef RENDERER_H
#define RENDERER_H

#include "Display.h"
#include "Scoreboard.h"

class Renderer
{
public:
    Renderer(Display &display);

    void showScore(const Scoreboard &board);
    void showTarget(const Scoreboard &board);
    void showOvers(const Scoreboard &board);
    void showBatter1(const Scoreboard &board);
    void showBatter2(const Scoreboard &board);

private:
    Display &display;
};

#endif