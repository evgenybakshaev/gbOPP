#include "bus.h"
#include <iostream>
Bus::Bus(string company)
  : Car(company, "Bus")
{
  std::cout << "Bus(" << company << ")" << std::endl;
}
