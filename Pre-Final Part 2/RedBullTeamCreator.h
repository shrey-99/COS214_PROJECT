#ifndef REDBULLTEAMCREATOR_H
#define REDBULLTEAMCREATOR_H

#include "Factory.h"

class RedBullTeamCreator : public Factory {
public:
	Team* createTeam(Location*);

	Vehicle** createRaceCar();
};

#endif
