// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
//Complex definition
class Complex
{
public:
    Complex(double ,double);//Declare a constructor that has one parameter for each data member
    void printComplex();//function print complex
    void setComplexNumber(double,double);//function set complex number
    Complex add(const Complex &);//function to add
    Complex subtract(const Complex &);//function to subtract

private:
    double realPart;//real part for Complex
    double imaginaryPart;//imaginary part for Complex
};

#endif

