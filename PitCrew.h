#ifndef PITCREW_H
#define PITCREW_H

#include <string>
#include "Vehicle.h"
#include "RaceCar.h"

using namespace std;

class PitCrew : public observer {
  private:
      RaceCar* car;
  public:
    PitCrew();
    void checkVehicle();
    void getcar(RaceCar*);
    void refuel();
    void changeTyre();
};

#endif
