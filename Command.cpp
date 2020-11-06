#include "Command.h"

Command::Command(RemoteControlVehicle* r) // constructor 
{
	receiver = r;
}

Command::~Command() // virtual 
{
	
}

RemoteControlVehicle* Command::getReceiver() 
{
	return receiver;
}