#include <iostream>
using namespace std;

#include "Complex.h"

Complex::Complex( double real, double imaginary )
{
   setComplexNumber( real, imaginary );
} // end Complex constructor

Complex Complex::add( const Complex &right ) /* define function add */
{
    Complex m(realPart = realPart + right.realPart,imaginaryPart = imaginaryPart + right.imaginaryPart);
    return m;
}
Complex Complex::subtract( const Complex &right ) /* define function subtract */
{
    Complex n(realPart = realPart - right.realPart,imaginaryPart = imaginaryPart - right.imaginaryPart);
    return n;
}

void Complex::printComplex() /* define function printComplex */
{
   cout << '(' << realPart << ", " << imaginaryPart << ')';
}

void Complex::setComplexNumber( double rp, double ip ) /* define function setComplexNumber */
{
   realPart = rp;
   imaginaryPart = ip;
}
