#ifndef WILLIAMSTEAMCREATOR_H
#define WILLIAMSTEAMCREATOR_H
#include "Factory.h"
class WilliamsTeamCreator : public Factory {


public:
	Team* createTeam();

	Vehicle** createRaceCar();
};

#endif
