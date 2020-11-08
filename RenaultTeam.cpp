#include "RenaultTeam.h"

RenaultTeam::RenaultTeam(Location* l) : Team(l, "Renault", "1") {

}

void RenaultTeam::notify(){
  cout<<"Renault has finished simulating"<<endl;
}
