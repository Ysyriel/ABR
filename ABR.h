class Noeud {
	private :
		Noeud* fg;
		Noeud* fd;
		int cle;
	public :
		Noeud();
		Noeud(Noeud* param1, Noeud* param2, int cle);
		void recherche(int* cle, Noeud* racine);
		int max(Noeud* racine);
}
