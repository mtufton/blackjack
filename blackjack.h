// Meredith Tufton
// Date: 9/18/ 2014
// This file contains the class Blackjack which inherits from class Player. Through this class the Player assigns
// their name and money. This file and class also contains functions to calculate the standings of each of the
// players money.


#include "player.h"


#ifndef __BlackJack__blackjack__
#define __BlackJack__blackjack__

#include <iostream>


class BlackJack: public Player
{
public:
    
    void setPlayer( string player_name);
    
    
    void setWallet ( int money);
    
    void addMoney (int bet); //add bet to player's wallet
    
    void subMoney (int bet);// subtract bet from player's wallet
    
    int getWallet ( );
    
    string getPlayer();
    

private:
    int wallet;
    string player;
    
    

};



#endif /* defined(__BlackJack__blackjack__) */
