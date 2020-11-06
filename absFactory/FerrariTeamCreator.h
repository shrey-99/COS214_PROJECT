#ifndef FERRARITEAMCREATOR_H
#define FERRARITEAMCREATOR_H

#include "Factory.h"

class FerrariTeamCreator : Factory {


public:
	Team* createTeam();

	Vehicle* createRaceCar();
};

#endif
