#include "BasicRaceTrack.h"


BasicRaceTrack :: BasicRaceTrack()
{
	cout<<"Creating a Basic RaceTrack"<<endl;
}
string BasicRaceTrack ::operation()
{
	setShape("Oval");
	setColor("black");
	return "Shape of the racetrack: "+getShape()+" The color of the racetrack: "+getColor();
}

