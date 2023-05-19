#include "Player.h"
#include "Deck.h"

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