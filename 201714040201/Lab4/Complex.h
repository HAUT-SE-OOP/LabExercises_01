// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */

class Complex
{
public:
    Complex( double=0, double=0 );//constructor initialization
    Complex add( const Complex & );//add two complex numbers
    Complex subtract( const Complex & );//subtract weo complex numbers
    void printComplex();////output operation result
    void setComplexNumber( double rp, double ip );//set function change the value of the parameter

private:
    double realPart;//real part
    double imaginaryPart;//imaginary part
};
#endif

