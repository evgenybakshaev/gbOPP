#include "car.h"
#include <iostream>
Car::Car(string company, string model)
  : m_company(company), m_model(model)
{
  std::cout << "Car(" << company << "," << model <<")" << std::endl;
}
