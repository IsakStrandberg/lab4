// task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "task4.h"

using namespace std;

Card::Card() {
	_Value = "NULL";
	_Suit = "NULL";
}

CardDeck::CardDeck() {

	int i = 0;
	string numbers[] = { "2","3","4","5","6","7","8","9","10","Jack","Queen","King","Ace" };
	string suits[] = { "Clubs","Diamonds","Hearts","Spades" };
	int numberCounter = 0;
	int suitCounter = 0;

	while (i < 52)
	{

		if (numberCounter > 12)
		{
			numberCounter = 0;

			if (suitCounter == 4)
			{

			}
			else
			{
				suitCounter++;
			}
		}

		_Deck[i]._Value = numbers[numberCounter];
		_Deck[i]._Suit = suits[suitCounter];


		i++;
		numberCounter++;
	}

	while (i < 55)
	{
		_Deck[i]._Value = "Joker";
		_Deck[i]._Suit = "Joker";
		i++;
	}

	int m = 0;
}

int main() {
	CardDeck One;
	One.printallcards();
}