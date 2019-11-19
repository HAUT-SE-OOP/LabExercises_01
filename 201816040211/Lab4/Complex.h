// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */

class Complex
{
public:

    Complex( double real, double imaginary);
    void add( const Complex &right );
    void subtract( const Complex &right );
    void printComplex();
    void setComplexNumber( double rp, double ip ) ;

private:
    double real;
    double imaginary;
};



#endif

