#include "MercedesTeamCreator.h"
#include "MercedesTeam.h"
#include "RaceCar.h"

Team* MercedesTeamCreator::createTeam() {
	// TODO - implement MercedesTeamCreator2::createTeam
	return new MercedesTeam();
}

Vehicle** MercedesTeamCreator::createRaceCar() {
	// TODO - implement FerrariTeamCreator2::createRaceCar
	Vehicle** cars = new Vehicle*[2];
	for(int i=0; i < 2; i++) {
		cars[i] = new RaceCar(100, "NULL", 90, 95, 88);
	}
	return cars;
}