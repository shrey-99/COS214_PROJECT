#include "SaturdayEvent.h"

SaturdayEvent::SaturdayEvent(string name) : Event(name) {
    
}

void SaturdayEvent::performEvent() {
    this->setStartingPositions();
}

void SaturdayEvent::setStartingPositions() {
    cout << "The qualifiers has started" << endl;
    int size = teams.size()*2;
    int times[size];
    int cValues[size];
    int counter = 0;
    for(int i=0; i < teams.size(); i++) {
        cout << teams[i]->getName() << endl;
        times[counter] = teams[i]->getCars()[0]->calculateTime();
        cout << "Car one time: " << times[counter] << endl;
        cValues[counter] = counter;
        counter++;
        times[counter] = teams[i]->getCars()[1]->calculateTime();
        cout << "Car two time: " << times[counter] << endl;
        cValues[counter] = counter;
        counter++;
    }
    //cout << "sorting" << endl;
    sort(times, cValues, size);
    counter = 0;
    for(int i=0; i < teams.size(); i++) {
        teams[i]->getCars()[0]->setPosition(getIndex(cValues, counter)+1);
        counter++;
        teams[i]->getCars()[1]->setPosition(getIndex(cValues, counter)+1);
        counter++;
    }
    cout << "The starting positions of all the drivers were set" << endl;
}

void SaturdayEvent::sort(int times[], int cValues[], int size) { 
    /*for(int i = 0; i < size; i++) {
      cout <<times[i]<<"\t";
    }*/
    for(int k = 1; k < size; k++) {
        int temp = times[k];
        int cTemp = cValues[k];
        int j = k-1;
        while(j >= 0 && temp >= times[j]) {
            times[j+1] = times[j];
            cValues[j+1] = cValues[j];
            j = j-1;
        }
        times[j+1] = temp;
        cValues[j+1] = cTemp;
    }
    /*cout<<"\nSorted list is \n";
    for(int i=0; i < size; i++) {
        cout << times[i] << "\t";
    }*/
}

int SaturdayEvent::getIndex(int cValues[], int i) {
    int index = -1;
    for(int t=0; t < 20; t++) {
        if(i == cValues[t]) {
            index = t;
        } 
    }
    return index;
}

