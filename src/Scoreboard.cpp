#include "Scoreboard.h"

// Setters

void Scoreboard::setScore(const String &value)
{
    score = value;
}

void Scoreboard::setTarget(int value)
{
    target = value;
}

void Scoreboard::setOvers(const String &value)
{
    overs = value;
}

void Scoreboard::setBatter1(const String &name, int runs)
{
    batter1Name = name;
    batter1Runs = runs;
}

void Scoreboard::setBatter2(const String &name, int runs)
{
    batter2Name = name;
    batter2Runs = runs;
}

// Getters

String Scoreboard::getScore() const
{
    return score;
}

int Scoreboard::getTarget() const
{
    return target;
}

String Scoreboard::getOvers() const
{
    return overs;
}

String Scoreboard::getBatter1Name() const
{
    return batter1Name;
}

int Scoreboard::getBatter1Runs() const
{
    return batter1Runs;
}

String Scoreboard::getBatter2Name() const
{
    return batter2Name;
}

int Scoreboard::getBatter2Runs() const
{
    return batter2Runs;
}