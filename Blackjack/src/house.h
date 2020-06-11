#ifndef DEALER_H
#define DEALER_H
#include "genericplayer.h"

class House : public GenericPlayer
{
public:
    House(const string& name = "House");
    virtual ~House();

    virtual bool IsHitting() const;
    void FlipFirstCard();
};

#endif // DEALER_H
