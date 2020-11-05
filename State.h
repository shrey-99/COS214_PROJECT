#ifndef STATE_H
#define STATE_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>


using namespace std;
class State
{
private:
    string colour;   // either Red, Yellow, Green.

public:
    State();
    State(string);
    ~State();
    virtual State* changeLight();
    virtual void displayLight()=0; //handle method
    void setColour(string );
    string getColour();

};

#endif 