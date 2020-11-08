#ifndef REDBULLTEAM_H
#define REDBULLTEAM_H

#include "Team.h"
#include "Location.h"

using namespace std;

class RedbullTeam : public Team {
public:
    RedbullTeam(Location*);
    void notify();
};

#endif
