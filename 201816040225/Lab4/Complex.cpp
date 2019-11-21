// Lab 4: Complex.cpp
// Member-function definitions for class Complex.
#include <iostream>
using namespace std;

#include "Complex.h"

Complex::Complex( double real, double imaginary )//Complex constructor
{
   setComplexNumber( real, imaginary );
}

Complex Complex::add( const Complex &right )//function add

{
      realPart=realPart+right.realPart;
      imaginaryPart= imaginaryPart+right.imaginaryPart;
      return *this;//get the result


}
Complex Complex::subtract( const Complex &right )//function subtract
{

      realPart=realPart-right.realPart;
      imaginaryPart=imaginaryPart-right.imaginaryPart;
      return *this;//get the result

}
void Complex::printComplex()//function printComplex
{
   cout << '(' << realPart << "," << imaginaryPart << ')';
}

void Complex::setComplexNumber( double rp, double ip )
{
   realPart = rp;
   imaginaryPart = ip;
} // end function setComplexNumber
