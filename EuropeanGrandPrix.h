#ifndef EUROPEANGRANDPRIX_H
#define EUROPEANGRANDPRIX_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Location.h"
#include "Event.h"
#include "Team.h"
#include "RacingLights.h"



using namespace std;

class EuropeanGrandPrix: public GrandPrix
{
	
	public:
		EuropeanGrandPrix(Location*);
		~EuropeanGrandPrix();
		void race();
};

#endif