#if !defined(BasicRaceTrack_H)
#define BasicRaceTrack_H
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "RaceTrack.h"

using namespace std;

class BasicRaceTrack : public RaceTrack
{
	public:
			BasicRaceTrack();
			string operation();
};
#endif
