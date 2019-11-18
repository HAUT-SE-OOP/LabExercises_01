// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
class Complex
{
public:
    Complex(double=0,double=0); // default constructor
    Complex add(const Complex &); // function to add
    Complex subtract(const Complex &);// function to subtract
    void printComplex();// print function
    void setComplexNumber(double,double);//set function
private:
    double realPart;
    double imaginaryPart;
};
#endif
