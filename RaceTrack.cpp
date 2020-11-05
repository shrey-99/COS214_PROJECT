#include "RaceTrack.h"
	
RaceTrack::RaceTrack()
{
}
void RaceTrack :: setColor(string _color)
{
	color=_color;
}
void RaceTrack:: setShape(string _shape)
{
	shape=_shape;
}
string  RaceTrack :: getColor()
{
	return color;
}
string RaceTrack :: getShape()
{
	return shape;
}


