class Noeud {
  protected :
    Noeud* fd_;
    Noeud* fg_;
    int* cle_;
  public :
//Constructeurs
    Noeud();
    Noeud(int* cle);
    Noeud(Noeud* fg, Noeud* fd, int* cle);
//Getteurs  
	Noeud get_fg();
	Noeud get_fd();
	int get_cle();
//Setters
    void set_fd(Noeud* fd);
    void set_fg(Noeud* fg);
    void set_cle(int* cle);
//Methodes
    Noeud creation();
	bool verification();
}; 
