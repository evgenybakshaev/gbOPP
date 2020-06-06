#include "card.h"

Card::Card(eSuit s, eRank r)
  : m_suit(s), m_rank(r)
{
}

void Card::Flip()
{
    m_FaceUp = !m_FaceUp;
}

//int Card::GetValue()
//{
//    return rank_values[static_cast<uint8_t>(m_rank)];
//}

Card::eRank Card::GetRank() const
{
    return m_rank;
}

Card::eSuit Card::GetSuit() const
{
    return m_suit;
}

//const char *Card::GetCard()
//{
//    string s;

//    s = suit_names[static_cast<uint8_t>(m_suit)];
//    s += rank_names[static_cast<uint8_t>(m_rank)];
//    return s.c_str();
//}


