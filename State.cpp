#include "State.h"
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

State:: State()
{
}
State::State(string p)
{
    
    this->colour=p;
}

State::~State()
{
  
}

State* State::changeLight()
{
	return 0;
}

 void State:: setColour(string c)
{
	colour=c;
}
    
string State:: getColour()
{
	return colour;
}