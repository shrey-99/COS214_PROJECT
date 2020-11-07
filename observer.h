#ifndef OBSERVER_H
#define OBSERVER_H

#include <string>
class RaceCar;
using namespace std;

class observer {
public:
    virtual void checkVehicle() = 0;
    virtual void getcar(RaceCar*) =0;

};

#endif
