#include "Vehicle.h"

Vehicle::Vehicle() {
    this->isOnState = false;
    this->fuel = 0;
}

Vehicle::Vehicle(int fuel) {
    this->fuel = fuel;
}

Vehicle::~Vehicle() {
    
}

void Vehicle::setFuel(int f){
    this->fuel = f;
}

int Vehicle::getFuel(){
    return fuel;
}

void Vehicle::setState(bool s) 
{
	isOnState = s;
}

bool Vehicle::getState() 
{
	return isOnState;
}
