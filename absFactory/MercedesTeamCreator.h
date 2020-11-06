#ifndef MERCEDESTEAMCREATOR_H
#define MERCEDESTEAMCREATOR_H

#include "Factory.h"

class MercedesTeamCreator : Factory {


public:
	Team* createTeam();

	Vehicle* createRaceCar();
};

#endif
