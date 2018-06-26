#ifndef CARD_DECK_INTERFACE_H_ 
#define CARD_DECK_INTERFACE_H_ 

#include <string> 

class ICardDeck 
{

public: 
	virtual void Shuffle() = 0; 
	virtual void Reverse() = 0; 
	virtual std::string GetName() = 0; 
	virtual ~ICardDeck() = 0; 
}; 


#endif /** CARD_DECK_INTERFACE_H_ */