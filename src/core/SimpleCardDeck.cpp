#include "SimpleCardDeck.h" 

SimpleCardDeck::SimpleCardDeck(std::string name) : name(name)
{ 

} 

void SimpleCardDeck::Shuffle() 
{ 

} 

void SimpleCardDeck::Reverse() 
{ 

} 

std::string SimpleCardDeck::GetName() 
{ 
	return name;
}

void SimpleCardDeck::AddCard(std::unique_ptr<ICard> &pCard)
{
	cards.push_back(std::move(pCard));
}

std::unique_ptr<ICard> SimpleCardDeck::GetCard()
{
	std::unique_ptr<ICard> card = std::move(cards.front());
	cards.pop_front();
	return card;
}

SimpleCardDeck::~SimpleCardDeck() 
{ 

}