#ifndef SQUARE_H
#define SQUARE_H
#include "Parallelogram.h"

class Square : public Parallelogram
{
public:
  Square(float a);

  float area() override;
};

#endif // SQUARE_H
