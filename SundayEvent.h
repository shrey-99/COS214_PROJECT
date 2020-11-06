#ifndef SUNDAYEVENT_H
#define SUNDAYEVENT_H

#include "Event.h"
#include "Command.h"
#include <iostream>

class SundayEvent : public Event {
private:
	Command* start;
	Command* end;
public:
    SundayEvent(string, Command*, Command*);
    virtual void performEvent();
    void race();
    void startRace();
    void endRace();
};

#endif
