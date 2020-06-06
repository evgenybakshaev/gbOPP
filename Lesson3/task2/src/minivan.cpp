#include "minivan.h"
#include <iostream>
Minivan::Minivan(string company)
  : Car(company, "Minivan"), PasengerCar(company), Bus(company)
{
  std::cout << "Minivan(" << company << ")" << std::endl;
}
