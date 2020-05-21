#ifndef MINIVAN_H
#define MINIVAN_H
#include "pasengercar.h"
#include "bus.h"

class Minivan : public PasengerCar, public Bus
{
public:
  Minivan(string company);
};

#endif // MINIVAN_H
