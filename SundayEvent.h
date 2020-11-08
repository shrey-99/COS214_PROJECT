#ifndef SUNDAYEVENT_H
#define SUNDAYEVENT_H

#include <iostream>
#include "Event.h"
#include "Command.h"
#include "RacingLights.h"

class SundayEvent : public Event {
private:
    RacingLights* context;
    Command* start;
    Command* end;
public:
    SundayEvent(string, Command*, Command*);
    void performEvent();
    void race();
    void startRace();
    void endRace();
};

#endif
