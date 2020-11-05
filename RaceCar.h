#ifndef RACECAR_H
#define RACECAR_H

#include <string>
#include "Vehicle.h"

using namespace std;

class RaceCar : public Vehicle {
private:
    string tyres;
    int acceleration;
    int braking;
    int handling;
    int damage;
    int startingPosition;

public:
    RaceCar();
    RaceCar(int,string,int,int,int);
    ~RaceCar();

    int getAccelerationInfo();
    int getBrakingInfo();
    int getHandlingInfo();
    int getDamage();
    int getPosition();
    string getTyres();

    void setAcceleration(int);
    void setBraking(int);
    void setHandling(int);
    void setDamage(int);
    void setPosition(int);
    void setTyres(string);

};

#endif