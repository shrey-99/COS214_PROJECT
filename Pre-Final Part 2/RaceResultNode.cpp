#include "RaceResultNode.h"
#include <string>
#include <iostream>
using namespace std;

RaceResultNode::RaceResultNode(){
	// this->name = "";
	this->position = 0;
	this->lapTime = 0;
	this->driver = NULL;
	this->vehicle = NULL;
}

RaceResultNode::RaceResultNode(Driver* driver, Vehicle* vehicle){
	// this->name = name;
	this->position = position;
	this->lapTime = 0;
	this->driver = driver;
	this->vehicle = vehicle;
}


RaceResultNode::~RaceResultNode(){
	// cout<<"node "+ name + " deleted.";
}



int RaceResultNode::getPosition(){
	return position;
}


// void RaceResultNode::setName(string  name){
// 	this->name = name;
// }

void RaceResultNode::setPosition(int position){
	this->position = position;
}


//************************************************************
void RaceResultNode::setLapTime(int lapTime){
	this->lapTime += lapTime;
}


int RaceResultNode::getLapTime(){
	return lapTime;
}


Driver* RaceResultNode :: getDriver(){
	return this->driver;
}

void RaceResultNode :: setDriver(Driver* driver){
	this->driver = driver;
}

Vehicle* RaceResultNode :: getVehicle(){
	return this->vehicle;
}



void RaceResultNode :: setVehicle(Vehicle* vehicle){
	this->vehicle = vehicle ;
}

// string RaceResultNode::getName(){
// 	return driver->getName();
// }
