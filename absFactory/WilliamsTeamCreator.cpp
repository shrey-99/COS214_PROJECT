#include "WilliamsTeamCreator.h"
#include "WilliamsTeam.h"
#include "RaceCar.h"

Team* WilliamsTeamCreator::createTeam() {
	// TODO - implement WilliamsTeamCreator2::createTeam
	return new WilliamsTeam();
}

Vehicle* WilliamsTeamCreator::createRaceCar() {
	// TODO - implement WilliamsTeamCreator2::createRaceCar
	Vehicle* cars[2];
	for(int i=0; i < 2; i++) {
		cars[i] = new RaceCar(100, "NULL", 50, 30, 50);
	}
	return *cars;
}
