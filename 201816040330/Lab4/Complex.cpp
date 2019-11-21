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
   realPart=right.realPart+realPart;
   imaginaryPart=right.imaginaryPart+imaginaryPart;
   return *this;//返回了改变之后的成员函数的值


} // end function add

Complex Complex::subtract( const Complex &right )
{
   //Complex after;
   realPart=realPart-right.realPart;
   imaginaryPart=imaginaryPart-right.imaginaryPart;
   return *this;//返回了改变之后的成员函数的值
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
