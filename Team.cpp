#include "Team.h"

Team::Team(string name, string season) {
    this->teamName = name;
    this->season = season;
}

void Team::addEngineer() {
}

string Team::getName() {
    return this->teamName;
}