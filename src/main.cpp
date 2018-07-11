#include <iostream>
#include <memory>
#include "ICardDeck.h"
#include "SimpleCardDeck.h"
#include "ICard.h"
#include "SimpleCard.h"

using namespace std;

int main()
{
		
	unique_ptr<ICardDeck> pDeck(new SimpleCardDeck("101-game-deck"));
	unique_ptr<ICard> pCard1(new SimpleCard("10", "diamonds"));
	pDeck->AddCard(pCard1);
	unique_ptr<ICard> pCard2(new SimpleCard("jack", "spades"));
	pDeck->AddCard(pCard2);
	unique_ptr<ICard> pCard3(new SimpleCard("7", "clubs"));
	pDeck->AddCard(pCard3);
	unique_ptr<ICard> pCard4(new SimpleCard("9", "hearts"));
	pDeck->AddCard(pCard4);

	cout<<pDeck->GetName()<<endl;
	auto card = pDeck->GetCard();
	cout<<"Current card is "<<card->GetValue()<<" "<<card->GetSuit()<<endl;

	return 1;
}