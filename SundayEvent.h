#ifndef SUNDAYEVENT_H
#define SUNDAYEVENT_H

#include "Event.h"
#include <iostream>

class SundayEvent : public Event {
public:
    SundayEvent(string);
    virtual void performEvent();
    void race();
};

#endif