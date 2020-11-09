#include "Command.h"

Command::Command(vector<Team*> teams) // constructor 
{
	receiver = teams;
}

Command::~Command() // virtual 
{
	
}

vector<Team*> Command::getReceiver() 
{
	return receiver;
}
