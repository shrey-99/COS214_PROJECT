#include "MercedesTeamCreator.h"
#include "MercedesTeam.h"
#include "RaceCar.h"

Team* MercedesTeamCreator::createTeam() {
	// TODO - implement MercedesTeamCreator2::createTeam
	return new MercedesTeam();
}

Vehicle* MercedesTeamCreator::createRaceCar() {
	// TODO - implement MercedesTeamCreator2::createRaceCar
	Vehicle* cars[2];
	for(int i=0; i < 2; i++) {
		cars[i] = new RaceCar(100, "NULL", 50, 30, 50);
	}
	return *cars;
}
