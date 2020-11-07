#include "HardTyreSunnyClimateStrategy.h"
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

HardTyreSunnyClimateStrategy:: HardTyreSunnyClimateStrategy()
{
	
	
}


HardTyreSunnyClimateStrategy::~HardTyreSunnyClimateStrategy()
{
	
	
}

void HardTyreSunnyClimateStrategy:: formulateStrategy(Location* location)
{
	string str1="sunny";
	string str2="Hard";
	string str3="Medium";
	string str4="Soft";
	
	
	if(str1.compare(location->getWeatherCondition()) == 0)
	{
		setOption(1);
		srand (time(NULL));
		setNumberOfTimesToPit(rand() % 6);
		//formular1 uses 78 laps
		int first=rand() % 60;
		int second=(78-first)-5;
		int third=5;
		
		string* holder=getTyresToUse();
		int* holder2=getQuarters();
		
		holder[0]=str2;
		holder[1]=str3;
		holder[2]=str4;
		
		holder2[0]=first;
		holder2[1]=second;
		holder2[2]=third;
		
		
		
		
	}
	else
	{
		cout<<"invalid weather condition!! please reset the weather condition in your chosen location"<<endl;
	}
	
}