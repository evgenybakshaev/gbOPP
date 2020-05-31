#include <iostream>
#include "hand.h"

using namespace std;
using eSuit = Card::eSuit;
using eRank = Card::eRank;

int main(int argc, char** args)
{
#if _WIN32
    system("chcp 65001");
#endif


    Hand h;
    h.Add(new Card(eSuit::diamond, eRank::Six));
    h.Add(new Card(eSuit::spade, eRank::Ace));
    h.Add(new Card(eSuit::heart, eRank::Ace));
    cout << h.GetCards() << endl;
    cout << "Player have " << h.GetTotal() << " points" << endl;
    h.Clear();
    h.Add(new Card(eSuit::club, eRank::Ace));
    cout << h.GetCards() << endl;
    return 0;
}
