#include "Command.h"

Command::Command(Vehicle* r) // constructor 
{
	receiver = r;
}

Command::~Command() // virtual 
{
	
}

Vehicle* Command::getReceiver() 
{
	return receiver;
}
