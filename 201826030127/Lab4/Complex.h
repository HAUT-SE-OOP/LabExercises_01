// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

// class definition for Complex
class Complex
{
    public:
    Complex(double, double);
    Complex add( const Complex &);
    Complex subtract( const Complex &);
    void printComplex();
    void setComplexNumber( double, double) ;
    private:
    double  realPart;
    double  imaginaryPart;
};


#endif
