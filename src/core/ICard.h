#ifndef CARD_INTERFACE_H_
#define CARD_INTERFACE_H_

#include "string"

class ICard
{

public:
	virtual std::string GetValue() = 0;
	virtual std::string GetSuit() = 0;
	virtual ~ICard() = 0;
};


#endif /** CARD_INTERFACE_H_ */