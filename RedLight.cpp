#include "RedLight.h"
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

RedLight::RedLight(string p)
{
    //cout << "RedLight Created." << endl;
    setColour(p);
}

RedLight::~RedLight()
{
    //cout << "RedLight Destroyed." << endl;
}

void RedLight::displayLight() 
{
	cout<<"Displaying "+getColour()+" Light."<<endl;
}

State* RedLight::changeLight()
{
	return new YellowLight("Yellow");
}