#include "WilliamsTeam.h"

WilliamsTeam::WilliamsTeam(Location* l) : Team(l, "Williams", "1") {

}

void WilliamsTeam::notify(){
  cout<<"Williams has finished simulating"<<endl;
}
