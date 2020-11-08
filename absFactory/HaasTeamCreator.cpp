#include "HaasTeamCreator.h"
#include "HaasTeam.h"
#include "RaceCar.h"

Team* HaasTeamCreator::createTeam() {
	// TODO - implement HaasTeamCreator2::createTeam
	return new HaasTeam();
}

Vehicle* HaasTeamCreator::createRaceCar() {
	// TODO - implement HaasTeamCreator2::createRaceCar
	Vehicle* cars[2];
	for(int i=0; i < 2; i++) {
		cars[i] = new RaceCar(100, "NULL", 45, 48, 61);
	}
	return *cars;
}
