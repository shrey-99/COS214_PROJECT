#include "RacingPointTeamCreator.h"
#include "RacingPointTeam.h"
#include "RaceCar.h"

Team* RacingPointTeamCreator::createTeam() {
	// TODO - implement RacingPointTeamCreator2::createTeam
	return new RacingPointTeam();
}

Vehicle* RacingPointTeamCreator::createRaceCar() {
	// TODO - implement RacingPointTeamCreator2::createRaceCar
	Vehicle* cars[2];
	for(int i=0; i < 2; i++) {
		cars[i] = new RaceCar(100, "NULL", 50, 30, 50);
	}
	return *cars;
}
