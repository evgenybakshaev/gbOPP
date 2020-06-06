#ifndef MONEY_H
#define MONEY_H
#include "array.h"
class Money : public Array
{
public:
    enum nominal {NA = -1, denomination_1$ = 0, denomination_2$, denomination_5$, denomination_10$, denomination_20$, denomination_50$, denomination_100$};

private:
    nominal m_banknote;
    unsigned short m_count;;

public:
    Money();
    Money(nominal n, unsigned count);

    void set(nominal n, unsigned count);
    int getSum();
};

#endif // MONEY_H
