#include "Event.h"

Event::Event(string name) {
    this->eventName = name;
}

Event::~Event() {
    for(int i=0; i < teams.size(); i++) {
        delete teams[i];
    }
}

void Event::performEvent() {
    
}

vector<Team*> Event::getTeam() {
    return teams;
}

void Event::addteam(Team* t) {
    teams.push_back(t);
}
