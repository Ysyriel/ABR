#include <iostream>
#include <stdlib.h>
#include "noeud.h"
using namespace std;

int main() {
  Noeud ABR;
  ABR.creation();     //creation d'un ABR vide avec la methode 
  
  bool beel;
  beel=ABR.verification();
  cout << beel << endl;
  
  return EXIT_SUCCESS;
}
