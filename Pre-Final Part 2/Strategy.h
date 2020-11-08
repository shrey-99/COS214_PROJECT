#ifndef STRATEGY_H
#define STRATEGY_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Location.h"


using namespace std;
class Strategy
{
	private:
		   int option; //either set to 1,2 or 3
		   int numberOfTimesToPit; //number of times to go to pitstop;
		   int* quarters; //divides the races laps based of which tyre to use in which quarter
		   string* tyresToUse; // array of size 3 to show which tyres to use first and after they finished which ones to use after eg. First use soft then medium then hard;

	public:
	    Strategy();
	    ~Strategy();
	    virtual void formulateStrategy(Location*)=0; //algorithm method
	    void printStrategy();
	    int* getQuarters();
	    string* getTyresToUse();
	    void setOption(int);
	    void setNumberOfTimesToPit(int);
	   

};

#endif 