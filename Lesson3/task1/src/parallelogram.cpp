#include "parallelogram.h"
#include "math.h"

Parallelogram::Parallelogram(float a, float b, float alpha)
  : m_a(a), m_b(b), m_alpha(alpha)
{

}

float Parallelogram::area()
{
 return m_a*m_b*sin(m_alpha*M_PI/180.0);
}
