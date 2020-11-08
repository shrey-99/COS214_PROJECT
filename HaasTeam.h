#ifndef HAASTEAM_H
#define HAASTEAM_H

#include "Team.h"

using namespace std;

class HaasTeam : public Team {
public:
    HaasTeam(Location*);
    void notify();
    
};

#endif
