#include "Command.h"

Command::Command(vector<Team*> t) // constructor 
{
	teams = t;
}

Command::~Command() // virtual 
{
	
}

vector<Team*> Command::getTeams() 
{
	return teams;
}
