#ifndef GAME_H
#define GAME_H
#include <vector>
#include "deck.h"
#include "player.h"
#include "house.h"

using namespace std;

class Game
{
private:
    Deck m_Deck;
    House m_House;
    vector<Player> m_Players;
public:
    Game();

    void Play();
};

#endif // GAME_H
