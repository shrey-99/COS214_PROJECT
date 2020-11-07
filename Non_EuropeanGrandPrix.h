#ifndef NON_EUROPEANGRANDPRIX_H
#define NON_EUROPEANGRANDPRIX_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Location.h"
#include "Event.h"
#include "Team.h"
#include "RacingLights.h"



using namespace std;

class Non_EuropeanGrandPrix: public GrandPrix
{
	
	public:
		Non_EuropeanGrandPrix(Location*);
		~Non_EuropeanGrandPrix();
		void race();
};

#endif