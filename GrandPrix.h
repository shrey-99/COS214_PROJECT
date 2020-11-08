#ifndef GRANDPRIX_H
#define GRANDPRIX_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Location.h"
#include "Event.h"
#include "Team.h"
#include "RacingLights.h"



using namespace std;

class GrandPrix
{
	private:
		Location* location;
		Event** events;
		string flags[5];
	
	public:
		GrandPrix();
		~GrandPrix();
		string* getFlags();
		void setLocation(Location*);
		virtual void race()=0;
};

#endif
