#ifndef RENAULTTEAMCREATOR_H
#define RENAULTTEAMCREATOR_H

#include "Factory.h"

class RenaultTeamCreator : Factory {

public:
	Team* createTeam();

	Vehicle* createRaceCar();
};

#endif
