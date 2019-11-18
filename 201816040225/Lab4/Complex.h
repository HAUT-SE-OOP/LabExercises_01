// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex{
public:
    Complex(double,double);//create constructor
    Complex add( const Complex &right );//add function
   Complex subtract( const Complex &right );//subtract function
   void printComplex();//print function
   void setComplexNumber( double,double ) ;//new complexnumber
private://data member
    double realPart;
    double imaginaryPart;
};

#endif
