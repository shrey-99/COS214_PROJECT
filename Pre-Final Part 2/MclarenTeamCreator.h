#ifndef MCLARENTEAMCREATOR_H
#define MCLARENTEAMCREATOR_H

#include "Factory.h"

class MclarenTeamCreator : public Factory {
public:
	Team* createTeam(Location*);

	Vehicle** createRaceCar();
};

#endif
