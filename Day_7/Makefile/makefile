#Compiler and Flags
cc=g++
cflags= -Wall -g

.phony: prep clean

prep: final clean

final: main.o imp.o alt/alt.o
	$(cc) $(cflags) -o final/final main.o imp.o alt/alt.o

main.o: main.cpp
	$(cc) $(cflags) -c main.cpp

imp.o: imp.cpp
	$(cc) $(cflags) -c imp.cpp

alt.o: alt/alt.cpp
	$(cc) $(cflags) -c alt/alt.o

clean:
	rm -f main.o imp.o alt/alt.o
