#ifndef GAME_H
#define GAME_H
#include <vector>
#include "deck.h"
#include "player.h"
#include "house.h"

#include <time.h>

using namespace std;

class Game
{
private:
    Deck m_Deck;
    House m_House;
    vector<Player> m_Players;
public:

    Game(const vector<string>& names);
    ~Game();

    void Play();
};

#endif // GAME_H
