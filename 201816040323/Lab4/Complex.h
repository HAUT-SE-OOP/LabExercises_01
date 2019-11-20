#ifndef COMPLEX_H
#define COMPLEX_H
#include <string> // program uses C++ standard string class
using namespace std;

class Complex
{
public:
    Complex(double=0,double=0);
    Complex add( const Complex & );//Define an additive member function that returns a value of type Complex
    Complex subtract( const Complex & );//Define a subtracting member function that returns a value of type Complex
    void printComplex();
    void setComplexNumber(double,double);
private:
    double realPart;//Real component
    double imaginaryPart;//Imaginary part
};

#endif
