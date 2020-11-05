#ifndef RACINGLIGHTS_H
#define RACINGLIGHTS_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "State.h"
#include "RedLight.h"


using namespace std;
class RacingLights
{
private:
		State* light;

public:
    RacingLights();
    ~RacingLights();
    void changeState(); // request method : when using this method it will only progress to the next state eg. RedLight to YellowLight
    void automaticStateChange(); //when using this method it will change the state from RedLight to Yellow to GreenLight automatically.
    void displayCurrentLight();
};

#endif 