#include "DynamicArray.h"

#include <string>

using namespace std;

DynamicArray::DynamicArray(int s)
{
	if(s <= 0)
	{
		throw "Invalid size provided";
		//throw error;
	}

	size = s;

	elements = new RaceResultNode*[size];

	for(int e = 0; e < size; e++)
	{
		elements[e] = NULL;
	}

	numElements = 0;
}

DynamicArray:: ~DynamicArray()
{
	for(int i=0;i<size;i++)
		delete elements[i];

	delete [] elements;
	elements=0;
}


void DynamicArray:: insert(int index, RaceResultNode* element)//re-check
{
	int newIndex=index;

	if(index<0)
		return;
	if(index>=size)
	{
		resize(newIndex + 1);
	}

	if(elements[index]!=0)
	{
		for(int y=size; y>=index;y--)
		{
			resize(newIndex + 1);
			if(elements[y])
			{
				elements[y+1]= elements[y];
			}
			else
			{
				elements[y+1]= elements[y];
			}
			newIndex++;
		}
		// elements[index] = new RaceResultNode(element);
		elements[index] = element;
	}
	else
	{
		// elements[index] = new RaceResultNode(element);
		elements[index] = element;
	}

	numElements++;
}


RaceResultNode  DynamicArray::remove(int index)
{
	RaceResultNode other;

	if(elements[index] == 0)
	{
		throw "empty structure";
	}

	else
	{
		other = *(elements[index]);
		elements[index]=0;
		for(int i = index; i < size; i++)
		{
			elements[i] = elements[i + 1];
		}
		elements[size - 1] = 0;
	}
	numElements--;


	return other;
}


RaceResultNode DynamicArray::get(int index) const
{
	if(elements[index]==0)
	{
		throw "empty structure";
	}
	else if(index < 0 || index > numElements)
	{
		throw "invalid index";
	}
	return *(elements[index]);
}


bool DynamicArray::isEmpty()
{
	if(numElements==0)
	{
		return true;
	}
	else
		return false;
}


void DynamicArray:: clear()
{
	for(int s=0;s<size;s++)
	{
		elements[s]=0;
	}
	numElements=0;
}


void  DynamicArray::resize(int howMuch)
{
		RaceResultNode** Array = new RaceResultNode *[howMuch];

		for(int i = 0; i < howMuch; i++)
		{
			Array[i] = 0;
		}

		if(howMuch < numElements)
		{
			for(int i = 0; i < howMuch; i++)
			{
				Array[i] = new RaceResultNode(*(elements[i]));
			}
			numElements = howMuch;
		}
		else
		{
			for(int i = 0; i < numElements; i++)
			{
				Array[i] = new RaceResultNode(*(elements[i]));
			}
		}

		delete [] elements;

		elements = Array;
		size = howMuch;
}


ConcreteIterator* DynamicArray::createIterator()
{
	return new ConcreteIterator(this) ;
}

int DynamicArray:: getNumElements(){
	return numElements;
}


//********************************************************
void DynamicArray::sort(){
    int i, j;
    for (i = 0; i < getNumElements()-1; i++){
	    for (j = 0; j < getNumElements()-i-1; j++){
	        if (elements[j]->getLapTime() > elements[j+1]->getLapTime())
	        	swap(j, j+1);
	            // swap(elements[j], elements[j+1]);
	    }
    }
}

//swap the values at index1 and index2
void DynamicArray::swap(int index1, int index2){
	RaceResultNode* temp = elements[index1];
	elements[index2] = elements[index1];
	elements[index1] = temp;
}

RaceResultNode* DynamicArray :: getPtr(int index){
	return elements[index] ;
}
