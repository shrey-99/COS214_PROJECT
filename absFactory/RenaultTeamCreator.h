#ifndef RENAULTTEAMCREATOR_H
#define RENAULTTEAMCREATOR_H

#include "Factory.h"

class RenaultTeamCreator : public Factory {

public:
	Team* createTeam();

	Vehicle** createRaceCar();
};

#endif
