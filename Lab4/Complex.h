// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
#include <iostream>
using namespace std;
class Complex
{
public:
    Complex(double=1,double=1);//constructor with three parameter
    Complex add( const Complex &);//add function:to add one object by this object
    Complex subtract( const Complex &);//to subtract one object with one object
    double getRealPart()const;//number function that return the realPart
    double getImaginaryPart()const;//number function that return the imaginaryPart
    void setComplexNumber( double , double);//to set the data number
    void printComplex();//print the result
private:
    double realPart;
    double imaginaryPart;
};


#endif
