#include "Vehicle.h"

Vehicle::Vehicle() {
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
