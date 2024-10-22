#include "TurnOff.h"

TurnOff::TurnOff(Vehicle* r) : Command(r) // constructor 
{
	
}

TurnOff::~TurnOff() // default destructor
{
	
}

void TurnOff::execute() 
{
	getReceiver()->stopEngine();
}

void TurnOff::undo() 
{
	getReceiver()->startEngine();
}
