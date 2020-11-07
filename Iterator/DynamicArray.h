#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include "LinearStructure.h"



class ConcreteIterator; 

using namespace std; 

class DynamicArray : public LinearStructure
{
	// friend class ConcreteIterator; 

	public:
		// ConcreteIterator<RaceResultNode>* createIterator(); 
		ConcreteIterator* createIterator(); 

		DynamicArray(int s);
		
		// DynamicArray(const DynamicArray& other);
		
		// virtual DynamicArray* clone();
		
		virtual ~DynamicArray();
		
		virtual void insert(int index,  RaceResultNode*);
		
		virtual RaceResultNode remove(int index);
		
		virtual RaceResultNode get(int index) const;
		
		virtual bool isEmpty();
		
		virtual void clear();

		int getNumElements();
		
	private:
		
		void resize(int howMuch);
				
		RaceResultNode** elements;
		
		int size;

		int numElements;
};

#include "ConcreteIterator.h"

#endif
