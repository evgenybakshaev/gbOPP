#ifndef CARD_H
#define CARD_H
#include <string>
#include <iostream>

using std::string;

class Card
{
    friend std::ostream& operator<<(std::ostream& os, const Card& aCard);
public:
  enum class eSuit {heart, diamond, club, spade};
  enum class eRank {Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King};
private:

  const eSuit m_suit;
  const eRank m_rank;
  bool m_FaceUp = true;
public:
    Card(eSuit s, eRank r);
    void Flip();
    eRank GetRank() const;
    eSuit GetSuit() const;
    bool IsFaceUp() const;


};

#endif // CARD_H
