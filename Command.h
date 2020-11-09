#ifndef COMMAND_H
#define COMMAND_H
#include <iostream>
#include <string>
#include "Team.h"
using namespace std;

class Command
{
	private:
		vector<Team*> teams;
		//Vehicle* receiver;
	public:	
		Command(vector<Team*>);
		//Command(Vehicle*);
		vector<Team*> getTeams();
		//Vehicle* getReceiver();
	
		virtual ~Command();
		virtual void execute() = 0;
		virtual void undo() = 0;
};

#endif
