using namespace std;

#include <iostream>

#include "pet.h"
#include "human.h"

int main () {

  Animal *Ourhouse[4];

  Ourhouse[0] = new Human((char *)"Brenda", (char *)"Fortesque", 21);
  Ourhouse[1] = new Human((char *)"Bob", (char *)"Marley", 52);
  Ourhouse[2] = new Pet((char *)"Robin", 6, (char *)"Dog", 29);
  Ourhouse[3] = new Pet((char *)"Tigger", 10, (char *)"Cat", 50);

  int k;
  for (k=0; k<4; k++) {
    char *Name = Ourhouse[k]->getName();
    int years = Ourhouse[k]->getAge();
    cout << "Living there ... " << Name << " aged " << years << endl;
    cout << Ourhouse[k]->Speak() << endl;
  }

  for (k=0; k<4; k++) {
    delete Ourhouse[k];
  }

  return 0;
}
