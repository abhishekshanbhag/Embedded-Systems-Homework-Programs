objects = main.o bits.o
CC = gcc
exec = myBitApp


bitprog: main.o bits.o
	$(CC) -o $(exec) $(objects)

main.o: main.c bits.h
	$(CC) -c main.c

bits.o: bits.c bits.h
	$(CC) -c bits.c


clean: 
	rm $(objects) $(exec)
