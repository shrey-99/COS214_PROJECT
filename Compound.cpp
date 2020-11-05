#include "Compound.h"


Compound ::Compound()
{

}
Compound ::~Compound()
{
	delete raceTrack;
}
string Compound :: operation()
{
	raceTrack->operation();
}
void Compound ::setTrack(RaceTrack* _raceTrack)
{
   raceTrack=_raceTrack;
}
RaceTrack* Compound :: getTrack()
{
	return raceTrack;
}
