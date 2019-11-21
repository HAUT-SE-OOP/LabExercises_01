// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <string>
using namespace std;

/* Write class definition for Complex */
class Complex
{
public:
    explicit Complex(double,double);
    void setComplexNumber(double ,double);
    void printComplex();
    Complex add(const Complex &);
    Complex subtract(const Complex &);
private:
    double realPart;
    double imaginaryPart;
};

#endif

