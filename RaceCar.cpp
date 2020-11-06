#include "RaceCar.h"

RaceCar::RaceCar() {
    this->acceleration = 0;
    this->braking = 0;
    this->handling = 0;
    this->damage = 0;
    this->startingPosition = 0;
    this->tyres = "No tyres set";
}

RaceCar::RaceCar(int fuel, string tyres, int a, int b, int h) : Vehicle(fuel){
    this->acceleration = a;
    this->braking = b;
    this->handling = h;
    this->damage = 0;
    this->startingPosition = 0;
    this->tyres = tyres;
}

RaceCar::~RaceCar() {

}

int RaceCar::getAccelerationInfo() {
    return this->acceleration;
}

int RaceCar::getBrakingInfo() {
    return this->braking;
}

int RaceCar::getHandlingInfo() {
    return this->handling;
}

int RaceCar::getDamage() {
    return this->damage;
}

int RaceCar::getPosition() {
    return this->startingPosition;
}

string RaceCar::getTyres() {
    return this->tyres;
}

int RaceCar::getTyreWare(){
    return TyreWare;
}

void RaceCar::setAcceleration(int a) {
    acceleration = a;
}

void RaceCar::setBraking(int b) {
    braking = b;
}

void RaceCar::setHandling(int h) {
    handling = h;
}

void RaceCar::setDamage(int d) {
    damage = d;
}

void RaceCar::setPosition(int pos) {
    startingPosition = pos;
}

void RaceCar::setTyres(string t) {
    tyres = t;
}

void RaceCar::setTyreWare(int tw){
    TyreWare = tw;
}
