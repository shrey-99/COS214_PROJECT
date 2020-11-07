#include "Event.h"

Event::Event(string name) {
    this->eventName = name;
}

Event::~Event() {

}

void Event::performEvent() {
    
}

vector<Team*> Event::getTeam() {
    return teams;
}
