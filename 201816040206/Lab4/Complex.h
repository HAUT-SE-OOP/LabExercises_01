// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
  public:
      Complex( double = 0, double = 0);
      void printComplex();
      void setComplexNumber( double, double);
      Complex add(const Complex &right);
      Complex subtract( const Complex &right );
  private:
    double realPart;
    double imaginaryPart;
};
/* Write class definition for Complex */

#endif
