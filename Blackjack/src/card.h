#ifndef CARD_H
#define CARD_H


class Card
{
public:
  enum eSuit {heart, diamond, club, spade};
  enum eValue {Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King} ;
private:
  const char *suit_names[4] { "♥", "♦", "♣" ,"♠"};
  const char *value_names[13] {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
  const int values[13] {1,2,3,4,5,6,7,8,9,10,10,10,10};
  eSuit suit;
  eValue card;
  bool bFaceUp = false;
public:
    Card(eSuit s, eValue v);
    void Flip();
    int GetValue();

};

#endif // CARD_H
