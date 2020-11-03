#ifndef TEAM_H
#define TEAM_H

#include <string>

using namespace std;

class Team {
private:
    string teamName;
    string season;
    //engineers
    //pitCrew
    //strategist
    //vehicle
    //drivers

public:
    Team(string, string);
    void addEngineer();
};

#endif