
sample: main.o SimpleCardDeck.o
		g++ -std=c++11 -o game.out *.o

main.o: main.cpp
		g++ -std=c++11 -c main.cpp -I core
SimpleCardDeck.o: 
		g++ -std=c++11 -c core/*.cpp