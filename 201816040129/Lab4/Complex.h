// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H


#include<string>
#include "Complex.h"

class Complex
{
public:
    Complex(double=0,double=0);// constructor initializes real and imaginary
    Complex add(const Complex &);// function to add the data
    Complex subtract(const Complex &);// function to substract the data
    void setComplexNumber( double, double);// function to set the data
    void printComplex();//// function to print the data
private:
    double realPart;
    double imaginaryPart;

};
/* Write class definition for Complex */

#endif

