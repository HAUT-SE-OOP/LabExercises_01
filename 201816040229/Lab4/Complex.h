// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */

#endif
#include <string>
using namespace std;

class Complex
{
public:
    Complex(double, double);
    Complex add(const Complex &right);
    Complex subtract(const Complex &right);
    void  printComplex();
    void setComplexNumber(double , double );
private:

    double realPart;
    double imaginaryPart;
};

