#include "TurnOn.h"

TurnOn::TurnOn(RemoteControlVehicle* r) : Command(r) // constructor 
{
	
}

TurnOn::~TurnOn() // default destructor
{
	
}

void TurnOn::execute() 
{
	getReceiver()->startEngine();
}

void TurnOn::undo() 
{
	getReceiver()->stopEngine();
}