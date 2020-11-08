#include <iostream>
#include <vector>

#include "Factory.h"
#include "AlphaRomeoTeamCreator.h"
#include "AlphaRomeoTeam.h"
#include "AlphaTauriTeam.h"
#include "AlphaTauriTeamCreator.h"
#include "FerrariTeamCreator.h"
#include "HaasTeamCreator.h"
#include "MclarenTeamCreator.h"
#include "MercedesTeamCreator.h"
#include "RacingPointTeamCreator.h"
#include "RedBullTeamCreator.h"
#include "RenaultTeamCreator.h"
#include "WilliamsTeamCreator.h"
#include "Vehicle.h"
#include "RaceCar.h"
#include "Team.h"
#include "Event.h"
#include "SaturdayEvent.h"

using namespace std;

int main() {

    Factory* fact[10];

    fact[0] = new AlphaRomeoTeamCreator();
    fact[1] = new AlphaTauriTeamCreator();
    fact[2] = new FerrariTeamCreator();
    fact[3] = new HaasTeamCreator();
    fact[4] = new MclarenTeamCreator();
    fact[5] = new MercedesTeamCreator();
    fact[6] = new RacingPointTeamCreator();
    fact[7] = new RedBullTeamCreator();
    fact[8] = new RenaultTeamCreator();
    fact[9] = new WilliamsTeamCreator();

    Team* teams[10];
    Event* e = new SaturdayEvent("Qualifiers");

    for(int i=0; i < 10; i++) {
        teams[i] = fact[i]->createTeam();
        Vehicle** cars = fact[i]->createRaceCar();

        cout << "Team name: " << teams[i]->getName() << endl;
        teams[i]->setCars(cars);

        RaceCar** rc = (RaceCar**)teams[i]->getCars();   
        cout << "RaceCar one acceleration: " << rc[0]->getAccelerationInfo() << endl;
        cout << "RaceCar one acceleration: " << rc[1]->getAccelerationInfo() << endl;

        e->addteam(teams[i]);
        cout << "=======================================" << endl;
    }

    e->performEvent();

    vector<Team*> tms = e->getTeam();

    for(int i=0; i < 10; i++) {
        cout << "Team name: " << tms[i]->getName() << endl;
        RaceCar** rc = (RaceCar**)tms[i]->getCars();   
        cout << "RaceCar one position: " << rc[0]->getPosition() << endl;
        cout << "RaceCar two position: " << rc[1]->getPosition() << endl;
    }
    cout << "EVent" <<endl;
    for(int i=0; i < 10; i++) {
        delete fact[i];
    }
    //delete fact;
    /**/
}