#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

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
    virtual void startEngine() = 0;
    virtual void stopEngine() = 0;
    //virtual void notify() = 0; // called in car's startEngine function
};

#endif
