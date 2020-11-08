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

    /*
		* Need a "node" class to store each driver and its position.
			* The drivers need to already be in the "array of nodes"
			  b4 the for loop even starts

		* Driver points stored in the driver class
		* Using lap times to differentiate between different drivers postions
		* Gonna sort the drivers by smallest lap times
			* smallest lap time wins
    */

    //1. Get the total # of Drivers in the race
    //i.e total num of drivers = # of teams x 2
	    int total_num_drivers;
	    total_num_drivers = teams.size()*2  ;

    //2. Create an Aggregate that stores all the drivers and their details
	    DynamicArray* myDynamicArray = new DynamicArray(total_num_drivers);

	//3. Store assign a driver to each node in the aggregate
	    for (int i = 0; i < teams.size(); i++){
			myDynamicArray->insert( i*2, new RaceResultNode(teams.at(i)->getDriverAt(0), teams.at(i)->getCarAt(0)) );
			myDynamicArray->insert( (i*2)+1, new RaceResultNode(teams.at(i)->getDriverAt(1), teams.at(i)->getCarAt(1)) );
	    }

	//4.Create an iterator to traverse the aggregate
		ConcreteIterator* iterator = myDynamicArray->createIterator();

    //5. da actual simulation - 10 laps
	    for (int i = 0; i < 10; ++i)
	    {
		    for(; iterator->hasNext(); iterator->next())
		    {
			    //5.1 "update tyreWare"
					iterator->updateTyreWare();

			    //5.2 "update fuel"
					iterator->updateFuel();

			    //5.3 Calculate and set lap time
					iterator->calculateLapTime();

			    //5.4 move to next driver in race
	    	}
	    }

	//6. Sort the aggregate according to lap time
  myDynamicArray->sort();

  //7. Print the results
  	for (iterator->first();iterator->hasNext(); iterator->next())
  	{
  		iterator->printCurrent();
  	}

    endRace();
}

void SundayEvent::startRace()
{
	start->execute();
	context->setState(new GreenLight());
	//context->automaticStateChange(); // should change state to green light state from initial red light state.
	cout << "Light is " ;
  context->displayCurrentLight() ;
  cout << "." << endl;

	race();
}

void SundayEvent::endRace()
{
	end->execute();
	context->setState(new RedLight());
	//context->automaticStateChange(); // should change state to red light state from current green light state.
	cout << "Light is ";
  context->displayCurrentLight();
  cout << "we have reached the end of the race." << endl;
}
