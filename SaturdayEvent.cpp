#include "SaturdayEvent.h"

SaturdayEvent::SaturdayEvent(string name) : Event(name) {
    
}

void SaturdayEvent::performEvent() {
    this->setStartingPositions();
}

void SaturdayEvent::setStartingPositions() {
    int times[20];
    int cValues[20];
    int counter = 0;
    for(int i=0; i < teams.size(); i++) {
        times[counter] = teams[i]->getCars()[0].calculateTime();
        cValues[counter] = counter++;
        times[counter] = teams[i]->getCars()[1].calculateTime();
        cValues[counter] = counter++;
    }
    sort(times, cValues);
    counter = 0;
    for(int i=0; i < teams.size(); i++) {
        teams[i]->getCars()[0].setPosition(getIndex(cValues, counter)+1);
        counter++;
        teams[i]->getCars()[0].setPosition(getIndex(cValues, counter)+1);
        counter++;
    }
    cout << "The starting positions of all the drivers were set" << endl;
}

void SaturdayEvent::sort(int times[], int cValues[]) { 
    /*for(int i = 0; i < 20; i++) {
      cout <<times[i]<<"\t";
    }*/
    for(int k = 1; k < 20; k++) {
        int temp = times[k];
        int cTemp = cValues[k];
        int j = k-1;
        while(j >= 0 && temp <= times[j]) {
            times[j+1] = times[j];
            cValues[j+1] = cValues[j];
            j = j-1;
        }
        times[j+1] = temp;
        cValues[j+1] = cTemp;
    }
    /*cout<<"\nSorted list is \n";
    for(int i=0; i < 20; i++) {
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

