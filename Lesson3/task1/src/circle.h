#ifndef CIRCLE_H
#define CIRCLE_H
#include "figure.h"

class Circle : public IFigure
{
  float m_radius;
public:
  Circle(float radius);
  ~Circle();

  float area() override;
};

#endif // CIRCLE_H
