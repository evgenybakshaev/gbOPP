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
    for_each(m_cards.begin(), m_cards.end(), [](Card *card)
    {
        delete card;
    });

    m_cards.clear();
}

int Hand::GetTotal() const
{
    int total = 0;
    int AceCnt = 0;
    for_each(m_cards.begin(), m_cards.end(), [&total, &AceCnt](Card *card)
    {
        if(card->IsFaceUp()){
            Card::eRank rank = card->GetRank();
            if(rank == Card::eRank::Ace)
                AceCnt++;
            total += rank_values[static_cast<uint8_t>(rank)];
        }
    });
    if(total > 21)
        total -= AceCnt*10;
    return total;
}

