.PHONY : clean

CC=g++

CFLAGS=-std=c++11 -Wall -c

target: main.o core_folder
	$(CC) -o game.out *.o

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp -I core

core_folder:
	$(CC) $(CFLAGS) core/*.cpp

clean:
	rm -rf *.o
