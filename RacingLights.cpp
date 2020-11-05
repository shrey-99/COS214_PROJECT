#include "RacingLights.h"
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

RacingLights::RacingLights()
{
    cout << "RacingLights Created." << endl;
    light= new RedLight("Red");
}

RacingLights::~RacingLights()
{
    cout << "RacingLights Destroyed." << endl;
    delete light;
}

void RacingLights::changeState()
{
	if(light!=0)
	{
		
		State* holder=this->light->changeLight();
		
		delete light;
		light=0;
		light=holder;
		this->light->displayLight();
	}
	else
	{
		cout<<"Error:State not initialized!!"<<endl;
	}
}

void RacingLights:: displayCurrentLight()
{
	this->light->displayLight();
}

void RacingLights::automaticStateChange()
{
	if(light!=0)
	{
		delete light;
		light=0;
		light= new RedLight("Red");
		displayCurrentLight();
		changeState();
		changeState();
		
		
	}
	else
	{
		cout<<"Error:State not initialized!!"<<endl;
	}
		
}