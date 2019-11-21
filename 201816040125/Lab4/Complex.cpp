#include <iostream>
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
       double realpart=real+right.real;
       double imaginarypart=imaginary+right.imaginary;
      return realpart;
      return imaginarypart;
} // end function add

Complex Complex::subtract( const Complex &right )
{
   /* Write a statement to return a Complex object. Subtract
      the realPart of right from the realPart of this Complex
      object and subtract the imaginaryPart of right from
      the imaginaryPart of this Complex object */
        double realpart=real-right.real;
        double imaginarypart=imaginary-right.imaginary;
       return realpart;
       return imaginarypart;
} // end function subtract

void Complex::printComplex1()
{
    double realpart=real;
    double imaginarypart=imaginary;
   cout << '(' << realpart << ", " << imaginarypart << ')';
} // end function printComplex

void Complex::printComplex2()
{
    double realpart;
    double imaginarypart;
   cout << '(' << realpart << ", " << imaginarypart << ')';
} // end function printComplex
void Complex::setComplexNumber( double rp, double ip )
{
   real = rp;
   imaginary = ip;
} // end function setComplexNumber
