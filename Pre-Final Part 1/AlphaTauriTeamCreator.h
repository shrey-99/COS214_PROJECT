#ifndef ALPHATAURITEAMCREATOR_H
#define ALPHATAURITEAMCREATOR_H

#include "Factory.h"

class AlphaTauriTeamCreator : public Factory {


public:
	Team* createTeam(Location*);

	Vehicle** createRaceCar();
};

#endif