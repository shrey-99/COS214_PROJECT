#ifndef LINEARSTRUCTURE_H
#define LINEARSTRUCTURE_H

#include <iostream>

#include "RaceResultNode.h"

using namespace std;

class LinearStructure
{
	public:
		
		virtual ~LinearStructure(){}
		
		// virtual LinearStructure* clone() = 0;
		
		virtual void insert(int index, RaceResultNode* element) = 0;
		
		virtual RaceResultNode remove(int index) = 0;
		
		virtual RaceResultNode get(int index) const = 0;
				
		virtual bool isEmpty() = 0;
		
		virtual void clear() = 0;
	
};
 
#endif
