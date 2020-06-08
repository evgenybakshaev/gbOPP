#include "genericplayer.h"
using namespace std;

GenericPlayer::GenericPlayer(const std::string &name)
    : Hand(), m_name(name)
{
}

bool GenericPlayer::IsBusted()
{
    return GetTotal() > 21;
}

void GenericPlayer::Bust() const
{
    std::cout << m_name << " busts." << std::endl;
}

ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer)
{
    os << aGenericPlayer.m_name << ":\t";

    vector<Card*>::const_iterator pCard;
    if (!aGenericPlayer.m_cards.empty())
    {
        for (pCard = aGenericPlayer.m_cards.begin();
             pCard != aGenericPlayer.m_cards.end();
             ++pCard)
        {
            os << *(*pCard) << "\t";
        }


        if (aGenericPlayer.GetTotal() != 0)
        {
            cout << "(" << aGenericPlayer.GetTotal() << ")";
        }
    }
    else
    {
        os << "<empty>";
    }

    return os;
}
