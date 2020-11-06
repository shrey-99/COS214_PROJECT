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
			string RaceTrackkName;
			string TyreCompund;
	public:
			RaceTrack();
			void setColor(string);
			void setShape(string);
			void setRaceTrackName(string);
			void setTyreCompund(string);
			string getRaceTrackkName();
			string TyreCompund();
			
			string getColor();
			string getShape();
			virtual string operation()=0;

};
#endif
