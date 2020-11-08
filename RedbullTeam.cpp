#include "RedbullTeam.h"

RedbullTeam::RedbullTeam(Location* l) : Team(l, "RedBull", "1") {

}

void RedbullTeam::notify(){
  cout<<"RedBull has finished simulating"<<endl;
}
