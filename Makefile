all: main
main: main.cpp Cheap.o Cqsort.o
	g++ main.cpp Cheap.o Cqsort.o -o efile/main
Cheap.o: Cheap.cpp Cheap.h Csort.o
	g++ Cheap.cpp Cheap.h Csort.o -c Cheap.o
Cqsort.o: Cqsort.h Cqsort.cpp Csort.o
	g++ Cqsort.h Cqsort.cpp Csort.o -c Cqsort.o
Csort.o: Csort.cpp Csort.h
	g++ Csort.cpp Csort.h -c Csort.o

clean:
	rm *.o efile/main
