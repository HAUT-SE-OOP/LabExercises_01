// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

using namespace std;
/* Write class definition for Complex */
class Complex
{
public:
    Complex();
    Complex(double,double);
    void setComplexNumber(double,double);
    Complex add(const Complex&);
    Complex subtract(const Complex&);
    void printComplex();
private:
    double realPart,imaginaryPart;
};
#endif
