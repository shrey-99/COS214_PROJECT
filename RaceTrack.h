#if !defined(RaceTrack_H)
#define RaceTrack_H
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

class RaceTrack
{
	private:
			string shape;
			string color;
	public:
			RaceTrack();
			void setColor(string);
			void setShape(string);
			string getColor();
			string getShape();
			virtual string operation()=0;

};
#endif
