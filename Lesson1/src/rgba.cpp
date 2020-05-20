#include "rgba.h"

RGBA::RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha)
{
    m_red = red;
    m_green = green;
    m_blue = blue;
    m_alpha = alpha;
}

void RGBA::print()
{
    std::cout << "Red " << m_red
              << "Green " << m_green
              << "Blue " << m_blue
              << "Alpha " << m_alpha
              << std::endl;
}

