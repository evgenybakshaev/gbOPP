#include "power.h"

Power::Power()
{
    m_a = 0.0f;
    m_b = 0.0f;
}

void Power::Set(float a, float b)
{
    m_a = a;
    m_b = b;
}

float Power::Calcaulate()
{
    return pow(m_a, m_b);
}
