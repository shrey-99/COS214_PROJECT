#include "MclarenTeamCreator.h"
#include "McLarenTeam.h"
#include "RaceCar.h"


Team* MclarenTeamCreator::createTeam(Location* l) {
	// TODO - implement MclarenTeamCreator2::createTeam
	return new McLarenTeam(l);
}

Vehicle** MclarenTeamCreator::createRaceCar() {
	// TODO - implement FerrariTeamCreator2::createRaceCar
	Vehicle** cars = new Vehicle*[2];
	for(int i=0; i < 2; i++) {
		cars[i] = new RaceCar(100, "NULL", 77, 70, 65);
	}
	return cars;
}