#include "SaturdayEvent.h"

SaturdayEvent::SaturdayEvent(string name) : Event(name) {
    
}

void SaturdayEvent::performEvent() {
    this->setStartingPositions();
}

void SaturdayEvent::setStartingPositions() {
    cout << "The starting positions of all the drivers were set" << endl;
}

