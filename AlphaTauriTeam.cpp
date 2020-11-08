#include "AlphaTauriTeam.h"

AlphaTauriTeam::AlphaTauriTeam(Location* l) : Team(l, "AlphaTauri", "1") {

}

void AlphaTauriTeam::notify(){
  cout<<"AlphaTauri Team has finished simulating"<<endl;
}
