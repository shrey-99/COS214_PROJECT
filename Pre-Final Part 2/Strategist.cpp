#include "Strategist.h"
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

Strategist::Strategist(string s, Location* l)
{
    cout << "Strategist Created." << endl;
    strategistName=s;
    location=l;
    
   
}

Strategist::~Strategist()
{
    cout << "Strategist Destroyed." << endl;
    delete strategy;
}

string Strategist::getStrategistName()
{
	return strategistName;
}

void Strategist:: setStrategistName(string s)
{
	strategistName=s;
}

void Strategist::formulateStrategy()
{
	string str1="sunny";
	string str2="cloudy";
	string str3="rainy";
	if((str1.compare(location->getWeatherCondition()) == 0))
	{
		strategy=new HardTyreSunnyClimateStrategy();
	}
	else if((str2.compare(location->getWeatherCondition()) == 0))
	{
		strategy=new MediumTyreCloudyClimateStrategy();
	}
	else if((str3.compare(location->getWeatherCondition()) == 0))
	{
		strategy=new SoftTyreRainyClimateStrategy();
	}
	
	strategy->formulateStrategy(location);
		
}

void Strategist::printStrategy()
{
	strategy->printStrategy();
}