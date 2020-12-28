#pragma once
#include <iostream>
#include <string>

using namespace std;

class Card {
public:
	Card();
	string _Value;
	string _Suit;

	void print() {
		
			cout << "Suit: " << _Suit;
			cout << ": " << _Value << "\n";
		
	}
	/*void printC() {
		for (int x = 0; x < 4; x++) {
			for (int y = 0; y < 14; y++) {
				if (_Card[x] == 0) {
					cout << "Clubs ";
				}
				else if (*_Card[x] == 1) {
					cout << "Diamonds ";
				}
				else if (*_Card[x] == 2) {
					cout << "Heart ";
				}
				else if (*_Card[x] == 3) {
					cout << "Spades ";
				}
				if (_Card[x][y] == 9) {
					cout << "jack\n";
				}
				else if (_Card[x][y] == 10) {
					cout << "queen\n";
				}
				else if (_Card[x][y] == 11) {
					cout << "king\n";
				}
				else if (_Card[x][y] == 12) {
					cout << "ace\n";
				}
				else {
					cout << _Card[x][y] + 2;
				}
			}
		}
		
	}*/
};

class CardDeck {
public:
	CardDeck();
	Card _Deck[55];
	void printallcards() {
		for (int i = 0; i < 55; i++) {
			_Deck[i].print();
		}
	}
};