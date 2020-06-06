#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Parallelogram.h"

class Rectangle : public Parallelogram
{
public:
  Rectangle(float a, float b);

  float area() override;
};

#endif // RECTANGLE_H
