#if !defined(Soft_H)
#define Soft_H
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Compound.h"

using namespace std;

class Soft : public Compound
{
	public:
			Soft(RaceTrack*);
			~Soft();
			string operation();
		
};
#endif
