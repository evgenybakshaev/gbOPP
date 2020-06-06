#include "genericplayer.h"

GenericPlayer::GenericPlayer(std::string name)
    : Hand(), m_name(name)
{
}

bool GenericPlayer::IsBoosted()
{
    return GetTotal() > 21;
}

void GenericPlayer::Bust() const
{
    std::cout << "Player " << m_name << " bust" << std::endl;
}
