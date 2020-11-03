#ifndef SATURDAYEVENT_H
#define SATURDAYEVENT_H

#include "Event.h"
#include <iostream>

using namespace std;

class SaturdayEvent : public Event {
public:
    SaturdayEvent(string);
    virtual void performEvent();
    void setStartingPositions();
};

#endif