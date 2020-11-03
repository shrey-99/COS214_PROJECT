#include "SundayEvent.h"

SundayEvent::SundayEvent(string name) : Event(name) {

}

void SundayEvent::performEvent() {
    this->race();
}

void SundayEvent::race() {
    cout << "The race has begun" << endl;
}

