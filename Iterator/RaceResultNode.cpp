#include "RaceResultNode.h"
#include <string>
#include <iostream>
using namespace std;

RaceResultNode::RaceResultNode(string name, int position){
	this->name = name;
	this->position = position;
}

RaceResultNode::RaceResultNode(){
	this->name = "";
	this->position = 0;
}

RaceResultNode::~RaceResultNode(){
	cout<<"node "+ name + " deleted.";
}

string RaceResultNode::getName(){
	return name;
}


int RaceResultNode::getPosition(){
	return position;
}


void RaceResultNode::setName(string  name){
	this->name = name;
}

void RaceResultNode::setPosition(int position){
	this->position = position;
}
