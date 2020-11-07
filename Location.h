#ifndef LOCATION_H
#define LOCATION_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
//#include "Compound.h"

using namespace std;

class Location
{
	
	private:
			string weatherCondition; // rainy, cloudy, sunny // must be lowercase 
			string locationName;
			//Compound racingCompound;
			
	public:
			Location(string, string);
			//Location(string, string, Compound* );
			string getRaceTrackName();
			string getTyreCompound();
			string getWeatherCondition();
			string getLocationName();
			~Location();
			
};

#endif