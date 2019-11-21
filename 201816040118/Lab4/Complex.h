// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H
#include<string>
using namespace std;

/* Write class definition for Complex */
class Complex
{
public:
    Complex(double=0,double=0); //Define a build function with a default argument of 0
    void setComplexNumber(double,double);//Declare a setComplexNumber function
    Complex add(const Complex &);//Declare a add function
    Complex subtract(const Complex &);//Declare a subtract function
    void printComplex(); //Declare a printComplex function
private:
    double realPart;  //Declare a realPart data member
    double imaginaryPart;//Declare a imaginaryPart data member
};
#endif
