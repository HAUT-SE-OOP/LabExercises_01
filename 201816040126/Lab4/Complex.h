// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
public:
    explicit Complex( double = 0.0, double = 0.0);
    void printComplex();
    void setComplexNumber( double = 0.0 , double = 0.0 ) ;
    Complex add(const Complex &);
    Complex subtract(const Complex &);

private:
    double realPart;
    double imaginaryPart;
};
#endif

