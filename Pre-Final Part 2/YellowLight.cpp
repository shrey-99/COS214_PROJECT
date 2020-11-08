#include "YellowLight.h"
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

YellowLight::YellowLight()
{
   // cout << "YellowLight Created." << endl;
}

YellowLight::YellowLight(string p)
{
    //cout << "YellowLight Created." << endl;
    setColour(p);
}

YellowLight::~YellowLight()
{
    //cout << "YellowLight Destroyed." << endl;
}

void YellowLight::displayLight() 
{
	cout<<"Displaying "+getColour()+" Light."<<endl;
}

State* YellowLight::changeLight()
{
	return new GreenLight("Green");
}