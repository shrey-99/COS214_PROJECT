#include "Strategy.h"
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

Strategy:: Strategy()
{
	// std::cout << "creating strategy" << '\n';
	 quarters=new int[3];
	 tyresToUse=new string[3];
}


Strategy::~Strategy()
{
	// std::cout << "deleting strategy" << '\n';
	delete [] quarters;
	delete [] tyresToUse;

}


 void Strategy:: printStrategy()
{
	if(option==1) //Sunny
	{
		cout<<"PRINTING OUT FORMULATED STRATEGY"<<endl;
		cout<<"The Strategist has concluded that the best suited strategy to use during the game is the Hard-Tyre and Sunny Weather Strategy."<<endl;
		cout<<"The cars are required to only go to the pit stop "<<numberOfTimesToPit<<" number of times in order to complete race quicker."<<endl;
		cout<<"The cars are required to use "<<tyresToUse[0]<<" for the first "<<quarters[0]<<" laps."<<endl;
		cout<<"The cars are required to use "<<tyresToUse[1]<<" for the first "<<quarters[1]<<" laps."<<endl;
		cout<<"The cars are required to use "<<tyresToUse[2]<<" for the first "<<quarters[2]<<" laps."<<endl;
		cout<<"PRINTING COMPLETE"<<endl;


	}
	else if(option==2) //cloudy
	{
		cout<<"PRINTING OUT FORMULATED STRATEGY"<<endl;
		cout<<"The Strategist has concluded that the best suited strategy to use during the game is the Medium-Tyre and Cloudy Weather Strategy."<<endl;
		cout<<"The cars are required to only go to the pit stop "<<numberOfTimesToPit<<" number of times in order to complete race quicker."<<endl;
		cout<<"The cars are required to use "<<tyresToUse[0]<<" for the first "<<quarters[0]<<" laps."<<endl;
		cout<<"The cars are required to use "<<tyresToUse[1]<<" for the first "<<quarters[1]<<" laps."<<endl;
		cout<<"The cars are required to use "<<tyresToUse[2]<<" for the first "<<quarters[2]<<" laps."<<endl;
		cout<<"PRINTING COMPLETE"<<endl;
	}
	else if(option==3) //rainy
	{
		cout<<"PRINTING OUT FORMULATED STRATEGY"<<endl;
		cout<<"The Strategist has concluded that the best suited strategy to use during the game is the Soft-Tyre and Rainy Weather Strategy."<<endl;
		cout<<"The cars are required to only go to the pit stop "<<numberOfTimesToPit<<" number of times in order to complete race quicker."<<endl;
		cout<<"The cars are required to use "<<tyresToUse[0]<<" for the first "<<quarters[0]<<" laps."<<endl;
		cout<<"The cars are required to use "<<tyresToUse[1]<<" for the first "<<quarters[1]<<" laps."<<endl;
		cout<<"The cars are required to use "<<tyresToUse[2]<<" for the first "<<quarters[2]<<" laps."<<endl;
		cout<<"PRINTING COMPLETE"<<endl;
	}
}

 int* Strategy:: getQuarters()
{
	return quarters;
}

string* Strategy:: getTyresToUse()
{
	return tyresToUse;
}

void Strategy:: setOption(int opt)
{
	option=opt;
}

void Strategy::setNumberOfTimesToPit(int num)
{
	numberOfTimesToPit=num;
}
