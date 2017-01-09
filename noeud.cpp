#include <iostream>
using namespace std;
#include "noeud.h"
#include  <cassert>

Noeud::Noeud(){
  fg_=nullptr;
  fd_=nullptr;
  cle_=nullptr;
}

/*
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

int Noeud::get_cle(){
	return *cle_;
}

Noeud Noeud::get_fd(){
	return *fd_;
}

Noeud Noeud::get_fg(){
	return *fg_;
}

void Noeud::set_fd(Noeud* fd) { // &noeud en entrée
	fd_ = fd;
}

void Noeud::set_fg(Noeud* fg) {
	fg_ = fg;
}

void Noeud::set_cle(int* cle) {
	cle_ = cle;
}
*/



Noeud Noeud::creation(){
	return Noeud();
}

bool Noeud::verification(){
	if (cle_==nullptr) return true;
	return false;
		
}


// recherche vide arrivée? si non a gauche ou a droite? appel sur les noeuds successifs
