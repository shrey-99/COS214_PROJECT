#ifndef PITCREW_H
#define PITCREW_H

#include <string>
#include <iostream>
#include "observer.h"
#include "RaceCar.h"

using namespace std;

class PitCrew : public observer {
  private:
      RaceCar* car;
  public:
    void checkVehicle();
    void getcar(RaceCar*);
    void refuel();
    void changeTyre();
};

#endif
