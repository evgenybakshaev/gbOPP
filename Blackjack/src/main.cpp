#include <iostream>
#include "game.h"

using namespace std;
using eSuit = Card::eSuit;
using eRank = Card::eRank;

int main(int argc, char** args)
{
#if _WIN32
    system("chcp 65001");
    system("cls");
#endif

    vector<string> names;
    names.reserve(5);
    names.push_back("bei");
    Game game(names);
    char response;
    do{
        game.Play();
        cout << "Play again? (Y/N): ";
        cin >> response;

    }while(response == 'y' || response == 'Y');

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
