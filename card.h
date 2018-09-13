// Meredith Tufton
// Date: 9/18/ 2014
// This file contains the Card class and declaration of enums containing the Rank and Suit of each card.
// The Card class contians data members Rank rank and Suit suit. This file focuses on setting the correct
// value, suit, and rank to each card.

#ifndef card//.h
#define card//.h // __Blackjack__card__
#include <iostream>

using namespace std;

// enum allows you to define a group a constants to integer values. default is to start at 0
// unless you say otherwise
enum Rank {Ace= 1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King};
const Rank START_RANK = Ace; //  use these for iterating
const Rank END_RANK = King;

enum Suit {Clubs, Diamonds, Spades, Hearts};
const Suit START_SUIT = Clubs;
const Suit END_SUIT = Hearts;

// Array of the values of each card to assign the correct value to each rank.

const int cardVal[13]= {1,2,3,4,5,6,7,8,9,10,10,10,10};

// Array of the characters of each Suits for printing the Suit of each card.

const char cSuits[4] = { 'C', 'D', 'S', 'H' };





class Card
{
public:
    
    Card ( Rank r, Suit s);
    
    int getValue ();
    
    void setRank ( Rank r );
    
    void setSuit ( Suit s);
    
    friend ostream& operator<<(ostream & os, const Card & card);
    
 
    
private:
    
    Rank rank;
    
    Suit suit;

    
};


#endif
