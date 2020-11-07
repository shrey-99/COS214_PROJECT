#ifndef EVENT_H
#define EVENT_H

#include <vector>
#include <iostream>
#include <string>
#include "Team.h"

using namespace std;

class Event {
public:
    Event(string);
    ~Event();
    virtual void performEvent() = 0;

private:
    string eventName;
    
protected:
    vector<Team*> teams;
    

};

#endif
