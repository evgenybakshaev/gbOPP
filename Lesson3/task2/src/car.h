#ifndef CAR_H
#define CAR_H
#include <string>

using std::string;

class Car
{
protected:
  string m_company;
  string m_model;
public:
  Car(string company, string model);


};

#endif // CAR_H
