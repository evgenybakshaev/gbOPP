#include "house.h"
using namespace std;

House::House(const string& name)
    : GenericPlayer(name)
{
}

House::~House()
{
}

bool House::IsHitting() const
{
    return GetTotal() <= 16;
}

void House::FlipFirstCard()
{
    if (!(m_cards.empty()))
    {
        m_cards[0]->Flip();
    }
    else
    {
        cout << "No card to flip!\n";
    }
}
