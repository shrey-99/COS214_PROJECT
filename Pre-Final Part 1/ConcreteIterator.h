#ifndef CONCRETEITERATOR_H
#define CONCRETEITERATOR_H 

#include "Iterator.h"

#include "DynamicArray.h"

using namespace std; 



class ConcreteIterator : public Iterator
{
	friend class DynamicArray;

	public:
		ConcreteIterator();
		
		~ConcreteIterator();

		virtual void first();

		virtual void next();

		virtual RaceResultNode current();

		virtual bool hasNext(); 

		int getIndex();

		void printCurrent();

		//*************************************************************************
		void updateTyreWare();

		void updateFuel();  

		void calculateLapTime();


		//************************************************************************

	protected:
		DynamicArray* aggregateCopy;
		ConcreteIterator(DynamicArray* aggregateCopy); 
		int index;
};

#endif