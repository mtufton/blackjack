

// I USED MY FREEBIE FOR THIS PROGRAM
// Program on Mac Xcode
// Name: Meredith Tufton
// Date: 9/18/2014
// Class: CS241
// Pledge: I have neither given nor received unauthorized aid on this program.
// Description: This program allows 2 players to play BlackJack against a dealer.
// Input: The two players input the amount of money  in their wallet and their desired bet. Once cards are dealt, the players then input whether or not they would like to hit or stay.
// Output: At the end of each round, the results, and total points of each player and the dealer's cards are revealed with calculations of gains and losses.


#include <iostream>
#include <vector>
#include <fstream>
#include "card.h"
#include "hand.h"
#include "deck.h"
#include "blackjack.h"
#include "dealer.h"
#include <time.h>


using namespace std;


int main ()
{
    
    //Introduction to game and rules on how to play
    
    cout << "Welcome to Blackjack!" << endl;
    cout << "RULES: Each player is dealt two cards by the house or the dealer. Each card has a point value. Each player tries to get reach a total of 21 points (blackjack) wihtout going over. The number on the card represents its value. The value of the Jack, Queen, King is 10. An Ace can either count as an 11 or a 1, whichever is best for the player. Players do not play against each other, rather players play against the house (or the dealer)" << endl;
    
    
    // intialization of player_1
    
    cout << " " << endl;
    cout << "Enter name of Player 1";
    
    string tempname;
    cin >> tempname;
    BlackJack player_1;
    player_1.setPlayer(tempname);
    
    // Player_1's wallet contents
    
    cout << "How much money do you have tonight?" << endl;
    int tempmoney;
    cin >> tempmoney;
    player_1.setWallet(tempmoney);
    
    // intialization of player_2
    
    cout << "Enter name of Player 2" << endl;
    string tempname2;
    cin >> tempname2;
    BlackJack player_2;
    player_2.setPlayer(tempname2);
    
    // Player_2's wallet contents
    
    cout << "How much money do you have tonight?" << endl;
    
    
    int tempmoney2;
    cin >> tempmoney2;
    player_2.setWallet(tempmoney2);
    
    
    // declaration of dealer
    
    Dealer dealer;
  
    //start of game and rounds of Blackjack
    
    string playAgain = "Y";
    
    
    while (playAgain == "Y")
    {
        // intialization and shuffle of deck
        
        Deck myDeck;
        myDeck.initialize_deck();
        myDeck.shuffle_deck();
     
        // The player's bets for each round
        
        cout << "Time for everyone to place their bet!" <<endl;;
        cout << "--------------------------" << endl;
        
        cout << player_1.getPlayer() << ", how much would you like to bet?" << endl;
        int bet;
        cin >> bet;
        
        // varifying the players have the amount of money they wish to bet in their wallet.
        
        while(bet > player_1.getWallet())
            {

                cout << "I'm sorry you do not have enough money in your wallet ($" << player_1.getWallet() << ") to place that bet. Please place another bet. " << endl;
                cout << player_1.getPlayer() << " , how much would you like to bet? " << endl;
                cin >> bet;
                
            }
     
        // Player_2 bets
        
        cout << player_2.getPlayer() << ", how much would you like to bet?" << endl;
        int bet2;
        cin >> bet2;
        
        // varifying the players have the amount of money they wish to bet in their wallet.
        
        while(bet2 > player_2.getWallet())
        {
            
            cout << "I'm sorry you do not have enough money in your wallet ($" << player_2.getWallet() << ") to place that bet. Please place another bet. " << endl;
            cout << player_2.getPlayer() << " , how much would you like to bet? " << endl;
            cin >> bet2;
          
        }
        
        
        
        cout << player_1.getPlayer() << " bets $" << bet << endl;
        cout << player_2.getPlayer() << " bets $" << bet2 << endl;
        cout << " " << endl;
        
        
        // Intial starting cards are dealt to each players and dealer's hand
        
        cout << "The initial starting cards are: " << endl;
        cout << "---------------------------------" << endl;
        
        player_1.add(myDeck.deal());
        player_1.add(myDeck.deal());
        cout << player_1.getPlayer() << "'s current hand: ";
        player_1.printHand_hidden();
        cout << " " << endl;
        
        player_2.add(myDeck.deal());
        player_2.add(myDeck.deal());
        cout << player_2.getPlayer()<< "'s current hand: ";
        player_2.printHand_hidden();
        cout << " " <<endl;
        
        cout << "Dealer's current hand: " ;
        dealer.add(myDeck.deal());
        dealer.add(myDeck.deal());
        dealer.printHand_hidden();
        cout << " " << endl;
        
        
        // Player_1's turn
        
        cout << player_1.getPlayer() << "'s turn:" << endl;
        cout << "----------------------" << endl;
        cout << player_1.getPlayer() <<"'s current hand:" ;
        player_1.printHand();
        cout << "(" << player_1.getTotal() << " points )" << endl;
  
        cout << " Would you like to draw another card? (Y or N): " << endl;
        string hit;
        cin >> hit;
        
        // If player_1 chooses to hit
        
        while (hit == "Y" || hit == "y" )
        {
            
            player_1.add(myDeck.deal());
            
            
            // If player_1 bust
            
            if (player_1.isBusted() == true)
            {
                cout << "Busted!" << endl;
                break;
                
            }
            
            
            else
            {
                player_1.printHand();
                cout << "(" << player_1.getTotal() << " points )" << endl;
                cout << "Would you like to hit again?" << endl;
                cin >> hit;
            }
            
            
        }
        
        // If player one chooses to stay
        
        if (hit == "N" || hit == "n")
        {
            cout << player_1.getPlayer() << " chooses to stay." << endl;
        }
        
         myDeck.shuffle_deck();
        
        
        // Player_2 turn
        
        cout << player_2.getPlayer() << "'s turn:" << endl;
        cout << "----------------------" << endl;
        cout << player_2.getPlayer() <<"'s current hand:" ;
        player_2.printHand();
        cout << "(" << player_2.getTotal() << " points )" << endl;
        
        cout << "Would you like to draw another card? (Y or N): " << endl;
        string hit2;
        cin >> hit2;
        
        // If player_2 wishes to hit
        
        while (hit2 == "Y" || hit2 == "y" )
        {
            
            player_2.add(myDeck.deal());
            
            if (player_2.isBusted() == true)
            {
                cout << "Busted!" << endl;
                break;
                
            }
            
            
            else
            {
                player_2.printHand();
                cout << "(" << player_2.getTotal() << " points )" << endl;
                cout << "Would you like to hit again?" << endl;
                cin >> hit2;
            }
            
            
        }
        
        // If player_2 wishes to stay
        
        if (hit2 == "N" || hit2 == "n")
        {
            cout << player_2.getPlayer() << " chooses to stay." << endl;
        }
        cout << " " << endl;
        
        
        myDeck.shuffle_deck();
        
        //Dealer's turn
        
        cout << "Dealer's turn:" << endl;
        cout << "----------------------" << endl;
        cout << "Dealers's current hand:" ;
        dealer.printHand();
        cout << "(" << dealer.getTotal() << " points )" << endl;
        
        // Dealer playing by house rules
        
      
        while (dealer.shouldHit() == true && dealer.getTotal() <= 16 )
        {
            
            
            dealer.add(myDeck.deal());
            cout << "Dealer chooses to draw. " << endl;
            cout << "Dealers's current hand:" ;
            dealer.printHand();
                
            cout << "(" << dealer.getTotal() << " points )" << endl;
                
            
        
        
        }
        
        // If dealer bust
        
        if(dealer.getTotal() > 21 )
        {
            cout << "Busted" << endl;
        }
        
        // If dealer wishes to stay
        
        else
            cout << "Dealer chooses to stay " << endl;
        
        myDeck.shuffle_deck();
        
    
        
        cout << " " << endl;
        
        // end of round, results calculated
        
        cout << "Let's see how it turned out: " << endl;
        cout << "------------------------------" << endl;
        
        
        
 
        // When Dealer wins due to a higher score than both players
        
        
        if ( dealer.getTotal() <= 21 && player_1.getTotal() < dealer.getTotal() && player_2.getTotal() < dealer.getTotal()  )
        {
            
            cout << "Ouch! " << player_1.getPlayer() << " loses " << bet << endl;
            
            // Adds and subtracts equivelent amount of money bet to either dealers pot or player's wallet
            
            dealer.addPot(bet);
            player_1.subMoney(bet);
            
           
            cout << "Ouch! " << player_2.getPlayer() << " loses " << bet2 << endl;
            
            dealer.addPot(bet2);
            player_2.subMoney(bet2);
    
            
            
            
        }
        
        // when dealer wins due to a higher score than player_1 and player_2 busting
        
        if (dealer.getTotal() <= 21 && dealer.getTotal() > player_1.getTotal() && player_2.isBusted()==true)
        {
            cout  << "Ouch! " << player_1.getPlayer() << " loses " << bet << endl;
            
            dealer.addPot(bet);
            player_1.subMoney(bet);
            
            cout << "Ouch! " << player_2.getPlayer() << " loses " << bet2 << endl;
            
            dealer.addPot(bet2);
            player_2.subMoney(bet2);
        }
        
        // when dealer wins due to a higher score than player_2 and player 1 busting
        
        if (dealer.getTotal() <= 21 && dealer.getTotal() > player_2.getTotal() && player_1.isBusted()==true)
        {
            cout  << "Ouch! " << player_1.getPlayer() << " loses " << bet << endl;
            
            dealer.addPot(bet);
            player_1.subMoney(bet);
            
            cout << "Ouch! " << player_2.getPlayer() << " loses " << bet2 << endl;
            
            dealer.addPot(bet2);
            player_2.subMoney(bet2);
        }
        
        // When dealer wins due to a tie
        
        if( player_1.getTotal() == player_2.getTotal() || player_1.getTotal() == dealer.getTotal() || player_2.getTotal() == dealer.getTotal())
        {
            cout << "Ouch! " << player_1.getPlayer() << " loses " << bet << endl;
            
            dealer.addPot(bet);
            player_1.subMoney(bet);
            
            
            cout << "Ouch! " << player_2.getPlayer() << " loses " << bet2 << endl;
            
            dealer.addPot(bet2);
            player_2.subMoney(bet2);
        }
        
        
        //When player_1 wins by having the highest score
       
         if( (player_1.getTotal() <= 21 && player_1.getTotal() > player_2.getTotal() && player_1.getTotal() > dealer.getTotal() ))
        {
            cout  << "Yowzah! " << player_1.getPlayer() << " wins " << bet << endl;
            
            player_1.addMoney(bet);
            
            cout << "Ouch! " << player_2.getPlayer() << " loses " << bet2 << endl;
            
            dealer.addPot(bet2);
            player_2.subMoney(bet2);
         
        }
        
        
        if (player_1.getTotal() <= 21 && player_1.getTotal() > player_2.getTotal() && dealer.isBusted()==true)
        {
            cout  << "Yowzah! " << player_1.getPlayer() << " wins " << bet << endl;
            
            player_1.addMoney(bet);
            
            cout << "Ouch! " << player_2.getPlayer() << " loses " << bet2 << endl;
            
            dealer.addPot(bet2);
            player_2.subMoney(bet2);
            
        }
        
        if (player_1.getTotal() <= 21 && player_1.getTotal() > dealer.getTotal() && player_2.isBusted()==true)
        {
            cout  << "Yowzah! " << player_1.getPlayer() << " wins " << bet << endl;
            
            player_1.addMoney(bet);
            
            cout << "Ouch! " << player_2.getPlayer() << " loses " << bet2 << endl;
            
            dealer.addPot(bet2);
            player_2.subMoney(bet2);
            
        }
        
        
        
        // When player_2 wins
        
         if( (player_2.getTotal() <= 21 && player_2.getTotal() > player_1.getTotal() && player_2.getTotal() > dealer.getTotal() ))
        {
            cout << "Ouch! " << player_1.getPlayer() << " loses " << bet << endl;
            
            dealer.addPot(bet);
            player_1.subMoney(bet);
            
            
            cout  << "Yowzah! " << player_2.getPlayer() << " wins " << bet2 << endl;
            
            player_2.addMoney(bet2);
        }
        
        
        
        if (player_2.getTotal() <= 21 &&  player_2.getTotal() > player_1.getTotal() && dealer.isBusted() == true)
        {
            cout << "Ouch! " << player_1.getPlayer() << " loses " << bet << endl;
            
            dealer.addPot(bet);
            player_1.subMoney(bet);
            
            cout  << "Yowzah! " << player_2.getPlayer() << " wins " << bet2 << endl;
            
            player_2.addMoney(bet2);
        }
        
        
        
        if (player_2.getTotal() <= 21 && player_2.getTotal() > dealer.getTotal() && player_1.isBusted()==true)
        {
            cout  << "Ouch! " << player_1.getPlayer() << " loses " << bet << endl;
            
            dealer.addPot(bet);
            player_1.subMoney(bet);
            
            cout  << "Yowzah! " << player_2.getPlayer() << " wins " << bet2 << endl;
            
            player_2.addMoney(bet2);
            
        }
        
        // Final score revealed and the amount of money gained or lost by each player
       
        cout << "Final Score: " << endl;
        cout << "--------------------" << endl;
        
        cout << player_1.getPlayer() << " : $ " << player_1.getWallet() << endl;
        cout << player_2.getPlayer() << " : $ " << player_2.getWallet() << endl;
        
        cout << "Dealer's Pot: $ " << dealer.getPot() <<endl;
        
        
 
        cout <<"Thanks for playing!";
        
        //Clearing of deck and dealer and player's hand
        
        myDeck.clear();
        player_1.clear();
        player_2.clear();
        dealer.clear();
        
        cout << "Another round ? (Y or N)" << endl;
        cin >> playAgain;
        
     
        
    }
    
   
    
    return 0;
}
