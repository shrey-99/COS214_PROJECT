#include "AlphaTauriTeamCreator.h"
#include "AlphaTauriTeam.h"
#include "RaceCar.h"

Team* AlphaTauriTeamCreator::createTeam(Location* l) {
	// TODO - implement AlphaTauriTeamCreator2::createTeam
	return new AlphaTauriTeam(l);
}

Vehicle** AlphaTauriTeamCreator::createRaceCar() {
	// TODO - implement AlphaTauriTeamCreator2::createRaceCar
	Vehicle** cars = new Vehicle*[2];
	for(int i=0; i < 2; i++) {
		cars[i] = new RaceCar(100, "NULL", 40, 35, 42);
	}
	return cars;
}
