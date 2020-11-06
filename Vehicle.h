#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

using namespace std;

class Vehicle {
private:
    int fuel;
public:
    Vehicle();
    Vehicle(int);
    ~Vehicle();
    int getFuel();
    void setFuel();

};

#endif
