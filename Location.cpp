#include "Location.h"
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

/*Location::Location(string wc, string ln, Compound* c)
{
	weatherCondition=wc;
	locationName=ln;
	compund=c;
    
   
}*/

Location::Location(string wc, string ln)
{
	weatherCondition=wc;
	locationName=ln;
    
   
}

Location::~Location()
{
    
    //delete compound;
    cout << "Location Destroyed." << endl;
}


string Location:: getRaceTrackName()
{
	//return compound->getRaceTrackName();
	return "";
}


string  Location:: getTyreCompound()
{
	//return compound->getTyreCompound();
	return "";
}
			
string  Location:: getWeatherCondition()
{
	return weatherCondition;
}

string  Location::getLocationName()
{
	return locationName;
	
}