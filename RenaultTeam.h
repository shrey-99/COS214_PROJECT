#ifndef RENAULTTEAM_H
#define RENAULTTEAM_H

#include "Team.h"

using namespace std;

class RenaultTeam : public Team {
public:
    RenaultTeam(Location*);
    void notify();
};

#endif
