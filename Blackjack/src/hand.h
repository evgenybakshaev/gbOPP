#ifndef HAND_H
#define HAND_H
#include <vector>
#include <string>
#include <algorithm>
#include "card.h"

class Hand
{
private:
    static constexpr int rank_values[13] {11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10};
protected:
    std::vector<Card*> m_cards;
public:
    Hand();

    void Add(Card *card);
    void Clear();
    int GetTotal() const;
    //const std::string GetCards();
};


#endif // HAND_H
