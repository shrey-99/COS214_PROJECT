#ifndef DRIVER_H
#define DRIVER_H

#include <string>

using namespace std;

class Driver {
public:
    Driver(string);
    string getName();
    void updatePoints(int);
    int getPoints();

private:
    string name;
    int points;
};

#endif