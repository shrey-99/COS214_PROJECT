#include "RedBullTeamCreator.h"
#include "RedBullTeam.h"
#include "RaceCar.h"

Team* RedBullTeamCreator::createTeam() {
	// TODO - implement RedBullTeamCreator2::createTeam
	return new RedBullTeam();
}

Vehicle* RedBullTeamCreator::createRaceCar() {
	// TODO - implement RedBullTeamCreator2::createRaceCar
	Vehicle* cars[2];
	for(int i=0; i < 2; i++) {
		cars[i] = new RaceCar(100, "NULL", 83, 77, 82);
	}
	return *cars;
}
