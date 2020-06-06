#include <iostream>
#include "fraction.h"

using namespace std;

int main(int argc, char** args)
{
  Fraction f1(2,3);
  cout << f1 << " + " << 1 << " = "<< f1 + 1 << endl;
  Fraction f3(2,0);
  Fraction f2(1,2);
  cout << f1 << " - " << f2 << " = "<< (f1 - f2) << endl;
  cout << f1 << " * " << f2 << " = "<< (f1 * f2) << endl;
  cout << f1 << " / " << f2 << " = "<< (f1 / f2) << endl;

  cout << f1 << " == " << f2 << " " << std::boolalpha<< (f1 == f2) << endl;
  cout << f1 << " != " << f2 << " " << std::boolalpha<< (f1 != f2) << endl;
  cout << f1 << " <= " << f2 << " " << std::boolalpha<< (f1 <= f2) << endl;
  cout << f1 << " >= " << f1 << " " << std::boolalpha<< (f1 >= f1) << endl;
  cout << f1 << " < " << f2 << " " << std::boolalpha<< (f1 < f2) << endl;
  cout << f1 << " > " << f2 << " " << std::boolalpha<< (f1 > f2) << endl;
  return 0;
}
