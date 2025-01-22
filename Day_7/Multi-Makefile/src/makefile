CC=g++
CFLAGS= -Wall -g

.phony: run

run: main.o imp.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

imp.o: imp.cpp
	$(CC) $(CFLAGS) -c imp.cpp
