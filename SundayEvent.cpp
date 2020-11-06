#include "SundayEvent.h"

SundayEvent::SundayEvent(string name, Command* s, Command* e) : Event(name) {
    start = s;
    end = e;
}

void SundayEvent::performEvent() {
    this->race();
}

void SundayEvent::race() {
    cout << "The race has begun!" << endl;
}

void SundayEvent::startRace() 
{
	start->execute();
	//context->request(); // change state
	//context->setState(new GreenLightState());
	cout << "Light is " << context->getColour() << "." << endl;
    
    race();
}

void SundayEvent::endRace() 
{
	end->execute();
	//context->setState(new RedLightState());
	cout << "Light is " << context->getColour() << ", we have reached the end of the race." << endl;
}

