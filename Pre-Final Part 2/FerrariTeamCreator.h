#ifndef FERRARITEAMCREATOR_H
#define FERRARITEAMCREATOR_H

#include "Factory.h"

// ##include "Location.h"

class FerrariTeamCreator : public Factory {


public:
	Team* createTeam(Location*);

	Vehicle** createRaceCar();
};

#endif
