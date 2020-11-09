#include "TurnOn.h"

TurnOn::TurnOn(vector<Team*> t) : Command(t) // constructor 
{
	
}

TurnOn::~TurnOn() // default destructor
{
	
}

void TurnOn::execute() 
{
	vector<Team*> teams = getTeams();
	vector<Team*>::iterator it = teams.begin();
	
	for (it = teams.begin(); it != teams.end(); ++it)
	{
		Vehicle** receiver = (*it)->getCars();
		
		for (int i = 0; i < 2; i++)
		{
			receiver[i]−>startEngine();
		}
	}
	
	//getReceiver()->startEngine();
}

void TurnOn::undo() 
{
	vector<Team*> teams = getTeams();
	vector<Team*>::iterator it = teams.begin();
	
	for (it = teams.begin(); it != teams.end(); ++it)
	{
		Vehicle** receiver = (*it)->getCars();
		
		for (int i = 0; i < 2; i++)
		{
			receiver[i]−>startEngine();
		}
	}
	
	//getReceiver()->stopEngine();
}
