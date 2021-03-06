// Lab 4: Complex.cpp
// Member-function definitions for class Complex.
#include <iostream>
using namespace std;

#include "Complex.h"

Complex::Complex( double real, double imaginary )
{
   setComplexNumber( real, imaginary );
} // end Complex constructor

Complex Complex::add( const Complex &right )
{
    Complex z;
    z.realPart  = realPart +right.realPart;
    z.imaginaryPart  = imaginaryPart +right.imaginaryPart;
    return z;
} // end function add

Complex Complex::subtract( const Complex &right )
{
    Complex q;
    q.realPart  = realPart -right.realPart;
    q.imaginaryPart  = imaginaryPart -right.imaginaryPart;
    return q;
} // end function subtract

void Complex::printComplex()
{
   cout << '(' << realPart << ", " << imaginaryPart << ')';
} // end function printComplex

void Complex::setComplexNumber( double rp, double ip )
{
   realPart = rp;
   imaginaryPart = ip;
} // end function setComplexNumber
