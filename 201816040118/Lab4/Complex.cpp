// Lab 4: Complex.cpp
// Member-function definitions for class Complex.
#include <iostream>
using namespace std;

#include "Complex.h"

Complex::Complex( double real, double imaginary )
{
   setComplexNumber( real, imaginary );//initialization
} // end Complex constructor

Complex Complex::add( const Complex &right )
{
   /* Write a statement to return a Complex object. Add
      the realPart of right to the realPart of this Complex
      object and add the imaginaryPart of right to the
      imaginaryPart of this Complex object */
     realPart+=right.realPart;
     imaginaryPart+=right.imaginaryPart;//Addition operation
     return *this;     //return this objects
} // end function add

Complex Complex::subtract( const Complex &right )
{
   /* Write a statement to return a Complex object. Subtract
      the realPart of right from the realPart of this Complex
      object and subtract the imaginaryPart of right from
      the imaginaryPart of this Complex object */
      realPart-=right.realPart;
      imaginaryPart-=right.imaginaryPart;//Subtraction operation
      return *this; //return this objects
} // end function subtract

void Complex::printComplex()
{
   cout << '(' << realPart << ", " << imaginaryPart << ')';  //output
} // end function printComplex

void Complex::setComplexNumber( double rp, double ip )   //initialization
{
   realPart = rp;
   imaginaryPart = ip;
} // end function setComplexNumber
