#include "RacingPointTeamCreator.h"
#include "RacingPointTeam.h"
#include "RaceCar.h"

Team* RacingPointTeamCreator::createTeam(Location* l) {
	// TODO - implement RacingPointTeamCreator2::createTeam
	return new RacingPointTeam(l);
}

Vehicle** RacingPointTeamCreator::createRaceCar() {
	// TODO - implement FerrariTeamCreator2::createRaceCar
	Vehicle** cars = new Vehicle*[2];
	for(int i=0; i < 2; i++) {
		cars[i] = new RaceCar(100, "NULL", 63, 65, 61);
	}
	return cars;
}
