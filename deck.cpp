
// Meredith Tufton
// Date: 9/18/ 2014
// This file contains the class Deck which inherits the functionality of the Hand class, but contains the special
// functionallity of intializing, shuffling and dealing.


#include "deck.h"
#include <ctime>



using namespace std;


// Function: initialize_deck
// A function that intializes the deck by iterating through the enumerated list to create a deck to hold 52 cards with value Ace, 2,3,4,5,6,7,8,9,10,Jack, Queen, and King of each suit.
// Parameters: None
// Returns:  None


void Deck :: initialize_deck ()
{
    
    for(int i= (int) START_RANK;i <= (int)END_RANK; i++)
    {
        for(int j= (int) START_SUIT;j <= (int)END_SUIT; j++)
        {
            Card c((Rank) i, (Suit) j);
            cards.push_back(c);
            
            
        }
    }

}

// Function: shuffle_deck ()
// A function to shuffle the deck throug the use of random_shuffle  function of the vector class
// Parameters: None
// Returns:  None

void Deck :: shuffle_deck ()
{
    
    random_shuffle( cards.begin(), cards.end() );
    
}

// Function: deal ()
// A function to deal one card from the top of the deck
// Parameters: None
// Returns:  None

Card Deck :: deal()
{
        Card top_of_deck(Ace, Clubs);
        top_of_deck = cards[cards.size ()-1];
    
        cards.pop_back();
        return top_of_deck;

    
}

