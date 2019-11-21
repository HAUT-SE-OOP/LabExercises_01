// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
class Complex
{
private:
    double imaginaryPart;
    double realPart;
public:
    Complex();
    Complex(double,double);
    Complex add(const Complex&);
    Complex subtract(const Complex&);
    void printComplex();
    void setComplexNumber(double,double);
};

#endif

