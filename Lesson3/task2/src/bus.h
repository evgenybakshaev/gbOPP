#ifndef BUS_H
#define BUS_H
#include "car.h"

class Bus : virtual public Car
{
public:
  Bus(string company);
};

#endif // BUS_H
