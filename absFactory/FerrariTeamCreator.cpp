#include "FerrariTeamCreator.h"
#include "FerrariTeam.h"
#include "RaceCar.h"

Team* FerrariTeamCreator::createTeam() {
	// TODO - implement FerrariTeamCreator2::createTeam
	return new FerrariTeam();
}

Vehicle** FerrariTeamCreator::createRaceCar() {
	// TODO - implement FerrariTeamCreator2::createRaceCar
	Vehicle** cars = new Vehicle*[2];
	for(int i=0; i < 2; i++) {
		cars[i] = new RaceCar(100, "NULL", 82, 86, 75);
	}
	return cars;
}
