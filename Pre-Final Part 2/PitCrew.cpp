#include "PitCrew.h"

/*
  * code something to minus fuel (in race() )
  * if damage 0; check inside race(); give 0 points; i.e last place

*/


void PitCrew::checkVehicle(){
  if (car->getDamage() <= 0) {
    cout<<"Car is damaged beyond repair gains zero points"<<endl;
  }else {
    if (car->getFuel() <=200){
      refuel();
    }
    if (car->getTyreWare() >= 5) {
      changeTyre();
    }
  }
}


void PitCrew::setcar(RaceCar*c){
  car = c;
}

void PitCrew::refuel(){
  car->setFuel(car->getFuel() +10);
  int newD = car->getFuel()/car->getTyreWare();
  car->setDamage(newD);
}

RaceCar* PitCrew::getcar(){
  return car;
}

void PitCrew::changeTyre(){
  car->setTyreWare(car->getTyreWare() - 1);
  int newD = car->getFuel()/car->getTyreWare();
  car->setDamage(newD);
}
