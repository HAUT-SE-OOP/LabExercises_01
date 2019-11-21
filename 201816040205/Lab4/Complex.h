// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

using namespace std;
class Complex
{
public:
    Complex(double,double);
    void setComplexNumber(double,double);
    Complex add(const Complex &);
    Complex subtract(const Complex &);
    void printComplex();

private:
 double realPart;
 double imaginaryPart;
};
#endif

