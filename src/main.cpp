#include <iostream>
#include "ICardDeck.h"
#include "SimpleCardDeck.h"


using namespace std;

int main()
{
		
	ICardDeck * pDeck = new SimpleCardDeck("101-game");

	cout<<pDeck->GetName()<<endl;

	return 1;
}