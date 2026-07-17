#include "Renderer.h"

Renderer::Renderer(Display &disp)
    : display(disp)
{
}

void Renderer::showScore(const Scoreboard &board)
{
    display.printCenter(board.getScore().c_str());
}

void Renderer::showTarget(const Scoreboard &board)
{
    String text = "TGT " + String(board.getTarget());
    display.printCenter(text.c_str());
}

void Renderer::showOvers(const Scoreboard &board)
{
    String text = "OVR " + board.getOvers();
    display.printCenter(text.c_str());
}

void Renderer::showBatter1(const Scoreboard &board)
{
    String text = board.getBatter1Name() + " " + String(board.getBatter1Runs());
    display.printCenter(text.c_str());
}

void Renderer::showBatter2(const Scoreboard &board)
{
    String text = board.getBatter2Name() + " " + String(board.getBatter2Runs());
    display.printCenter(text.c_str());
}