#include "card.h"

Card::Card(eSuit s, eRank r)
  : m_suit(s), m_rank(r)
{
}

void Card::Flip()
{
    m_FaceUp = !m_FaceUp;
}

Card::eRank Card::GetRank() const
{
    return m_rank;
}

Card::eSuit Card::GetSuit() const
{
    return m_suit;
}

bool Card::IsFaceUp() const
{
    return m_FaceUp;
}

std::ostream& operator<<(std::ostream& os, const Card& aCard)
{
    const string RANKS[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    const string SUITS[] = {"♥", "♦", "♣", "♠"};

    if (aCard.IsFaceUp())
        os << RANKS[static_cast<int>(aCard.GetRank())] << SUITS[static_cast<int>(aCard.GetSuit())];
    else
        os << "XX";

    return os;
}



