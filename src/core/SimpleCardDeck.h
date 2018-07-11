#ifndef SIMPLE_CARD_DECK_H_ 
#define SIMPLE_CARD_DECK_H_ 

#include <string>
#include <list>
#include <memory>
#include "ICardDeck.h"
#include "ICard.h"

class SimpleCardDeck : public ICardDeck
{ 

private:
	std::string name;
	std::list<std::unique_ptr<ICard>> cards;

public: 
	SimpleCardDeck(std::string name); 
	void Shuffle() override; 
	void Reverse() override; 
	std::string GetName() override; 
	void AddCard(std::unique_ptr<ICard> &pCard) override;
	std::unique_ptr<ICard> GetCard() override;
	~SimpleCardDeck();
}; 


#endif /** SIMPLE_CARD_DECK_H_ */