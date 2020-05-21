#ifndef PASENGERCAR_H
#define PASENGERCAR_H
#include "car.h"

class PasengerCar : virtual public Car
{
public:
  PasengerCar(string company);
};

#endif // PASENGERCAR_H
