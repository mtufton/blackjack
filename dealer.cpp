// Meredith Tufton
// Date: 9/18/ 2014
// This file contains the class Dealer which inherits from class Player. The dealer class contains a hit function
// that follows the standard house rules. The dealer class contains the private data member to hold the dealer's
// gains from each round.

#include "dealer.h"
#include "hand.h"
#include <iostream> 
#include <vector>

using namespace std;



// Function: Dealer ( )
// Constructor for the class Dealer that assigns 0 to the private data member pot.
// Parameters: None
// Returns: None

Dealer :: Dealer ()
{
    pot = 0;
}



// Function: shouldHit ()
// A boolean funtion that calculates whether or not the dealer should hit or not following the house rules.
// If the dealer is under 16 the dealer hits, if not the dealer chooses to stay.
// Parameters: None
// Returns: true if the dealer should hit or false if the dealer should stay

bool Dealer:: shouldHit( )
{
    if (getTotal() <= 16 )
        {
                
            return true;
                
        }
    
                            
        else
            return false;
    
    
    
}


int Dealer:: getPot()
{
    return pot;
}


// Function: addPot
// A function to add money to the private variable pot when the dealer wins a round of BlackJack.
// The player who loses intial bet is added to the dealer's pot.
// Parameters: the interger bet of the player that loses in that round
// Returns:  None

void Dealer :: addPot (int bet3)
{
     pot += bet3;
}


