#ifndef EVENT_H
#define EVENT_H

#include <vector>
#include <iostream>
#include <string>
#include "Team.h"

using namespace std;

class Event {
private:
    string eventName;
protected:
    vector<Team*> teams;
public:
    Event(string);
    ~Event();
    virtual void performEvent() = 0;
    vector<Team*> getTeam();
    virtual void simulator(Team*){};
    void addteam(Team*);
};

#endif
