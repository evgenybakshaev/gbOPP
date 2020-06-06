#ifndef FRACTION_H
#define FRACTION_H
#include <string>
#include <sstream>
#include <stdexcept>
using std::string;

class Fraction
{
private:
    int m_numerator, m_denominator;
public:
  Fraction();
  Fraction(int n);
  Fraction(int n, int d);

  Fraction operator+ (const Fraction &f);
  Fraction operator- (const Fraction &f);
  Fraction operator* (const Fraction &f);
  Fraction operator/ (const Fraction &f);

  Fraction operator- ();

  bool operator== (const Fraction &f);
  bool operator!= (const Fraction &f);
  bool operator>= (const Fraction &f);
  bool operator<= (const Fraction &f);
  bool operator> (const Fraction &f);
  bool operator< (const Fraction &f);

  string ToString() const;
  friend std::ostream& operator<< (std::ostream &out, const Fraction &f);
};



#endif // FRACTION_H
