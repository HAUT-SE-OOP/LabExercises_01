// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

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
/* Write class definition for Complex */

#endif

