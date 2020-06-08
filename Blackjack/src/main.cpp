#include <iostream>
#include "game.h"

using namespace std;


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


    return 0;
}
