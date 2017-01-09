#include "ABR.h"
#include  <cassert>

Noeud::Noeud(){
  fg=NULL;
  fd=NULL;
  cle=-1;
}

Noeud::Noeud(Noeud* param1, Noeud* param2, int cle){
  fg=param1;
  fd=param2;
}

