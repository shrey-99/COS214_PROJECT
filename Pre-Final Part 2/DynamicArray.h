#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include "LinearStructure.h"



class ConcreteIterator;

using namespace std;

class DynamicArray : public LinearStructure
{
	// friend class ConcreteIterator;
	private:

		void resize(int howMuch);

		RaceResultNode** elements; // an array of  RaceResultNode pointers

		int size;

		int numElements;

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


		/***************************************************************************************
		 *Add these functions

			* void swap(int index1, int index2);
				* Swap the values at index1 and index2

			*void sort();
				* sorts the aggregate array according to lap times

		*/

		//***************************************************************************************
		//Sorts the aggregate array according to lap times
		void sort();
		void swap(int index1, int index2);
		RaceResultNode* getPtr(int);

};

#include "ConcreteIterator.h"

#endif
