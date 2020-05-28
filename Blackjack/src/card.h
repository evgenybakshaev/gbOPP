#ifndef CARD_H
#define CARD_H
#include <string>

using std::string;

class Card
{
public:
  enum class eSuit {heart, diamond, club, spade};
  enum class eRank {Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King};
private:

  const eSuit m_suit;
  const eRank m_rank;
  bool m_FaceUp = false;
public:
    Card(eSuit s, eRank r);
    void Flip();
    //int GetValue();
    eRank GetRank() const;
    eSuit GetSuit() const;
//    const char *GetCard();
};

#endif // CARD_H
