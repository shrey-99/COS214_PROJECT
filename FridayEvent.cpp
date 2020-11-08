#include "FridayEvent.h"

FridayEvent::FridayEvent(string name) : Event(name) {

}

void FridayEvent::performEvent() {
  for (int i = 0; i < teams.size(); ++i)
    this->simulator(teams[i]);
  //  this->windTunnel();
}

void FridayEvent::simulator(Team*t) {
    cout << "The simulator has turned on" << endl;
    cout << "Team: "+t->getName()+" is using the simulator"<< endl;
  //  vector<Driver*> d = t->getDrivers();
  //  vector<Vehicle*> c = t->getCars();
    int lp = t->getCars()[0]->calculateTime();
    cout << "Driver 1:  "+t->getDrivers()[0]->getName()+" has laptime "+ to_string(lp)+ "s"<< endl;
    cout << "Sending to car 1 to windTunnel"<<endl;
    windTunnel(t->getCars()[0]);
    cout<<endl;

    lp = t->getCars()[1]->calculateTime();
    cout << "Driver 2:  "+t->getDrivers()[1]->getName()+" has laptime "+ to_string(lp)+ "s"<< endl;
    cout << "Sending to car 2 to windTunnel"<<endl;
    windTunnel(t->getCars()[1]);
    cout<<endl;

    t->notify();
  //  cout << "Driver 2:  "+d[2]->getName()+" has laptime "+c[1]->calculateTime()+<< endl;
}

void FridayEvent::windTunnel(Vehicle*v) {
    v->increaseSpecs();
    cout << "The windtunned was used" << endl;
}
