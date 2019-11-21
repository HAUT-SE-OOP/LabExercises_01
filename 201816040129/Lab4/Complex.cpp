// Lab 4: Complex.cpp
// Member-function definitions for class Complex.
#include <iostream>
using namespace std;

#include "Complex.h"

Complex::Complex( double real, double imaginary )
{
   setComplexNumber( real, imaginary );//initializes
} // end Complex constructor

Complex Complex::add( const Complex &right )
{
    realPart=realPart+right.realPart;//The real part of the final result is equal to the sum of two real parts
    imaginaryPart=imaginaryPart+right.imaginaryPart;//The imaginary part of the final result is equal to the sum of two imaginary parts
    Complex m(realPart,imaginaryPart);//get the realpart and the imaginarypart
    return m;//return the final result
   /* Write a statement to return a Complex object. Add
      the realPart of right to the realPart of this Complex
      object and add the imaginaryPart of right to the
      imaginaryPart of this Complex object */
} // end function add

Complex Complex::subtract( const Complex &right )
{
    realPart=realPart-right.realPart;//The real part of the final result is equal to the subtraction of two real parts
    imaginaryPart=imaginaryPart-right.imaginaryPart;//The imaginary part of the final result is equal to the subtraction of two imaginary parts
    Complex n(realPart,imaginaryPart);//get the realpart and the imaginarypart
    return n;//return the final result
   /* Write a statement to return a Complex object. Subtract
      the realPart of right from the realPart of this Complex
      object and subtract the imaginaryPart of right from
      the imaginaryPart of this Complex object */
} // end function subtract

void Complex::printComplex()//output
{
   cout << '(' << realPart << ", " << imaginaryPart << ')';//output the final result according to form
} // end function printComplex

void Complex::setComplexNumber( double rp, double ip )
{
   realPart = rp;//assign the value of the data to realPart
   imaginaryPart = ip;//assign the value of the data to imaginaryPart
} // end function setComplexNumber
