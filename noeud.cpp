#include <iostream>
using namespace std;
#include "noeud.h"
#include  <cassert>

Noeud::Noeud(){
  fg_=nullptr;
  fd_=nullptr;
  cle_=nullptr;
}

Noeud::Noeud(int* cle){
  fg_=nullptr;
  fd_=nullptr;
  cle_=cle;
}

Noeud::Noeud(Noeud* fg, Noeud* fd, int* cle){
  fg_=fg;
  fd_=fd;
  cle_=cle;
}


