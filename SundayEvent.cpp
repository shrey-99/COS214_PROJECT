#include "SundayEvent.h"

SundayEvent::SundayEvent(string name, Command* s, Command* e) : Event(name) {
    context = new RacingLights();
    start = s;
    end = e;
}

void SundayEvent::performEvent() {
    this->startRace();
}

void SundayEvent::race() {
    cout << "The race has begun!" << endl;
}

void SundayEvent::startRace() 
{
	start->execute();
	context->setState(new GreenLightState());
	//context->automaticStateChange(); // should change state to green light state from initial red light state.
	cout << "Light is " << context->displayCurrentLight() << "." << endl;
    
    	race();
}

void SundayEvent::endRace() 
{
	end->execute();
	context->setState(new RedLightState());
	//context->automaticStateChange(); // should change state to red light state from current green light state.
	cout << "Light is " << context->displayCurrentLight() << ", we have reached the end of the race." << endl;
}

