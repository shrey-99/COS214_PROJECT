#ifndef RACERESULTNODE_H
#define RACERESULTNODE_H 
#include <string>

using namespace std;

class RaceResultNode
{
public:
	RaceResultNode(); 
	
	RaceResultNode(string, int);
	~RaceResultNode();
	
	string getName();
	int getPosition();

	void setName(string);
	void setPosition(int);
private:
	string name;
	int position;
};
#endif