CFLAGS=-std=c++11 -Wall -Wextra

all: main

main: main.o noeud.o
	g++ $(CFLAGS) main.o noeud.o -o main

main.o: main.cpp noeud.h
	g++ $(CFLAGS) -c main.cpp -o main.o

noeud.o: noeud.cpp noeud.h
	g++ $(CFLAGS) -c noeud.cpp -o noeud.o

clean:
	rm -f *.o


