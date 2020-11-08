#ifndef MCLARENTEAM_H
#define MCLARENTEAM_H

#include "Team.h"

using namespace std;

class McLarenTeam : public Team {
public:
    McLarenTeam(Location*);
    void notify();
    
};

#endif
