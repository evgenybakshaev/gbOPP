#include "rhombus.h"
#include "math.h"

Rhombus::Rhombus(float a, float alpha)
  : Parallelogram(a, a, alpha)
{

}

float Rhombus::area()
{
 return m_a*m_a*sin(m_alpha*M_PI/180.0);
}
