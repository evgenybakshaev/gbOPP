#include "money.h"
#include "iostream"

using namespace std;
Money::Money()
    : Array(denomination_100$,0), m_banknote(NA),m_count(0)
{
    setElement(denomination_1$, 1);
    setElement(denomination_2$, 2);
    setElement(denomination_5$, 5);
    setElement(denomination_10$, 10);
    setElement(denomination_20$, 20);
    setElement(denomination_50$, 50);
    setElement(denomination_100$, 100);
}

Money::Money(nominal n, unsigned count)
    : Array(denomination_100$,0), m_banknote(n),m_count(count)
{
    setElement(denomination_1$, 1);
    setElement(denomination_2$, 2);
    setElement(denomination_5$, 5);
    setElement(denomination_10$, 10);
    setElement(denomination_20$, 20);
    setElement(denomination_50$, 50);
    setElement(denomination_100$, 100);
}

void Money::set(Money::nominal n, unsigned count)
{
    m_banknote = n;
    m_count = count;
}

int Money::getSum()
{
    int sum = getElement(m_banknote) * m_count;
    sum > 0 ? sum : sum = 0;
    return sum;
}
