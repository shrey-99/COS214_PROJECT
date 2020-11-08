#ifndef RACERESULTNODE_H
#define RACERESULTNODE_H
#include <string>

#include "Driver.h"

#include "Vehicle.h"

using namespace std;

class RaceResultNode
{
public:
	RaceResultNode();

	RaceResultNode(Driver*, Vehicle*);
	~RaceResultNode();

	// string getName();
	int getPosition();

	// void setName(string);
	void setPosition(int);

	void setLapTime(int);
	int getLapTime();

	Driver* getDriver();
	void setDriver(Driver*);

	Vehicle* getVehicle();
	void setVehicle(Vehicle*); 
private:
	// string name;

	int position;

	int lapTime;

	Driver* driver;

	Vehicle* vehicle;


};
#endif
