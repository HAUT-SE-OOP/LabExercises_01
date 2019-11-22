// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
private:
    double realPart;
    double imaginaryPart;
public:
    Complex(double =0, double =0);
    Complex add(const Complex &);
    Complex subtract(const Complex &);
    void printComplex();
    void setComplexNumber(double, double);
};

/* Write class definition for Complex */

#endif

