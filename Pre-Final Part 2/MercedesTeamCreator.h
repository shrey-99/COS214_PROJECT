#ifndef MERCEDESTEAMCREATOR_H
#define MERCEDESTEAMCREATOR_H

#include "Factory.h"

class MercedesTeamCreator : public Factory {


public:
	Team* createTeam(Location*);

	Vehicle** createRaceCar();
};

#endif
