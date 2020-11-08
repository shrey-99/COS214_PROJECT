


#include <iostream>
#include <string>
// #include "Location.h"
// #include "Engineer.h"
// #include "Driver.h"
#include "BasicRaceTrack.h"
#include "Soft.h"
#include "Medium.h"
#include "Hard.h"

#include "PitCrew.h"
#include "RaceCar.h"

#include "RacingLights.h"
#include "TurnOn.h"
#include "TurnOff.h"

// #include "SoftTyreRainyClimateStrategy.h"
// #include "HardTyreSunnyClimateStrategy.h"
// #include "MediumTyreCloudyClimateStrategy.h"

// #include "Strategist.h"
#include "HaasTeam.h"
#include "SundayEvent.h"

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



int main(int argc, char const *argv[])
{

    Location* trackLoacation = new Location("sunny", "Hatfield");

    Engineer* eng = new Engineer();

    Driver** drivers = new Driver*[2];
    drivers[0] = new Driver("Wandile");
    drivers[1] = new Driver("Rhuli");

    BasicRaceTrack* track = new BasicRaceTrack();

    Compound* softCompund = new Soft(track);

    observer* crew = new PitCrew();
    Vehicle** raceCars = (Vehicle**) new  RaceCar*[2];
    raceCars[0] = new RaceCar(100, "Tyre 1", 10, 10, 10);
    raceCars[1] = new RaceCar(100, "Tyre 2", 15, 15, 15);


    //
    delete softCompund;
    softCompund = new Medium(track);
    //
    delete softCompund;
    softCompund = new Hard(track);

    RacingLights* lights = new RacingLights();

    Command* start = new TurnOn(raceCars[0]);
    Command* end = new TurnOff(raceCars[0]);

    Strategy* st = new SoftTyreRainyClimateStrategy();
    delete st;
    st = new MediumTyreCloudyClimateStrategy();
    delete st;
    st = new HardTyreSunnyClimateStrategy();

    Strategist* stgst = new Strategist("Alpha", trackLoacation);
    stgst->formulateStrategy();

    Team* hass = new HaasTeam(trackLoacation);

    Event* sunday = new SundayEvent("Myron", start, end);
    hass->setDrivers(drivers);
    hass->setCars(raceCars);

    sunday->addteam(hass);
    sunday->performEvent();

    delete end;
    delete start;
    delete sunday;
    delete hass;
    delete stgst;
    delete st;
    // delete comm;
    delete lights;
    delete eng;
    // delete driver;
    delete track;
    delete softCompund;
    delete crew;
    // delete raceCar;



    cout << endl << endl << endl;

    cout << "shrey's Nonsense...." << endl;  

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
        teams[i] = fact[i]->createTeam(trackLoacation);
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
    for(int i=0; i < 10; i++){
        delete fact[i];
    }


    delete trackLoacation;

    //1.







	return 0;
}
