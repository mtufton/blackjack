// Meredith Tufton
// Date: 9/18/ 2014
// This file contains the class Deck which inherits the functionality of the Hand class, but contains the special
// functionallity of intializing, shuffling and dealing.

#include <iostream>
#include <ctime>
#include <vector>
#include "hand.h"
#include "card.h"

#ifndef __BlackJack__deck__
#define __BlackJack__deck__



using namespace std;

class Deck : public Hand

{
public:
    
    void initialize_deck ();
    
    void shuffle_deck ();
    
    Card deal ();
    
    
    



    
    
};

#endif /* defined(__BlackJack__File__) */
