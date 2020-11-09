#include "RacingPointTeam.h"

RacingPointTeam::RacingPointTeam(Location* l) : Team(l, "Racing Point", "1") {

}
void RacingPointTeam::notify(){
  cout<<"Racing Point has finished simulating"<<endl;
}
