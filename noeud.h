class Noeud {
  protected :
    Noeud* fd_;
    Noeud* fg_;
    int* cle_;
  public :
    Noeud();
    Noeud(int* cle);
    Noeud(Noeud* fg, Noeud* fd, int* cle);



}; 
