#include "RenaultTeamCreator.h"
#include "RenaultTeam.h"
#include "RaceCar.h"

Team* RenaultTeamCreator::createTeam() {
	// TODO - implement RenaultTeamCreator2::createTeam
	return new RenaultTeam();
}

Vehicle** RenaultTeamCreator::createRaceCar() {
	// TODO - implement FerrariTeamCreator2::createRaceCar
	Vehicle** cars = new Vehicle*[2];
	for(int i=0; i < 2; i++) {
		cars[i] = new RaceCar(100, "NULL", 62, 76, 70);
	}
	return cars;
}
