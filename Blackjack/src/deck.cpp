#include "deck.h"

#include <algorithm>

//using namespace std;

Deck::Deck()
{
    m_cards.reserve(52);
    Populate();
}

Deck::~Deck()
{}

void Deck::Populate()
{
    Clear();
    for (int s = static_cast<int>(Card::eSuit::heart); s <= static_cast<int>(Card::eSuit::spade); ++s)
    {
        for (int r = static_cast<int>(Card::eRank::Ace); r <= static_cast<int>(Card::eRank::King); ++r)
        {
            Add(new Card(static_cast<Card::eSuit>(s),
                         static_cast<Card::eRank>(r)));
        }
    }
}

void Deck::Shuffle()
{
    std::random_shuffle(m_cards.begin(), m_cards.end());
}

void Deck::Deal(Hand& aHand)
{
    if (!m_cards.empty())
    {
        aHand.Add(m_cards.back());
        m_cards.pop_back();
    }
    else
    {
        std::cout << "Out of cards. Unable to deal.";
    }
}

void Deck::AdditionalCards(GenericPlayer& aGenericPlayer)
{
    std::cout << std::endl;
    while (!(aGenericPlayer.IsBusted()) && aGenericPlayer.IsHitting())
    {
        Deal(aGenericPlayer);
        std::cout << aGenericPlayer << std::endl;

        if (aGenericPlayer.IsBusted())
        {
            aGenericPlayer.Bust();
        }
    }
}
