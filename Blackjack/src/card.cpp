#include "card.h"

Card::Card(eSuit s, eValue v)
  : suit(s), card(v)
{
}

int Card::GetValue()
{
  return values[card];
}
