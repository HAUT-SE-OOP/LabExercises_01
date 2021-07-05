// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

#include "Complex.h"

class Complex
{
public;
    Complex(const double &,const double &);
    Complex::add( const Complex &right );
    Complex::subtract( const Complex &right );
    void setComplexNumber()const;
    void printComplex()const;
private
    int realPart;
    int imaginaryPart;
}
/* Write class definition for Complex */

#endif

