#include "McLarenTeam.h"

McLarenTeam::McLarenTeam(Location* l) : Team(l, "McLaren", "1") {

}

void McLarenTeam::notify(){
  cout<<"McLaren has finished simulating"<<endl;
}
