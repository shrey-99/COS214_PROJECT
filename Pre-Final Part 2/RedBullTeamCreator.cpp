#include "RedBullTeamCreator.h"
#include "RedbullTeam.h"
#include "RaceCar.h"

Team* RedBullTeamCreator::createTeam(Location* l) {
	// TODO - implement RedBullTeamCreator2::createTeam
	return new RedbullTeam(l);
}

Vehicle** RedBullTeamCreator::createRaceCar() {
	// TODO - implement FerrariTeamCreator2::createRaceCar
	Vehicle** cars = new Vehicle*[2];
	for(int i=0; i < 2; i++) {
		cars[i] = new RaceCar(100, "NULL", 78, 86, 85);
	}
	return cars;
}
