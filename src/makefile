.PHONY : clean

CC=g++

CFLAGS=-std=c++11 -Wall -c

target: main.o SimpleCardDeck.o
	$(CC) -o game.out *.o

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp -I core

SimpleCardDeck.o:
	$(CC) $(CFLAGS) core/*.cpp

clean:
	rm -rf *.o
