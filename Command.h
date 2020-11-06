#ifndef COMMAND_H
#define COMMAND_H
#include <iostream>
#include <string>
#include "RemoteControlVehicle.h"
using namespace std;

class Command
{
	private:
		RemoteControlVehicle* receiver;
	public:	
		Command(RemoteControlVehicle*);
		RemoteControlVehicle* getReceiver();
	
		virtual ~Command();
		virtual void execute() = 0;
		virtual void undo() = 0;
};

#endif