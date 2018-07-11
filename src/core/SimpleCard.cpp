#include "SimpleCard.h"

SimpleCard::SimpleCard(std::string value, std::string suit) : value(value), suit(suit)
{

}

std::string SimpleCard::GetValue()
{
	return value;
}

std::string SimpleCard::GetSuit()
{
	return suit;
}

SimpleCard::~SimpleCard()
{
	
}