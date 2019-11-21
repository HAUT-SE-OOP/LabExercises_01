#ifndef COMPLEX_H
#define COMPLEX_H

/* class definition for Complex */
class Complex
{
public:
    Complex(double real,double imaginary);
   void setComplexNumber(double,double);
   void printComplex();
   Complex add( const Complex &right );
   Complex subtract( const Complex &right );
private:
    double realPart;
    double imaginaryPart;
};

#endif

