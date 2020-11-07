#include "EuropeanGrandPrix.h"

EuropeanGrandPrix::EuropeanGrandPrix(Location* location) 
{
	this->setLocation(location);
}

EuropeanGrandPrix:: ~EuropeanGrandPrix() 
{
	
}
void EuropeanGrandPrix::race()
{
	for(int x=0;x<event.length();x++)
	{
		event[x]->performEvent();
	}
}

