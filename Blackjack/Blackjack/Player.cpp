#include "Player.h"
#include "Deck.h"
#include "Card.h"

int Player::drawCard(Deck& deck)
{
	
	int val = deck.dealCard().value();
	m_score += val;
	return val;
}

bool Player::isBust() const
{
	return (m_score > g_maximumScore);
}


//bool playerTurn(const Deck& deck, Index& nextCardIndex, Player& player)
//{
//    while (true)
//    {
//        if (player.score > g_maximumScore)
//        {
//            // This can happen even before the player had a choice if they drew 2
//            // aces.
//            std::cout << "You busted!\n";
//            return true;
//        }
//        else
//        {
//            if (playerWantsHit())
//            {
//                int cardValue{ getCardValue(deck.at(nextCardIndex++)) };
//                player.score += cardValue;
//                std::cout << "You were dealt a " << cardValue << " and now have " << player.score << '\n';
//            }
//            else
//            {
//                // The player didn't go bust.
//                return false;
//            }
//        }
//    }
//}
//
//// Returns true if the dealer went bust. False otherwise.
//bool dealerTurn(const Deck& deck, Index& nextCardIndex, Player& dealer)
//{
//    // Draw cards until we reach the minimum value.
//    while (dealer.score < g_minimumDealerScore)
//    {
//        int cardValue{ getCardValue(deck.at(nextCardIndex++)) };
//        dealer.score += cardValue;
//        std::cout << "The dealer turned up a " << cardValue << " and now has " << dealer.score << '\n';
//
//    }
//
//    // If the dealer's score is too high, they went bust.
//    if (dealer.score > g_maximumScore)
//    {
//        std::cout << "The dealer busted!\n";
//        return true;
//    }
//
//    return false;
//}