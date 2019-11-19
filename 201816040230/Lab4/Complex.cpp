// Lab 4: Complex.cpp
// Member-function definitions for class Complex.
#include <iostream>
using namespace std;

#include "Complex.h"

Complex::Complex( double real, double imaginary )
{
   setComplexNumber( real, imaginary );
} // end Complex constructor

Complex Complex::add(  Complex right )
{
   /* Write a statement to return a Complex object. Add
      the realPart of right to the realPart of this Complex
      object and add the imaginaryPart of right to the
      imaginaryPart of this Complex object */
      realPart+=right.realPart;
      imaginaryPart+=right.imaginaryPart;
      return *this;
 //使用this指针获取对象的值

} // end function add

Complex Complex::subtract(  Complex right )
{
   /* Write a statement to return a Complex object. Subtract
      the realPart of right from the realPart of this Complex
      object and subtract the imaginaryPart of right from
      the imaginaryPart of this Complex object */
      realPart-=right.realPart;
      imaginaryPart-=right.imaginaryPart;
      return *this;

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
