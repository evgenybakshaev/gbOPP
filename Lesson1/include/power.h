#ifndef POWER_H
#define POWER_H
#include <math.h>

class Power
{
private:
    float m_a;
    float m_b;
public:
    Power();

    void Set(float,float);
    float Calcaulate();
};

#endif // POWER_H
