// Meredith Tufton
// Date: 9/18/ 2014
// This file contains the class Dealer which inherits from class Player. The dealer class contains a hit function
// that follows the standard house rules. The dealer class contains the private data member to hold the dealer's
// gains from each round. 

#include "player.h"
#include "hand.h"



#ifndef __BlackJack__dealer__
#define __BlackJack__dealer__
#include <iostream>
#include <vector>

using namespace std;

class Dealer: public Player
{
public:
    bool shouldHit( );
    
    void addPot (int bet3);
    
    Dealer ();
    
    int getPot ();
    
  

private:
    int pot;
    
    
};

#endif /* defined(__BlackJack__dealer__) */
