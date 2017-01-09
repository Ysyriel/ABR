class Noeud {
 protected :
  Noeud* fd_;
  Noeud* fg_;
  int *cle;

 public :
  // Getters
  Noeud* get_fg();
  Noeud* get_fd();
  int get_cle();
  // Setters
  void set_fd(Noeud fd);
  void set_fg(Noeud fg)
!
}; 