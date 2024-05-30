all: main Cheap Csort

main: main.cpp Cheap.o Csort.o
	g++ main.cpp Cheap.o Csort.o -o ./efile/main
Cheap: Cheap.cpp Cheap.h
	g++ Cheap.cpp Cheap.h -c Cheap.o
Csort: Csort.cpp Csort.h
	g++ Csort.cpp Csort.h -c Csort.o
clean:
	rm *.o efile/main main
