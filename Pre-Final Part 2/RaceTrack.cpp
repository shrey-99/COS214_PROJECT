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
void RaceTrack :: setRaceTrackName(string name)
{
	RaceTrackName=name;
}
void RaceTrack ::setTyreCompound(string name)
{
	TyreCompound=name;
}
string RaceTrack::getRaceTrackkName()
{
	return RaceTrackName;
}
string 	RaceTrack :: getTyreCompound()
{
	return TyreCompound;
}
