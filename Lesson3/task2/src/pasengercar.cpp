#include "pasengercar.h"
#include <iostream>
PasengerCar::PasengerCar(string company)
  : Car(company, "PasengerCar")
{
  std::cout << "PassangerCar(" << company << ")" << std::endl;
}
