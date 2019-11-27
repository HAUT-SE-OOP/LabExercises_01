// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex class Complex*/

{
public:
    Complex(double,double);
    void setComplexNumber(double, double);
    void Complex::printComplex();
    Complex add(const Complex&);
    Complex substract(const Complex&);
private:
    double realPart;
    double imaginaryPart;
 };
#endif

