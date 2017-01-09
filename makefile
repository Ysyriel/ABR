all: main

main: main.o noeud.o

	g++ main.o noeud.o -o main

main.o: main.cpp noeud.h

	g++ -c main.cpp -o main.o

noeud.o: noeud.cpp noeud.h

	g++ -c noeud.cpp -o noeud.o

clean:
	rm -f *.o


