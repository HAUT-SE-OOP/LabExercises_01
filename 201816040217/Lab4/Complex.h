// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
class Complex
{
public:
    Complex(double real = 0,double imaginary = 0);
    Complex add(const Complex&);
    Complex subtract(const Complex&);
    void printComplex();
    void setComplexNumber(double, double);
    double realPart, imaginaryPart;
};
#endif

