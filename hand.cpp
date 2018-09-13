
// Meredith Tufton
// Date: 9/18/ 2014
// This file contains the class Hand that contains the protected member vector <Card> containing the
// hand of the players or dealer. The Hand class contains functions to add a card to a players or dealers hand,
// clear the hand of each player or dealer, and calculating the total value of the player's hand.



#include "hand.h"
#include "card.h"
#include "deck.h"
#include <vector>
#include <iostream>

using namespace std;


// Function: Clear ()
// A clear function that clears all the cards in the hand
// Parameters: none
// Returns: none

void Hand:: clear()
{
    cards.clear();
 
}

// Function: add ()
// A add function that takes in a Card type and adds it to the player or dealers hand.
// Parameters: a Card type to add to the players hand
// Returns: none

void Hand:: add ( Card newCard)
{
    
    cards.push_back (newCard);
   
}

// Function: getTotal ()
// a function that returns an integer representing the current value of the hand by interating through the
// hand and adding values of each card.
// Parameters: none
// Returns: Returns the integer total value of all the cards in the hand

int Hand:: getTotal ()

{
    int total = 0;
    
    for (int i = 0; i < cards.size(); i ++ )
    {
        // If a Ace is in the hand
    
       if ( cards[i].getValue() == 1)
        {
            // When Ace should be counted as value 11 in hand
            
            if ( total+ cards[i].getValue() <= 21)
            {
                total+=11;
            }
            
            // When Ace should be counted as value 1 in hand
            else
            {
                total ++;
            }
            
        }
        
        else
            total=total+cards[i].getValue();

            
    }
    
    
    return total;
}

// Function: ostream& operator ()
// A friend outstream operator that outputs the list of cards in hand in order from begining to the end
// Parameters: A type Class Hand
// Returns: ostream taht prints the cards in the players hand

ostream& operator<<(ostream & os,  Hand & theCards)
{
    for (int i = 0; i < theCards.cards.size(); i++)
    {
    
            os << theCards.cards[i];
    }
    
    return os;
 
}
