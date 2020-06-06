#include <iostream>
#include "money.h"

using namespace std;

int main(int argc, char** args)
{
    Money money(Money::denomination_50$, 10);
    cout << "You have " << money.getSum() << " dollars" << endl;

    money.set(Money::denomination_5$, 10);
    cout << "You have " << money.getSum() << " dollars" << endl;

    return 0;
}
