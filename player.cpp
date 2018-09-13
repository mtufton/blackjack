// Meredith Tufton
// Date: 9/18/ 2014
// This file contains the functions of the class Player which inherits the functionality of the Hand
// class, but includes a string for the name and boolean for whether or not the player has busted. Player
// contains the common elements for the human player and computer player.

#include "player.h"
#include "hand.h"
#include "deck.h"
#include <iostream>
#include <vector>

// Function: isBusted ()
// A function that indicates whether the player has busted or not. If total of hand is over 21, the player bust.
// Parameters: None
// Returns:  true if the player bust, and false if they did not.

bool Player :: isBusted ()
{
    if (getTotal() > 21)
    {
        return true;
    
    }
    
    return false;

    
};

// Function: printHand ()
// Interates throughout the player's hand to print their cards.
// Parameters: None
// Returns:  none

void Player:: printHand()
{
    for (int i = 0; i < cards.size(); i++)
    {

            
            cout << cards[i];
    }
   
    
}

// Function: printHand_hidden ()
// Interates throughout the player's hand to print their cards, but hides the first card from other players.
// Parameters: None
// Returns:  none

void Player:: printHand_hidden()
{
    for (int i = 0; i < cards.size(); i++)
    {
        if (i == 0)
        {
            cout << "[??]";
            cout << cards[i+1];
            
        }
 
    }
    
    
}
