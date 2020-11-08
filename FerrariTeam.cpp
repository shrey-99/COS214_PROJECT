#include "FerrariTeam.h"

FerrariTeam::FerrariTeam(Location* l) : Team(l, "Ferrari", "1") {

}

void FerrariTeam::notify(){
  cout<<"Ferrari has finished simulating"<<endl;
}
