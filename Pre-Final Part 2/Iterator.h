#ifndef ITERATOR_H
#define ITERATOR_H 

#include "RaceResultNode.h"

using namespace std;

class Iterator
{
public:
	Iterator(){};
	~Iterator(){};
	
	virtual void first()=0;

	virtual void next()=0;

	virtual RaceResultNode current()=0;

	virtual bool hasNext()=0; 
};
#endif