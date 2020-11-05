#ifndef ALPHAROMEOTEAMCREATOR_H
#define ALPHAROMEOTEAMCREATOR_H

class AlphaRomeoTeamCreator : Factory {


public:
	Team* createTeam();

	Vehicle* createRaceCar();
};

#endif
