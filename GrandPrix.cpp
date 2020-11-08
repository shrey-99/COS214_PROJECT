#include "GrandPrix.h"

GrandPrix::GrandPrix() 
{
   cout<<"Created A Grand Prix."<<endl;
	
   flags[0] = "Raising Green flag.";
   flags[1] = "Raising Yellow flag.";
   flags[2] = "Raising Red flag.";
   flags[3] = "Raising Black flag.";
   flags[4] = "Raising Checkered flag.";
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
    return *flags;
}

