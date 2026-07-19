#ifndef SCOREBOARD_H
#define SCOREBOARD_H

#include <Arduino.h>

class Scoreboard
{
public:
    // Setters
    void setScore(const String &value);
    void setTarget(int value);
    void setOvers(const String &value);

    void setBatter1(const String &name, int runs);
    void setBatter2(const String &name, int runs);

    // Getters
    String getScore() const;
    int getTarget() const;
    String getOvers() const;

    String getBatter1Name() const;
    int getBatter1Runs() const;

    String getBatter2Name() const;
    int getBatter2Runs() const;

private:
    String score;
    int target = 0;
    String overs;

    String batter1Name;
    int batter1Runs = 0;

    String batter2Name;
    int batter2Runs = 0;
};

#endif