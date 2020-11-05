#include "GreenLight.h"
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

GreenLight::GreenLight()
{
   // cout << "GreenLight Created." << endl;
}

GreenLight::GreenLight(string p)
{
    //cout << "GreenLight Created." << endl;
    setColour(p);
}

GreenLight::~GreenLight()
{
    //cout << "GreenLight Destroyed." << endl;
}

void GreenLight::displayLight() 
{
	cout<<"Displaying "+getColour()+" Light."<<endl;
}

State* GreenLight::changeLight()
{
	cout<<"Displaying "+getColour()+" Light."<<endl;
	return 0;
}