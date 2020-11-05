#include "Soft.h"


Soft :: Soft(RaceTrack*raceTrack)
{
	cout<<"Creating a Soft raceTrack "<<endl;
	setTrack(raceTrack);
}
Soft :: ~Soft()
{
}
string Soft :: operation()
{
   return this->getTrack()->operation()+"Blue";
}
