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
    realPart+=right.realPart;// Add the realPart of right to the realPart of this Complex object

    imaginaryPart+=right.imaginaryPart;//add the imaginaryPart of right to the imaginaryPart of this Complex object

    return *this;//a statement to return a Complex object

} // end function add

Complex Complex::subtract( const Complex &right )
{
    realPart -= right.realPart;//a statement to return a Complex object

    imaginaryPart -= right.imaginaryPart;//Subtract the realPart of right from the realPart of this Complex object

    return *this;//subtract the imaginaryPart of right from the imaginaryPart of this Complex object

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
