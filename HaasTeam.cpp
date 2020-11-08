#include "HaasTeam.h"

HaasTeam::HaasTeam(Location* l) : Team(l, "Haas", "1") {

}

void HaasTeam::notify(){
  cout<<"Haas has finished simulating"<<endl;
}
