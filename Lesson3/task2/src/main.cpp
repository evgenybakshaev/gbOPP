#include <iostream>
#include "car.h"
#include "bus.h"
#include "pasengercar.h"
#include "minivan.h"

using namespace std;

int main(int argc, char** args)
{
  PasengerCar car("WV");
  Bus bus("Ikarus");
  Minivan minivan("Mercedes");
  return 0;
}
