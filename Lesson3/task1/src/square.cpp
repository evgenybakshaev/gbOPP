#include "square.h"

Square::Square(float side)
  : Parallelogram(side, side)
{

}

float Square::area()
{
 return m_a*m_a;
}
