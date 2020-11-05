#if !defined(Compund_H)
#define Compund_H
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "RaceTrack.h"

using namespace std;

class Compound : public RaceTrack
{
	private:
			RaceTrack *raceTrack;
	public:
			Compound();
			~Compound();
			string operation();
			void setTrack(RaceTrack*);
			RaceTrack *getTrack();
			
	
	
};
#endif
