// Lab 4: Complex.h
#include <iostream>
using namespace std;

/* Write class definition for Complex */



class Complex
{
private:
    double realPart;
    double imaginaryPart;
public:
    Complex(double real=0,double imag=0);
    Complex add( const Complex &);
    Complex subtract( const Complex & );
    void printComplex();
    void setComplexNumber( double , double );
    double getrealPart();
    double getimaginaryPart();



};
