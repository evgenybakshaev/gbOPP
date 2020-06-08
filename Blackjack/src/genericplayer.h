#ifndef GENERICPLAYER_H
#define GENERICPLAYER_H
#include "hand.h"
#include <iostream>


class GenericPlayer : public Hand
{
    friend std::ostream& operator<< (std::ostream& os, const GenericPlayer& aGenericPlayer);
protected:
    string m_name;
public:
    GenericPlayer(const string& name = "");
    virtual bool IsHitting() const = 0;
    bool IsBusted();
    void Bust() const;
};

#endif // GENERICPLAYER_H
