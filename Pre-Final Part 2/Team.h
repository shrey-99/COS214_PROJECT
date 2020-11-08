#ifndef TEAM_H
#define TEAM_H

#include <string>
#include <vector>
#include "Driver.h"
#include "Engineer.h"
#include "observer.h"
#include "Vehicle.h"
#include "Strategist.h"

using namespace std;

class Team {
private:
    string teamName;
    string season;
    vector<Engineer*> engineers; //engineers
    observer* pitcrew;//pitCrew
    Strategist* strategist; //strategist
    Vehicle** cars;//vehicle
    Vehicle* truck;
    string Equipment[5];
    Driver** drivers;

public:
    Team(Location*, string, string);
    ~Team();
    void addEngineer();
    string getName();
    Vehicle** getCars();
    Driver** getDrivers();
    void setCars(Vehicle**);
    void setDrivers(Driver**);
    virtual void notify();


    // **************************************************************
    Driver* getDriverAt(int);

    Vehicle* getCarAt(int);
};

#endif
