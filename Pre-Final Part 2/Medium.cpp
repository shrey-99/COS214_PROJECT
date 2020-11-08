#include "Medium.h"



Medium :: Medium(RaceTrack* racetrack)
{
	cout<<"Creating a Medium raceTrack"<<endl;
	setTrack(racetrack);
}
Medium :: ~Medium()
{
}
string Medium :: operation()
{
	return this->getTrack()->operation()+" Green";
}
