#include "Driver.h"

Driver::Driver(string name) {
    this->name = name;
    this->points = 0;
}

string Driver::getName() {
    return this->name;
}

void Driver::updatePoints(int update) {
    this->points += update;
}

int Driver::getPoints() {
    return this->points;
}