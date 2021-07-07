// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
class Complex
{
public:
    Complex(double=1,double=1);
    Complex add( const Complex & );
    Complex subtract( const Complex & );
    void setComplexNumber(double,double);
    void printComplex();
private:
    double realPart;
    double imaginaryPart;
};

#endif

