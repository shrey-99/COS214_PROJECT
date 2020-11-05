#if !defined(Hard_H)
#define Hard_H
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Compound.h"

using namespace std;

class Hard : public Compound
{
	public:
			Hard(RaceTrack*);
			~Hard();
			string operation();
		
};
#endif
