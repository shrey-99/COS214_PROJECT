#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>
#include "observer.h"

using namespace std;

class Vehicle {
private:
    bool isOnState; // vehicle on/off state
    int fuel;
public:
    Vehicle();
    Vehicle(int);
    bool getState();
    void setState(bool);
    int getFuel();
    void setFuel(int);
    
    virtual ~Vehicle();
    virtual void startEngine(){};
    virtual void stopEngine(){};
    virtual void notify(observer*){};
    virtual int calculateTime(){return 0;};
    virtual void increaseSpecs(){};
    virtual void setPosition(int){};

    //****************************************************************
    void decreaseFuel(int); 
};

#endif
