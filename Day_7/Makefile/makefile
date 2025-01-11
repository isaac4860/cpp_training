#Compiler and Flags
cc=g++
cflags= -Wall -g

.phony: prep clean

prep: final clean

final: main.o imp.o
	$(cc) $(cflags) -o final main.o imp.o

main.o: main.cpp
	$(cc) $(cflags) -c main.cpp

imp.o: imp.cpp
	$(cc) $(cflags) -c imp.cpp

clean:
	rm -f main.o imp.o
