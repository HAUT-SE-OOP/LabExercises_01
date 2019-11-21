// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;

class Complex
{
public:
        //Complex();
        Complex(double , double );
        Complex add(const Complex &);
        Complex subtract(const Complex &);
        void setComplexNumber( double , double );
        void printComplex();
private:
       double  realPart;
       double  imaginaryPart;
};
/* Write class definition for Complex */

#endif
