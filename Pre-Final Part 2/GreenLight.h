#ifndef GREENLIGHT_H
#define GREENLIGHT_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "State.h"
// #include "RedLight.h"
// #include "GreenLight.h"


using namespace std;
class GreenLight: public State
{

public:
    GreenLight();
    GreenLight(string);
    ~GreenLight();
    State* changeLight();
    void displayLight(); //handle method

};

#endif
