#ifndef SOFTTYRERAINYCLIMATESTRATEGY_H
#define SOFTTYRERAINYCLIMATESTRATEGY_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Strategy.h"
#include "Location.h"


using namespace std;
class SoftTyreRainyClimateStrategy: public Strategy
{

public:
    SoftTyreRainyClimateStrategy();
    ~SoftTyreRainyClimateStrategy();
    void formulateStrategy(Location*); //algorithm method

};

#endif 