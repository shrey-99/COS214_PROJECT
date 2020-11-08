#ifndef ALPHATAURITEAM_H
#define ALPHATAURITEAM_H

#include "Team.h"

using namespace std;

class AlphaTauriTeam : public Team {
public:
    AlphaTauriTeam(Location*);
    void notify();
};

#endif
