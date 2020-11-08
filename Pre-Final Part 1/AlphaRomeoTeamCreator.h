#ifndef ALPHAROMEOTEAMCREATOR_H
#define ALPHAROMEOTEAMCREATOR_H

#include "Factory.h"

// #include "Location.h"

class AlphaRomeoTeamCreator : public Factory {
public:
	Team* createTeam(Location*);

	Vehicle** createRaceCar();
};

#endif
