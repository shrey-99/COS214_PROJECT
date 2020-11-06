#include "TurnOn.h"

TurnOn::TurnOn(Vehicle* r) : Command(r) // constructor 
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
