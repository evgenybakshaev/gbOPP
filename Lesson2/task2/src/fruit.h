#ifndef FRUIT_H
#define FRUIT_H
#include <string>

using std::string;

class Fruit
{
protected:
    string m_name;
    string m_color;
public:
    Fruit(string name, string color);

    string getName();
    string getColor();
};

#endif // FRUIT_H
