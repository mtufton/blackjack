
// Meredith Tufton
// Date: 9/18/ 2014
// This file contains the functions for the Card class. The Card class contians data members Rank rank and Suit
// suit. This file focuses on setting the correct
// value, suit, and rank to each card.


#include <iostream>
#include "card.h" 
#include <fstream>

using namespace std;



// Function: Card( Rank r, Suit s)
// Constructor for the class card that assigns data members to private data members
// rank and suit.
// Parameters: Rank of the card and Suit of the card
// Returns: none

Card :: Card ( Rank r, Suit s)
{
    rank= r;
    suit = s;
}

// Function: getValue
// An accessor function to get the value of each card using the cards Rank and array CardVal.
// Parameters: None
// Returns: The value of the card in integer form

int Card :: getValue ()
{
    int value;
    value = cardVal [rank-1];
    return value;
}

// Function: setRank
// a mutator function to set the rank (private member) of a card
// Parameters: Rank of the card
// Returns: none


void Card :: setRank (  Rank r )
{
    rank = r;
}

// Function: setSuit
// a mutator function to set the Suit (private member) of a card
// Parameters: Suit of a card
// Returns: none


void Card :: setSuit ( Suit s)
{
    suit = s;
}

// Function: ostream& operator
// a friend outstream operator that outputs the card by printing the rank as (A,2,3,4,5,,6,7,8,9,10,J,Q,K)
// followed by a letter representing the suit (H,D,S,C) using the array cSuits for character assignement of Suits.
// Parameters:  A constant class Card passed by reference
// Returns: Prints the ostream in correct order with the Rank followed by the corresponding Suit.


ostream& operator<<(ostream & os, const Card & my_card)
{
    os<<"[";

    
    if (my_card.rank == Rank :: Ace)
    {
        
        return os<<"A" << cSuits [my_card.suit]<<"]";
        
    }
    
    else if ( my_card.rank == Rank :: Jack )
    {
       return os << "J" << cSuits [my_card.suit] << "]";
    }
    
    else if (my_card.rank == Rank :: Queen)
    {
        return os << "Q" << cSuits [my_card.suit] << "]";
    }
    
    else if (my_card.rank == Rank :: King)
    {
       return  os << "K" << cSuits [my_card.suit] << "]";
    }

    else
    {
    
    return os << cardVal[static_cast<int>( my_card.rank-1)] << cSuits [my_card.suit] << "]";
    }

}
