#include "Non_EuropeanGrandPrix.h"

Non_EuropeanGrandPrix::Non_EuropeanGrandPrix(Location*location)
{
	this->setLocation(location);
}

Non_EuropeanGrandPrix:: ~Non_EuropeanGrandPrix() 
{
}
Non_EuropeanGrandPrix :: race()
{
	for(int i=0;i<events.length();i++)
	{
		events[i]->performEvent();
	}
}
