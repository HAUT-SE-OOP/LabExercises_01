
// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;


class Complex
{
public:
   explicit Complex( double=0, double =0 ) ;
   void setComplexNumber(double,double );
   Complex add( const Complex &);
   Complex subtract( const Complex &);
   void printComplex();
private:
     double realPart;
     double imaginaryPart;

};

#endif
