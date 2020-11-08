#ifndef FRIDAYEVENT_H
#define FRIDAYEVENT_H

#include "Event.h"
#include "Vehicle.h"
#include <iostream>

using namespace std;

class FridayEvent : public Event {
public:
    FridayEvent(string);
    virtual void performEvent();
    void simulator(Team*);
    void windTunnel(Vehicle*);
};

#endif
