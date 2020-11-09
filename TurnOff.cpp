#include "TurnOff.h"

TurnOff::TurnOff(vector<Team*> t) : Command(t) // constructor 
{
	
}

TurnOff::~TurnOff() // default destructor
{
	
}

void TurnOff::execute() 
{
	vector<Team*> teams = getTeams();
	vector<Team*>::iterator it = teams.begin();
	
	for (it = teams.begin(); it != teams.end(); ++it)
	{
		Vehicle** receiver = (*it)->getCars();
		
		for (int i = 0; i < 2; i++)
		{
			receiver[i]−>stopEngine();
		}
	}
	
	//getReceiver()->stopEngine();
}

void TurnOff::undo() 
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
