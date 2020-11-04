#ifndef TEAM_H
#define TEAM_H

#include <string>
#include "Driver.h"

using namespace std;

class Team {
private:
    string teamName;
    string season;
    //engineers
    //pitCrew
    //strategist
    //vehicle
    Driver drivers[2];

public:
    Team(string, string);
    void addEngineer();
};

#endif