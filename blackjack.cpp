// Meredith Tufton
// Date: 9/18/ 2014
// This file contains the class Blackjack which inherits from class Player. Through this class the Player assigns
// their name and money. This file and class also contains functions to calculate the standings of each of the
// players money.

#include "blackjack.h"
#include "player.h"

// Function: setPlayer
// a mutator function to set the name of the private member player.
// Parameters: string player_name inputed by the user
// Returns: none


void BlackJack ::setPlayer( string player_name)
{
    player = player_name;
}



// Function: setWallet
// a mutator function to set the money of the private member wallet.
// Parameters: int money inputed by the user to represent how much money they enter the game with
// Returns: none


void BlackJack :: setWallet ( int money)
{
    wallet= money;
}


// Function: getWallet
// An accessor function to get the value of the player's wallet
// Parameters: None
// Returns: The value of the player's wallet in integer form

int BlackJack :: getWallet ()
{
    return wallet;
}


// Function: addMoney
// A function to add money to the private variable wallet when the player wins a round of BlackJack.
// The player's intial bet is doubled when they win a round. By winning they gain more money then what they bet.
// Parameters: the interger bet of the player in that round
// Returns:  None

void BlackJack :: addMoney (int bet)
{
    wallet = wallet + (bet *2);
}


// Function: subMoney
// A function to subtract money from the private variable wallet when the player loses a round of BlackJack.
// The player's intial bet subtracted from their wallet.
// Parameters: the interger bet of the player in that round
// Returns:  None

void BlackJack :: subMoney (int bet1)
{
    wallet -= bet1;
  
    
}

// Function: getPlayer
// An accessor function to get the string name  of the player
// Parameters: None
// Returns: the string of the player's name 

string BlackJack:: getPlayer()
{
    return player;
}
