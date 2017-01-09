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

void Insert(int* cle, Noeud* newNoeud, Noeud* racine){
	Noeud insert = racine.recherche(cle, racine);
	Noeud fd = insert.get_fd();
	Noeud fg = insert.get_fg();
	if ( fd == NULL && fg == NULL){
		if( cle < newNoeud.get_cle()) {
			insert.set_fd(newNoeud);
		}
		else if(cle > newNoeud.get_cle()){
			insert.set_fg(newNoeud);
		}
	}
}
