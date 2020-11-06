#ifndef WILLIAMSTEAMCREATOR_H
#define WILLIAMSTEAMCREATOR_H
#include "Factory.h"
class WilliamsTeamCreator : Factory {


public:
	Team* createTeam();

	Vehicle* createRaceCar();
};

#endif
