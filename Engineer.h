#ifndef ENGINEER_H
#define ENGINEER_H
#include <iostream>
#include <string>
using namespace std;

class Engineer
{
	private:
		string name;
		string department;
	public:
		Engineer();
		Engineer(string, string);
		~Engineer();
};

#endif