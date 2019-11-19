// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

using namespace std;
/* Write class definition for Complex */
class Complex
{
public:
    Complex( double=0,double=0 );//constructor
    void setComplexNumber( double, double );//function to set complex
    Complex add( const Complex );//function to add
    Complex subtract( const Complex );//function to subtract
    void printComplex();//function to print
private:
    double realPart;
    double imaginaryPart;
};

#endif

