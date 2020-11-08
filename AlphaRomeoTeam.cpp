#include "AlphaRomeoTeam.h"

AlphaRomeoTeam::AlphaRomeoTeam(Location* l) : Team(l, "Alpha Romeo", "1") {

}

void AlphaRomeoTeam::notify(){
  cout<<"Alpha Romeo Team has finished simulating"<<endl;
}
