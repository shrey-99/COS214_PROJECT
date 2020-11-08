#include "Team.h"

Team::Team(Location* loc, string name, string season) {
    this->teamName = name;
    this->season = season;
    s = new Strategist("John Murphy", loc);
    
    // equipement
    Equipment[0] = "";
    Equipment[1] = "";
    Equipment[2] = "";
    Equipment[3] = "";
    Equipment[4] = "";
}

void Team::addEngineer() {
}

string Team::getName() {
    return this->teamName;
}

Vehicle* Team::getCars(){
    return *cars;
}

Driver* Team::getDrivers(){
    return *drivers;
}

void Team::setCars(Vehicle* v){
    *cars = v;
}

void Team::setDrivers(Driver* d){
    *drivers = d;
}

void Team::notify(){
  cout<<teamName+" has finished simulating"<<endl;
}
