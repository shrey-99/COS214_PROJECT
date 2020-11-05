#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "RedLight.cpp"
#include "YellowLight.cpp"
#include "GreenLight.cpp"
#include "State.cpp"
#include "RacingLights.cpp"

// This main was created to work with a windows compiler, if you using linux make sure to change the headeer files above into .h rather than .cpp
//eg.  #include "RedLight.cpp" must be changed into #include "RedLight.h"
using namespace std;

int main()
{
	cout<<"****************************************************************************************************************************"<<endl;
	cout<<"Assuming Race is about to begin and necessary operations have been initialized we are now displaying the traffic light at the beginning of the race."<<endl;
	cout<<"****************************************************************************************************************************"<<endl;
	RacingLights* Lights= new RacingLights();
	cout<<"****************************************************************************************************************************"<<endl;
	cout<<"Lets Manually Change the Lights. "<<endl;
	cout<<"****************************************************************************************************************************"<<endl;
	Lights->displayCurrentLight();
	Lights->changeState();
	Lights->changeState();
	cout<<"****************************************************************************************************************************"<<endl;
	cout<<"Lets restart the process but this time make the lights change automatically"<<endl;
	
	
	RacingLights* Lights2= new RacingLights();
	cout<<"****************************************************************************************************************************"<<endl;
	cout<<"Lets Automatically Change the Lights. "<<endl;
	cout<<"****************************************************************************************************************************"<<endl;
	Lights2->automaticStateChange();
	cout<<"****************************************************************************************************************************"<<endl;
	delete Lights;
	delete Lights2;
	


    return 0;
}