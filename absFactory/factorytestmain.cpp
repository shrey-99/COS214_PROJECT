#include <iostream>

#include "Factory.h"
#include "AlphaRomeoTeamCreator.h"
#include "AlphaRomeoTeam.h"
#include "Vehicle.h"
#include "RaceCar.h"
#include "Team.h"

using namespace std;

int main() {

    Factory* fact = new AlphaRomeoTeamCreator();
    Team* t = fact->createTeam();
    RaceCar* cars = (RaceCar*)fact->createRaceCar();

    cout << "Team name: " << t->getName() << endl;
    cout << "RaceCar one acceleration: " << cars[0].getFuel();
}