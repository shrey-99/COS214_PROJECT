#include <iostream>
#include "ConcreteIterator.h"
#include "RaceCar.h"

#include <cstdlib> // For rand and srand
#include <ctime> // For the time function

using namespace std;


ConcreteIterator::ConcreteIterator(){
	index = 0;
}

ConcreteIterator::~ConcreteIterator(){

}

void ConcreteIterator::first(){
	index = 0;
}

void ConcreteIterator::next(){
	index++;
}

RaceResultNode ConcreteIterator::current(){
	return aggregateCopy->get(index);
}

bool ConcreteIterator :: hasNext(){
	if(index == aggregateCopy->getNumElements())
		return false;

	return true;
}


int ConcreteIterator :: getIndex(){
	return index;
}

void ConcreteIterator :: printCurrent(){
	// cout << aggregateCopy->get(index).getName()  << "\n";

	cout << "Position: " << index << endl;
	cout << "Driver: " << aggregateCopy->get(index).getDriver()->getName() << endl;
	cout << "Lap Time: " << aggregateCopy->get(index).getLapTime() << endl;
	cout << endl;
}

ConcreteIterator :: ConcreteIterator(DynamicArray* aggregateCopy){
	this->aggregateCopy = aggregateCopy;
	index = 0;
}


//*********************************************************************
// void updateTyreWare();
void ConcreteIterator :: updateTyreWare(){
	int MIN_VALUE = 10;

	int MAX_VALUE = 30;

	// Get the system time.
	unsigned seed = time(0);

	// Seed the random number generator.
	srand(seed);

	//calculate the new TyreWare
	int newTyreWare = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	RaceCar* rc = (RaceCar*) aggregateCopy->getPtr(index)->getVehicle();
	rc->setTyreWare(newTyreWare);
}

void ConcreteIterator :: updateFuel(){

	int MIN_VALUE = 10;

	int MAX_VALUE = 25;

	// Get the system time.
	unsigned seed = time(0);

	// Seed the random number generator.
	srand(seed);

	//Calculate value to decrease fuel by
	int decreaseBy = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

	aggregateCopy->getPtr(index)->getVehicle()->decreaseFuel(decreaseBy);
}


void ConcreteIterator :: calculateLapTime(){
	int calc_lap_time = aggregateCopy->getPtr(index)->getVehicle()->calculateTime();
	// cout << "laptime------" <<calc_lap_time<<endl;
	aggregateCopy->getPtr(index)->setLapTime(calc_lap_time);
}
