#include "rectangle.h"

Rectangle::Rectangle(float a, float b)
  : Parallelogram(a, b)
{

}

float Rectangle::area()
{
  return m_a*m_b;
}
