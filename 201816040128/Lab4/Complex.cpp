// Lab 4: Complex.cpp
// Member-function definitions for class Complex.
#include <iostream>
#include <string>
using namespace std;

#include "Complex.h"

Complex::Complex( double real, double imaginary )
{
   setComplexNumber( real, imaginary );
} // end Complex constructor

Complex Complex::add( const Complex &right )
{
   /* Write a statement to return a Complex object. Add
      the realPart of right to the realPart of this Complex
      object and add the imaginaryPart of right to the
      imaginaryPart of this Complex object */

	real = real + right.real;
	imaginary = imaginary + right.imaginary;
	return *this;
} // end function add

Complex Complex::subtract( const Complex &right )
{
   /* Write a statement to return a Complex object. Subtract
      the realPart of right from the realPart of this Complex
      object and subtract the imaginaryPart of right from
      the imaginaryPart of this Complex object */
	real = real - right.real;
	imaginary = imaginary - right.imaginary;
	return *this;
} // end function subtract

void Complex::printComplex()
{
   cout << "(" << real << ", " << imaginary << ")";
} // end function printComplex

void Complex::setComplexNumber( double rp, double ip )
{
   real = rp;
   imaginary = ip;
} // end function setComplexNumber
