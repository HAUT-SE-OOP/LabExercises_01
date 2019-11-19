// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
class Complex{

public:
    Complex( double =0, double =0);
    void setComplexNumber( double, double);
    void printComplex();
    Complex add(const Complex &);
    Complex subtract( const Complex & );
private:
    double realPart;
    double imaginaryPart;
};

#endif
