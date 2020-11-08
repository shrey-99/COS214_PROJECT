#ifndef SATURDAYEVENT_H
#define SATURDAYEVENT_H

#include "Event.h"
#include <iostream>

using namespace std;

class SaturdayEvent : public Event {
public:
    SaturdayEvent(string);
    void performEvent();
    void setStartingPositions();
private:
    void sort(int*, int*, int);
    int getIndex(int*, int);
};

#endif
