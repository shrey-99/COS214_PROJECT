#ifndef STRATEGIST_H
#define STRATEGIST_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Strategy.h"
#include "SoftTyreRainyClimateStrategy.h"
#include "MediumTyreCloudyClimateStrategy.h"
#include "HardTyreSunnyClimateStrategy.h"



using namespace std;
class Strategist
{
private:
		Strategy* strategy;
		Location* location;
		string strategistName;

public:
    Strategist(string, Location*);
    ~Strategist();
    string getStrategistName();
    void setStrategistName(string);
    void formulateStrategy(); //sets up strategy based on location and racetrack attributes
    void printStrategy(); //prints details of formulated startegy
};

#endif 