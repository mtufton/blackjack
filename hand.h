// Meredith Tufton
// Date: 9/18/ 2014
// This file contains the class Hand that contains the protected member vector <Card> containing the
// hand of the players or dealer. The Hand class contains functions to add a card to a players or dealers hand,
// clear the hand of each player or dealer, and calculating the total value of the player's hand.


#ifndef hand//.h
#define hand//.h

#include <iostream>
#include <vector>
#include "card.h"
using namespace std;

class Hand

{
public:
    friend ostream& operator<<(ostream & os,  Hand & theCards);

    void clear();
    
    void add ( Card newCard);
    
    int getTotal ();
    
 
        
    
protected:
    
        // vector of all the cards in a player's hand
    
         vector <Card> cards;
    
    
    
};

#endif /* defined(hand.h) */
