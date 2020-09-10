CC=g++
CFLAGS=-I.

default: main.o Vector.o Matrix.o
	$(CC) -o output main.o Vector.o Matrix.o

main.o: main.cpp Vector.h Matrix.h
	$(CC) $(CFLAGS) -c main.cpp

Matrix.o: Matrix.cpp Matrix.h
	$(CC) $(CFLAGS) -c Matrix.cpp

Vector.o: Vector.cpp Vector.h
	$(CC) $(CFLAGS) -c Vector.cpp