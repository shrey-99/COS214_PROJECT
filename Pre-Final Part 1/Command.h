#ifndef COMMAND_H
#define COMMAND_H
#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;

class Command
{
	private:
		Vehicle* receiver;
	public:	
		Command(Vehicle*);
		Vehicle* getReceiver();
	
		virtual ~Command();
		virtual void execute() = 0;
		virtual void undo() = 0;
};

#endif
