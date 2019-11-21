// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */

#endif
class Complex
{
public:
    Complex(double rp = 0,double ip =0);
    void printComplex();
    void setComplexNumber( double rp, double ip );
    Complex add(const Complex &);
    Complex subtract(const Complex &);
private:
    double realPart;
    double  imaginaryPart;
};
