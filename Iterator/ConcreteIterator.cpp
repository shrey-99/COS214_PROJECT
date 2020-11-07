#include <iostream>
#include "ConcreteIterator.h"
using namespace std; 


ConcreteIterator::ConcreteIterator(){
	index = 0;
}

ConcreteIterator::~ConcreteIterator(){

}

void ConcreteIterator::first(){
	index = 0;
}

void ConcreteIterator::next(){
	index++;
}

RaceResultNode ConcreteIterator::current(){
	return aggregateCopy->get(index);
}

bool ConcreteIterator :: hasNext(){
	if(index == aggregateCopy->getNumElements())
		return false; 

	return true; 
}


int ConcreteIterator :: getIndex(){
	return index; 
}

void ConcreteIterator :: printCurrent(){
	cout << aggregateCopy->get(index).getName()  << "\n"; 
}

ConcreteIterator :: ConcreteIterator(DynamicArray* aggregateCopy){
	this->aggregateCopy = aggregateCopy; 
	index = 0; 
} 

