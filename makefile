all: ABR

ABR: Main.o ABR.o

g++ Main.o ABR.o -o Main

Main.o: Main.cpp ABR.h

g++ -c Main.cpp -o Main.o

ABR.o: ABR.cpp ABR.h

g++ -c ABR.cpp -o ABR.o

clean:
	rm -f *.o


