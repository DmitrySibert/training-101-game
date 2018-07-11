#ifndef CARD_DECK_INTERFACE_H_
#define CARD_DECK_INTERFACE_H_

#include "ICard.h"
#include <memory>
#include <string>

class ICardDeck
{

public:
	virtual std::string GetName() = 0;
	virtual void AddCard(std::unique_ptr<ICard> &pCard) = 0;
	virtual std::unique_ptr<ICard> GetCard() = 0;
	virtual void Shuffle() = 0;
	virtual void Reverse() = 0;
	virtual ~ICardDeck() = 0;
};


#endif /** CARD_DECK_INTERFACE_H_ */
