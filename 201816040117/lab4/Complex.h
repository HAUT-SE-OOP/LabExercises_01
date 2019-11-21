// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H
#include <string> // program uses C++ standard string class
using namespace std;
/* Write class definition for Complex */
class Complex
{public:
    Complex(double real=0,double imaginary=0);//function to initialize
    Complex add(const Complex&);//add function to add data,and initializing a Complex
    Complex subtract(const Complex&);//subtract function to initializing a Complex
    void printComplex();//function to output the realPart and imaginaryPart
    void setComplexNumber(double,double);//function to set realPart and imaginaryPart
 private:
     double realPart;//real part in the Complex
     double imaginaryPart;//imaginary part in the Complex
};

#endif

