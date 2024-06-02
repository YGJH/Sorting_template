all: main
main: main.cpp Cheap.o Cqsort.o
	g++ main.cpp Cheap.o Cqsort.o -o efile/main
Cheap.o: Cheap.cpp Cheap.h Cnode.o
	g++ Cheap.cpp Cheap.h Cnode.o -c Cheap.o
Cqsort.o: Cqsort.h Cqsort.cpp Cnnode.o
	g++ Cqsort.h Cqsort.cpp Cnnode.o -c Cqsort.o
Cnode.o: Cnode.cpp Cnode.h
	g++ Cnode.cpp Cnode.h -c Cnode.o

Cnnode.o: Cnnode.cpp Cnnode.h
	g++ Cnnode.cpp Cnnode.h -c Cnnode.o

clean:
	rm *.o efile/main *.gch
