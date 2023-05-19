#pragma once
class Player
{
	int m_score{};

public:
	int drawCard(class Deck&);
	int score() const { return m_score; };
	bool isBust() const;

	// Maximum score before losing.
	static constexpr int g_maximumScore{ 21 };

	// Minimum score that the dealer has to have.
	static constexpr int g_minimumDealerScore{ 17 };
};

