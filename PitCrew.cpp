#include "PitCrew.h"

void PitCrew::checkVehicle(){
  if (car->getDamage() == 0) {
    cout<<" Car is damaged beyond repair gains zero points";
  }else {
    if (car->getFuel <=200){
      refuel();
    }
    if (car->getTyreWare >= 5) {
      changeTyre();
    }
  }
}
void PitCrew::getcar(RaceCar*c){\
  car = c;
}

void PitCrew::refuel(){
  car->setFuel(car->getFuel() +10);
  int newD = car->getFuel()/car->getTyreWare();
  car->setDamage(newD);
}

void PitCrew::changeTyre(){
  car->setTyreWare(car->getTyreWare() - 1);
  int newD = car->getFuel()/car->getTyreWare();
  car->setDamage(newD);
}
