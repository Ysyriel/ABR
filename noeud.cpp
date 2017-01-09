#include <iostream>
using namespace std;
#include "noeud.h"
#include  <cassert>

Noeud::Noeud(){
  fg=NULL;
  fd=NULL;
  cle=-1;
}

Noeud::Noeud(Noeud* param1, Noeud* param2, int* cle){
  fg=param1;
  fd=param2;
}

int Noeud::get_cle(){
	return cle;
}
Noeud* Noeud::get_fd(){
	return fd_;
}
Noeud* Noeud::get_fg(){
	return fg_;
}
void Noeud::set_fd(Noeud fd) {
	fd_ = fd;
}
void Noeud::set_fg(Noeud fg) {
	fg_ = fg;
}

void Noeud::Insert(int* cle, Noeud* newNoeud, Noeud* racine){
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

Noeud

int Noeud::max(Noeud* racine){
	Noeud progress = racine;
	while (progress.get_fd() != NULL) {
		progress = progress.get_fd();
	}
	return progress.get_cle;
}

int Noeud::min(Noeud* racine){
	Noeud progress = racine;
	while (progress.get_fg() != NULL) {
		progress = progress.get_fg();
	}
	return progress.get_cle;
}