#ifndef ALPHAROMEOTEAMCREATOR_H
#define ALPHAROMEOTEAMCREATOR_H

#include "Factory.h"

class AlphaRomeoTeamCreator : public Factory {
public:
	Team* createTeam();

	Vehicle* createRaceCar();
};

#endif
