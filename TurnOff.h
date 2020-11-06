#ifndef TURNOFF_H
#define TURNOFF_H
#include "Command.h"
using namespace std;

class TurnOff : public Command
{
	public:	
		TurnOff(Vehicle*);
		~TurnOff();
		void execute();
		void undo();
};

#endif
