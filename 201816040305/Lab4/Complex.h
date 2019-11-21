// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

#endif

class Complex
{
public:
    Complex( double=0 , double=0 );
    Complex add(const Complex &) ;
    Complex subtract(const Complex &) ;
    void printComplex() ;
    void setComplexNumber(double , double) ;
private:
    double Real , Imaginary;
};

