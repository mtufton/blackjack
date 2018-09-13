//
//  main.h
//  BlackJack
//
//  Created by Meredith Tufton on 9/14/14.
//  Copyright (c) 2014 Meredith Tufton. All rights reserved.
//

#ifndef __BlackJack__main__
#define __BlackJack__main__

#include <iostream>
#include <vector>
#include <fstream>
#include "card.h"
#include "hand.h"
#include "deck.h"

using namespace std;


int main ()
{
    Card tester (Jack, Spades);
    cout << tester << endl;
    

    return 0;
    
    
}
#endif /* defined(__BlackJack__main__) */
