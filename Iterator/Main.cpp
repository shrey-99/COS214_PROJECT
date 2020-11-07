#include "ConcreteIterator.h"
#include "DynamicArray.h"
#include "RaceResultNode.h"


#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{

	// cout <<  "Running() "   << "\n";

 //    DynamicArray<int>* myDynamicArray = new DynamicArray<int>(8);

 //    myDynamicArray->insert(0, 1); 
 //    myDynamicArray->insert(1, 8); 
 //    myDynamicArray->insert(2, 2); 
 //    myDynamicArray->insert(3, 4); 
 //    myDynamicArray->insert(4, 6); 
 //    myDynamicArray->insert(5, 9); 
 //    myDynamicArray->insert(6, 3); 
 //    myDynamicArray->insert(7, 2); 

 //    ConcreteIterator<int>* i = myDynamicArray->createIterator(); 

	// for(; i->hasNext(); i->next()){
	// 	cout << "Index: " << i->getIndex() << " \tValue: " << i->current() << endl ; 

    cout <<  "main is running()"   << "\n"; 

    DynamicArray* myDynamicArray = new DynamicArray(3);

    RaceResultNode* rrn1 = new RaceResultNode("Wandi",1); 
    RaceResultNode* rrn2 = new RaceResultNode("rulian", 2); 
    RaceResultNode* rrn3 = new RaceResultNode("steve", 3); 

    myDynamicArray->insert(0, rrn1); 
    myDynamicArray->insert(1, rrn2); 
    myDynamicArray->insert(2, rrn3); 

	ConcreteIterator* i = myDynamicArray->createIterator(); 

    for(; i->hasNext(); i->next()){
        i->printCurrent(); 
        cout << endl;  
    }    











    









 
	

	return 0;
}