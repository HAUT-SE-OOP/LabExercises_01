#include <iostream>
using namespace std;

#include "Complex.h"

Complex::Complex( double real, double imaginary )
{
   setComplexNumber( real, imaginary );
} // end Complex constructor

Complex Complex::add( const Complex &right )
{
    Complex sum;
    sum.realPart = realPart + right.realPart;//The real part of a plus the real part of b
    sum.imaginaryPart = imaginaryPart + right.imaginaryPart;//The imaginary part of a plus the imaginary part of b
    return sum;
} // end function add

Complex Complex::subtract( const Complex &right )
{
   Complex sub;
   sub.realPart=realPart-right.realPart;//The real part of a minus the real part of b
   sub.imaginaryPart=imaginaryPart-right.imaginaryPart;//The imaginary part of a minus the imaginary part of b
   return sub;
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
