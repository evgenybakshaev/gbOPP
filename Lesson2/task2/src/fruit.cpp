#include "fruit.h"

Fruit::Fruit(string name, string color)
    : m_name(name), m_color(color)
{

}

std::string Fruit::getName()
{
    return m_name;
}

std::string Fruit::getColor()
{
    return m_color;
}
