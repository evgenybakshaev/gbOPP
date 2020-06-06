#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H
#include "figure.h"

class Parallelogram : public IFigure
{
protected:
  float m_a;
  float m_b;
  float m_alpha;
public:
  Parallelogram(float a, float b, float alpha = 90.0f);
  float area() override;
};

#endif // PARALLELOGRAM_H
