#ifndef REDLIGHT_H
#define REDLIGHT_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "State.h"
#include "YellowLight.h"
#include "GreenLight.h"


using namespace std;
class RedLight: public State
{

public:
    RedLight();
    RedLight(string);
    ~RedLight();
    State* changeLight();
    void displayLight(); //handle method

};

#endif 