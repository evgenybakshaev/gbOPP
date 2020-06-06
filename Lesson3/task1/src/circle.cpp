#include "circle.h"
#include <math.h>
Circle::Circle(float radius)
  : m_radius(radius)
{
}

Circle::~Circle()
{
}

float Circle::area()
{
  return M_PI*m_radius*m_radius;
}
