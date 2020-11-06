#include "MclarenTeamCreator.h"
#include "MclarenTeam.h"
#include "RaceCar.h"


Team* MclarenTeamCreator::createTeam() {
	// TODO - implement MclarenTeamCreator2::createTeam
	return new MclarenTeam();
}

Vehicle* MclarenTeamCreator::createRaceCar() {
	// TODO - implement MclarenTeamCreator2::createRaceCar
	Vehicle* cars[2];
	for(int i=0; i < 2; i++) {
		cars[i] = new RaceCar(100, "NULL", 50, 30, 50);
	}
	return *cars;
}
