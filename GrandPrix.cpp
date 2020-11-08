#include "GrandPrix.h"

GrandPrix::GrandPrix() 
{
   cout<<"Created A Grand Prix."<<endl;
}

GrandPrix::~GrandPrix() 
{
	cout<<"Grand Prix Deleted."<<endl;
	delete location;
}

void GrandPrix::setLocation(Location* location)
{
    this->location=location;
}

string* GrandPrix::getFlags()
{
    return flags;
}

