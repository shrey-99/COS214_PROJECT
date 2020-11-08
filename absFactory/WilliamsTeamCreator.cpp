#include "WilliamsTeamCreator.h"
#include "WilliamsTeam.h"
#include "RaceCar.h"

Team* WilliamsTeamCreator::createTeam() {
	// TODO - implement WilliamsTeamCreator2::createTeam
	return new WilliamsTeam();
}

Vehicle** WilliamsTeamCreator::createRaceCar() {
	// TODO - implement FerrariTeamCreator2::createRaceCar
	Vehicle** cars = new Vehicle*[2];
	for(int i=0; i < 2; i++) {
		cars[i] = new RaceCar(100, "NULL", 65, 56, 62);
	}
	return cars;
}
