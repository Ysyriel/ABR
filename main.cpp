#include <iostream>
#include <stdlib.h>
#include "noeud.h"
using namespace std;

int main() {
  int i = 8;
  int j = 9;
  Noeud n(&i);
  Noeud m(&j);
  int a=7;
  Noeud o(&m,&n,&a);
  m.set_cle(&i);
  o.set_fd(&m);
  Noeud c =o.get_fd();
  int b = c.get_cle();
  cout << b << endl;
  
  Noeud ABR;
  ABR.creation();     //creation d'un ABR vide avec la methode 
  
  bool beel;
  beel=ABR.verification();
  cout << beel << endl;
  
  beel=o.verification();
  cout << beel << endl;
  return EXIT_SUCCESS;
}
