#ifndef YELLOWLIGHT_H
#define YELLOWLIGHT_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "State.h"
#include "RedLight.h"
#include "GreenLight.h"


using namespace std;
class YellowLight: public State
{

public:
    YellowLight();
    YellowLight(string);
    ~YellowLight();
    State* changeLight();
    void displayLight(); //handle method

};

#endif 