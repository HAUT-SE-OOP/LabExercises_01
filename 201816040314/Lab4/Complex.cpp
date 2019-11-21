// Lab 4: Complex.cpp
// Member-function definitions for class Complex.
#include <iostream>
using namespace std;

#include "Complex.h"

Complex::Complex( double real, double imaginary )//to Initialize the data of the object
{
   setComplexNumber( real, imaginary );
} // end Complex constructor

Complex Complex::add( const Complex &right )
{
   /* Write a statement to return a Complex object. Add
      the realPart of right to the realPart of this Complex
      object and add the imaginaryPart of right to the
      imaginaryPart of this Complex object */
      setComplexNumber(getRealPart()+right.getRealPart(),getImaginaryPart()+right.getImaginaryPart());
      return *this;

} // end function add

Complex Complex::subtract( const Complex &right )
{
   /* Write a statement to return a Complex object. Subtract
      the realPart of right from the realPart of this Complex
      object and subtract the imaginaryPart of right from
      the imaginaryPart of this Complex object */
      setComplexNumber(getRealPart()-right.getRealPart(),getImaginaryPart()-right.getImaginaryPart());
      return *this;
} // end function subtract

void Complex::printComplex()
{
   cout << '(' << realPart << ", " << imaginaryPart << ')';
} // end function printComplex

void Complex::setComplexNumber( double rp, double ip )
{
   realPart = rp;//to set the value of the realPart
   imaginaryPart = ip;//to set the value of the imaginaryPart
} // end function setComplexNumber
double Complex::getImaginaryPart()const
{
    return imaginaryPart;//to return the value of the imaginaryPart
}
double Complex::getRealPart()const
{
    return realPart;//to return the value of the realPart
}
