#include "MercedesTeam.h"

MercedesTeam::MercedesTeam(Location* l) : Team(l, "Mercedes", "1") {

}

void MercedesTeam::notify(){
  cout<<"Mercedes has finished simulating"<<endl;
}
