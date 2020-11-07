#ifndef MEDIUMTYRECLOUDYCLIMATESTRATEGY_H
#define MEDIUMTYRECLOUDYCLIMATESTRATEGY_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Strategy.h"
#include "Location.h"


using namespace std;
class MediumTyreCloudyClimateStrategy: public Strategy
{

public:
    MediumTyreCloudyClimateStrategy();
    ~MediumTyreCloudyClimateStrategy();
    void formulateStrategy(Location*); //algorithm method

};

#endif 