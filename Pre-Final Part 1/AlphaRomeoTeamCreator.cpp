#include "AlphaRomeoTeamCreator.h"
#include "AlphaRomeoTeam.h"
#include "RaceCar.h"

Team* AlphaRomeoTeamCreator::createTeam(Location* l) {
	// TODO - implement AlphaRomeoTeamCreator2::createTeam
	return new AlphaRomeoTeam(l);
}

Vehicle** AlphaRomeoTeamCreator::createRaceCar() {
	// TODO - implement AlphaRomeoTeamCreator2::createRaceCar
	Vehicle** cars = new Vehicle*[2];
	for(int i=0; i < 2; i++) {
		cars[i] = new RaceCar(100, "NULL", 50, 30, 50);
	}
	return cars;
}
