#ifndef HAASTEAMCREATOR_H
#define HAASTEAMCREATOR_H

#include "Factory.h"

class HaasTeamCreator : public Factory {


public:
	Team* createTeam();

	Vehicle** createRaceCar();
};

#endif
