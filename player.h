// Meredith Tufton
// Date: 9/18/ 2014
// This file contains the functions of the class Player which inherits the functionality of the Hand
// class, but includes a string for the name and boolean for whether or not the player has busted. Player
// contains the common elements for the human player and computer player.

#ifndef __BlackJack__player__
#define __BlackJack__player__


#include "hand.h"
#include "deck.h"
#include <iostream>
#include <vector>


using namespace std;


class Player : public Hand
{
public:
    
    bool isBusted ();
    
    
    void  printHand();
    
    void  printHand_hidden();
    
 
  
private:
    
    string name;
    
  
};
 
 

#endif /* defined(__BlackJack__File__) */
