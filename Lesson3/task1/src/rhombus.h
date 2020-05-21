#ifndef RHOMBUS_H
#define RHOMBUS_H
#include "parallelogram.h"

class Rhombus : public Parallelogram
{
public:
  Rhombus(float a, float b);
  float area() override;
};

#endif // RHOMBUS_H
