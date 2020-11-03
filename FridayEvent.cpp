#include "FridayEvent.h"

FridayEvent::FridayEvent(string name) : Event(name) {

}

void FridayEvent::performEvent() {
    this->simulator();
    this->windTunnel();
}

void FridayEvent::simulator() {
    cout << "The simulator has turned on" << endl;
}

void FridayEvent::windTunnel() {
    cout << "The windtunned was used" << endl;
}
