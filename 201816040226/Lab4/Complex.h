// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
#include <iostream>
//#include <double>
using namespace std;
#include "Complex.h"
// Complex class definition
class Complex
{
public:
    ComplexNumber(double ,double );
    void setComplexNumber(double rp, double ip);
   // double getComplexNumber();
    Complex add(const Complex & );
    Complex subtract(const Complex &);
    void printComplex();
    Complex(double ,double);
private:
    double realPart;
    double imaginaryPart;

};


#endif

