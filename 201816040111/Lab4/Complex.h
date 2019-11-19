// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
class Complex
{
public:
    Complex( double = 0,double = 0 );//Define default values for constructors
    void printComplex();
    void setComplexNumber( double, double );
    double getRealPart();
    double getImaginaryPart();
private:
    double realPart;
    double imaginaryPart;
};
#endif

