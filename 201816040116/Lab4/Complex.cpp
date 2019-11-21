#include <iostream>
using namespace std;
#include "Complex.h"
Complex::Complex( double real, double imaginary )   //Initialize the class
{
   setComplexNumber(real,imaginary);
}
void Complex::setComplexNumber(double rp,double ip)     //function set to Complex
{
   realPart=rp;
   imaginaryPart=ip;
}       // end function setComplexNumber
Complex Complex::add( const Complex &right )    //Pass in the corresponding data for the class
{                                               //function add the data of the class
   realPart=realPart+right.realPart;
   imaginaryPart=imaginaryPart+right.imaginaryPart;
   return{realPart,imaginaryPart};
} // end function add
Complex Complex::subtract( const Complex &right )    //Pass in the corresponding data for the class
{                                                    //function subtract the data of the class
   realPart=realPart-right.realPart;
   imaginaryPart=imaginaryPart-right.imaginaryPart;
   return{realPart,imaginaryPart};
} // end function subtract
void Complex::printComplex()    //The output data
{
   cout<<'('<<realPart<<","<<imaginaryPart<<')';
} // end function printComplex
