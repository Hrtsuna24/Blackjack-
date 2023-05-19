#pragma once
#include <array>
using std::array;
#include "Card.h"

class Deck
{
private:
	static constexpr size_t Cards{ 52 };
	using size_type = array<Card, Cards>;
	size_type m_deck;
	friend void createDeck(Deck* const& dec);

public:


	Deck();
	void print() const;
	void shuffleDeck();
};

