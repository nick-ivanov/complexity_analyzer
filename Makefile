# Makefile for complexity_analyzer

CC = gcc

compan: compan.o
	$(CC) -o compan compan.o

compan.o: compan.c
	$(CC) -c compan.c

clean:
	rm -f *.o compan