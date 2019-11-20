// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
class Complex
{
    double realPart;
    double imaginaryPart;
public:
    Complex( double, double );
    void setComplexNumber(double,double);
    void printComplex();
    Complex add( const Complex &);
    Complex subtract( const Complex &);
    double getReal() const;
    double getImag() const;
};
#endif
