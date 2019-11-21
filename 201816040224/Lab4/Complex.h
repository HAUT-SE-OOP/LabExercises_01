// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
class Complex
{
public:
    Complex(double,double);
    void printComplex();
    void setComplexNumber(double rp,double ip);
    Complex add(const Complex &right);
    Complex subtract(const Complex &right);
    Complex();
private:
    double realPart;
    double imaginaryPart;
};
#endif



