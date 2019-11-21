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
    Complex a(Real , Imaginary);
    a.Real = Real + right.Real;
    a.Imaginary = Imaginary + right.Imaginary ;
    return a ;

} // end function add

Complex Complex::subtract( const Complex &right )
{
    Complex a(Real , Imaginary);
    a.Real = Real - right.Real;
    a.Imaginary = Imaginary - right.Imaginary ;
    return a ;
} // end function subtract

void Complex::printComplex()
{
   cout << '(' << Real << ", " << Imaginary << ')';
} // end function printComplex

void Complex::setComplexNumber( double rp, double ip )
{
   Real = rp;
   Imaginary = ip;
} // end function setComplexNumber
