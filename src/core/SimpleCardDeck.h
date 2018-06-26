#ifndef SIMPLE_CARD_DECK_H_ 
#define SIMPLE_CARD_DECK_H_ 

#include "ICardDeck.h"
#include <string>

class SimpleCardDeck : public ICardDeck
{ 

private:
	std::string name;

public: 
	SimpleCardDeck(std::string name); 
	void Shuffle() override; 
	void Reverse() override; 
	std::string GetName() override; 
	virtual ~SimpleCardDeck();
}; 


#endif /** SIMPLE_CARD_DECK_H_ */