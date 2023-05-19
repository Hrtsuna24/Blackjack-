#include "Deck.h"
#include <iostream>
#include "Player.h"
#include "FuncsToPlay.h"


int main()
{
    Deck deck{};

    deck.shuffle();

    FuncsToPlay GameMode;

    if (GameMode.playBlackjack(deck))
    {
        std::cout << "You win!\n";
    }
    else
    {
        std::cout << "You lose!\n";
    }

    return 0;

    return 0;
}


