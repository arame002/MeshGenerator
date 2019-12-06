CC=g++ -std=c++11

CFLAGS=-c -Wall

all: program

program: main.o common.o Mesh.o Cell.o Tissue.o
		$(CC) main.o common.o Mesh.o Cell.o Tissue.o -o program

main.o: main.cpp
		$(CC) $(CFLAGS) main.cpp

common.o: common.cpp
		$(CC) $(CFLAGS) common.cpp

Mesh.o: Mesh.cpp
		$(CC) $(CFLAGS) Mesh.cpp

Cell.o: Cell.cpp
		$(CC) $(CFLAGS) Cell.cpp

Tissue.o: Tissue.cpp
		$(CC) $(CFLAGS) Tissue.cpp

clean:
		rm -rf *o program
