#ifndef APPLE_H
#define APPLE_H
#include "fruit.h"


class Apple : public Fruit
{
public:
    Apple(string color);
    Apple(string name, string color);
};

#endif // APPLE_H
