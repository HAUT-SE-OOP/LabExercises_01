// Lab 4: Complex.cpp
// Member-function definitions for class Complex.
#include <iostream>
using namespace std;

#include "Complex.h"

Complex::Complex( double real, double imaginary )//constructor initialization
{
   setComplexNumber( real, imaginary );
} // end Complex constructor

Complex Complex::add( const Complex &right )//add two complex numbers
{
    Complex y(realPart+=right.realPart,imaginaryPart+=right.imaginaryPart);
    return y;
   /* Write a statement to return a Complex object. Add
      the realPart of right to the realPart of this Complex
      object and add the imaginaryPart of right to the
      imaginaryPart of this Complex object */
} // end function add

Complex Complex::subtract( const Complex &right )//subtract weo complex numbers
{
    Complex y(realPart-=right.realPart,imaginaryPart-=right.imaginaryPart);
    return y;
   /* Write a statement to return a Complex object. Subtract
      the realPart of right from the realPart of this Complex
      object and subtract the imaginaryPart of right from
      the imaginaryPart of this Complex object */
} // end function subtract

void Complex::printComplex()//output operation result
{
   cout << '(' << realPart << ", " << imaginaryPart << ')';
} // end function printComplex

void Complex::setComplexNumber( double rp, double ip )//set function change the value of the parameter
{
   realPart = rp;
   imaginaryPart = ip;
} // end function setComplexNumber
