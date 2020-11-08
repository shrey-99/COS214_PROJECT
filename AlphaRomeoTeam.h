#ifndef ALPHAROMEOTEAM_H
#define ALPHAROMEOTEAM_H

#include <iostream>
#include "Team.h"
#include "Location.h"

using namespace std;

class AlphaRomeoTeam : public Team {
public:
    AlphaRomeoTeam(Location*);
    void notify();
};

#endif
