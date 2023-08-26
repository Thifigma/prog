CFLAS = -Wall -std=c17 -g -Wextra

CC = gcc 

	objetos = mainSet.o Set.o

all: mainSet.o Set.o
	$(CC) -o main mainSet.o Set.o

mainSet.o: mainSet.c
	$(CC) -c mainSet.c $(CFLAGS)

Set.o: Set.h Set.c
	$(CC) -c Set.c $(CFLAGS)

clean: 
	rm -f $(objetos) main