#ifndef SIMPLE_CARD_H_
#define SIMPLE_CARD_H_

#include <string>
#include "ICard.h"

class SimpleCard : public ICard
{

private:
	std::string value;
	std::string suit;
public:
	SimpleCard(std::string value, std::string suit);
	std::string GetValue() override;
	std::string GetSuit() override;
	~SimpleCard();
};


#endif /** SIMPLE_CARD_H_ */