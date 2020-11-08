#include "Team.h"

Team::Team(Location* loc, string name, string season) {
    this->teamName = name;
    this->season = season;
    strategist = new Strategist("John Murphy", loc);

    // equipement
    Equipment[0] = "";
    Equipment[1] = "";
    Equipment[2] = "";
    Equipment[3] = "";
    Equipment[4] = "";
}

Team::~Team() {
//     for(int i=0; i < engineers.size(); i++) {
//         delete engineers[i];
//     }
//     delete pitcrew;
//     delete strategist;
//     delete truck;
//     for(int i=0; i < 2; i++) {
//         delete drivers[i];
//         delete cars[i];
//     }
//     delete drivers;
//     delete cars;
}

void Team::addEngineer() {
}

string Team::getName() {
    return this->teamName;
}

Vehicle** Team::getCars(){
    return cars;
}

Driver** Team::getDrivers(){
    return drivers;
}

void Team::setCars(Vehicle** v){
    cars = v;
}

void Team::setDrivers(Driver** d){
    drivers = d;
}

void Team::notify(){
  cout<<teamName+" has finished simulating"<<endl;
}

// ******************************************************************
Driver* Team::getDriverAt(int index){
    return drivers[index];
}

Vehicle* Team::getCarAt(int index){
    return cars[index];
}
