#ifndef FACTORY_H
#define FACTORY_H

#include "Team.h"
#include "Vehicle.h"

class Factory {
public:
	virtual Team* createTeam() = 0;

	virtual Vehicle** createRaceCar() = 0;
};

#endif
