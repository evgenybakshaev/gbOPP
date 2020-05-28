#include "hand.h"

Hand::Hand()
{

}

void Hand::Add(Card *card)
{
    m_cards.push_back(card);
}

void Hand::Clear()
{
    m_cards.clear();
}

int Hand::GetTotal()
{
    int total = 0;
    int AceCnt = 0;
    for_each(m_cards.begin(), m_cards.end(), [&total, &AceCnt](Card *card)
    {
        Card::eRank rank = card->GetRank();
        if(rank == Card::eRank::Ace)
            AceCnt++;
        total += rank_values[static_cast<uint8_t>(rank)];
    });
    if(total > 21)
        total -= AceCnt*10;
    return total;
}

const std::string Hand::GetCards()
{
    std::string s;
    for_each(m_cards.begin(), m_cards.end(), [&s](Card *card)
    {
        s += suit_names[static_cast<int>(card->GetSuit())];
        s += rank_names[static_cast<int>(card->GetRank())];
        s += " ";
    });
    return s.c_str();
}

