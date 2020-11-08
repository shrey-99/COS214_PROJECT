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
			string RaceTrackName;
			string TyreCompound;
	public:
			RaceTrack();
			void setColor(string);
			void setShape(string);
			void setRaceTrackName(string);
			void setTyreCompound(string);
			string getRaceTrackkName();
			string getTyreCompound();

			string getColor();
			string getShape();
			virtual string operation()=0;

};
#endif
