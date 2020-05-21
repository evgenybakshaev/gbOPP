#include "fraction.h"

std::ostream& operator<< (std::ostream &out, const Fraction &f)
{
    out << f.ToString();
    return out;
}

Fraction::Fraction()
  : Fraction(0, 1)
{

}

Fraction::Fraction(int n)
  : Fraction(n, 1)
{

}

Fraction::Fraction(int n, int d)
  : m_numerator(n),m_denominator(d)
{
  if(d == 0) throw std::overflow_error("Divide by zero exception");
}

Fraction Fraction::operator+(const Fraction &f)
{
  return Fraction(m_numerator*f.m_denominator+m_denominator*f.m_numerator,m_denominator*f.m_denominator);
}

Fraction Fraction::operator-(const Fraction &f)
{
  return Fraction(m_numerator*f.m_denominator-m_denominator*f.m_numerator,m_denominator*f.m_denominator);
}

Fraction Fraction::operator*(const Fraction &f)
{
  return Fraction(m_numerator*f.m_numerator,m_denominator*f.m_denominator);
}

Fraction Fraction::operator/(const Fraction &f)
{
  return Fraction(m_numerator*f.m_denominator,m_denominator*f.m_numerator);
}

Fraction Fraction::operator-()
{
  return Fraction(-m_numerator,m_denominator);
}

bool Fraction::operator==(const Fraction &f)
{
  return m_numerator * f.m_denominator == f.m_numerator * m_denominator;
}

bool Fraction::operator!=(const Fraction &f)
{
  return !operator==(f);
}

bool Fraction::operator>=(const Fraction &f)
{
  return m_numerator * f.m_denominator >= f.m_numerator * m_denominator;
}

bool Fraction::operator<(const Fraction &f)
{
  return !operator>=(f);
}

bool Fraction::operator<=(const Fraction &f)
{
  return m_numerator * f.m_denominator <= f.m_numerator * m_denominator;
}

bool Fraction::operator>(const Fraction &f)
{
  return !operator<=(f);
}

std::string Fraction::ToString() const
{
  std::stringstream ss;
  ss << m_numerator << "/" << m_denominator;
  return ss.str();
}
