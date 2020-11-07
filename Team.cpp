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
