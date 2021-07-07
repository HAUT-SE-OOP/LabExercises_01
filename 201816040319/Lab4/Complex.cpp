// Lab 4: Complex.cpp复数的加和；实数加实数；虚数加虚数；
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
    Complex ad(right.realPart+realPart,right.imaginaryPart+imaginaryPart);
    return ad;
} // end function add

Complex Complex::subtract( const Complex &right )  //subtract 减
{
    Complex ad(right.realPart-realPart,right.imaginaryPart-imaginaryPart);
    return ad;
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
