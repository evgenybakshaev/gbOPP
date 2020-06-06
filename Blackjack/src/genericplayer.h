#ifndef GENERICPLAYER_H
#define GENERICPLAYER_H
#include <iostream>
#include "hand.h"

class GenericPlayer : public Hand
{
    string m_name;
public:
    GenericPlayer(string name);
    virtual bool IsHitting() = 0;
    bool IsBoosted();
    void Bust() const;
};

#endif // GENERICPLAYER_H
