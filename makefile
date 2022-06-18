CC = gcc
CFLAGS = -Wall
EXECUTABLE = plstack
plstack: plstack.o main.o
	$(CC) $(CFLAGS) plstack.o main.o -o $(EXECUTABLE)
plstack.o: plstack.h
main.o: main.c
clean: 
	rm -rf *.o 
leaks: 
	valgrind --leak-check=yes ./$(EXECUTABLE)