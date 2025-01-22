CC=g++
CFLAGS= -Wall -g

OB1=../src/main.o
OB2=../src/imp.o

.phony: all m1 m2 clean

all: m1 m2 clean

m1:
	$(MAKE) -C src

m2:
	$(MAKE) -C exc

clean:
	rm -f src/main.o src/imp.o
