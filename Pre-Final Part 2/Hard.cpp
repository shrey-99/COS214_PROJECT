#include "Hard.h"


Hard :: Hard(RaceTrack* racetrack)
{
	cout<<"Creating the Hard raceTrack"<<endl;
	setTrack(racetrack);
}
Hard ::~Hard()
{
	
}
string Hard ::operation()
{
	return this->getTrack()->operation()+" Purple";
}
