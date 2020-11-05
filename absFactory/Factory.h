#ifndef FACTORY2_H
#define FACTORY2_H

class Factory {

private:
	Team* team;
	Vehicle racecars[];

public:
	virtual Team* createTeam() = 0;

	virtual Vehicle* createRaceCar() = 0;
};

#endif
