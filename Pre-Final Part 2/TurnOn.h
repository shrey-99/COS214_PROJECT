#ifndef TURNON_H
#define TURNON_H
#include "Command.h"
using namespace std;

class TurnOn : public Command
{
	public:	
		TurnOn(Vehicle*);
		~TurnOn();
		void execute();
		void undo();
};

#endif