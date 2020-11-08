#ifndef RACINGPOINTTEAMCREATOR_H
#define RACINGPOINTTEAMCREATOR_H

#include "Factory.h"

class RacingPointTeamCreator : public Factory {
public:
	Team* createTeam(Location*);

	Vehicle** createRaceCar();
};

#endif
