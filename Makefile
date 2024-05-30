all: main
main: main.cpp Cheap.o 
	g++ main.cpp Cheap.o -o efile/main
Cheap.o: Cheap.cpp Cheap.h Csort.o
	g++ Cheap.cpp Cheap.h Csort.o -c Cheap.o
Csort.o: Csort.cpp Csort.h
	g++ Csort.cpp Csort.h -c Csort.o
clean:
	rm *.o efile/main
