#ifndef MCLARENTEAMCREATOR_H
#define MCLARENTEAMCREATOR_H

#include "Factory.h"

class MclarenTeamCreator : Factory {
public:
	Team* createTeam();

	Vehicle* createRaceCar();
};

#endif
