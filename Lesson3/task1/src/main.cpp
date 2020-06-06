#include <iostream>
#include "parallelogram.h"
#include "circle.h"
#include "rectangle.h"
#include "rhombus.h"
#include "square.h"

using namespace std;
int main(int argc, char** args)
{
  Parallelogram prm(10, 20, 30);
  Rectangle rect(10,20);
  Rhombus rhomb(10,20);
  Square square(10);
  Circle circle(10);

  cout << "Area of Parallelogram = " << prm.area() << endl
       << "Area of Rectangle = " << rect.area() << endl
       << "Area of Rhombus = " << rhomb.area() << endl
       << "Area of Square = " << square.area() << endl
       << "Area of Circle = " << circle.area() << endl;

  return 0;
}
