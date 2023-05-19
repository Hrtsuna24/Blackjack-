#include "Deck.h"
#include <iostream>


void createDeck(Deck* const& deck)
{
	// We could initialize each card individually, but that would be a pain.  Let's use a loop.
	using Index = size_t;

	Index index{ 0 };

	for (int suit{ 0 }; suit < static_cast<int>(Card::CardSuit::max_suits); ++suit)
	{
		for (int rank{ 0 }; rank < static_cast<int>(Card::CardRank::max_ranks); ++rank)
		{
			deck->m_deck[index] = Card(
				static_cast<Card::CardRank>(rank),
				static_cast<Card::CardSuit>(suit));
			++index;
		}
	}
}

Deck::Deck()
{
	createDeck(this);
}

void Deck::print() const
{
	for (const auto& card : m_deck)
	{
		card.print();
		std::cout << ' ';
	}

	std::cout << '\n';
}
