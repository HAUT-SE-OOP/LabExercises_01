//Lab4:Complex.h
//Complex class definition
#include <string>
#include <iostream>
#ifndef COMPLEX_H
#define COMPLEX_H
using namespace std;
//Complex class defition
class Complex
{
public:
    //constructor realpart, imaginarypart
    Complex(double r = 0.0, double i = 0.0);
    void setComplexNumber(double, double);//fuction set the number
    Complex add(const Complex& n);//fuction to calculate the sum
    Complex subtract(const Complex& n);//fuction to calculate the difference
    void printComplex();//fuction to print the result
private:
    double real;//real for this Complex
    double imaginary;//imaginary for this Complex
};
#endif
