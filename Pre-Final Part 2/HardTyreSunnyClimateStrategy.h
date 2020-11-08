#ifndef HARDTYRESUNNYCLIMATESTRATEGY_H
#define HARDTYRESUNNYCLIMATESTRATEGY_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Strategy.h"
#include "Location.h"


using namespace std;
class HardTyreSunnyClimateStrategy: public Strategy
{

public:
    HardTyreSunnyClimateStrategy();
    ~HardTyreSunnyClimateStrategy();
    void formulateStrategy(Location*); //algorithm method

};

#endif 