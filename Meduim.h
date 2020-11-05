#if !defined(Medium_H)
#define Medium_H
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Compound.h"

using namespace std;

class Medium : public Compound
{
	public:
			Medium(RaceTrack*);
			~Medium();
			string operation();
		
};
#endif
