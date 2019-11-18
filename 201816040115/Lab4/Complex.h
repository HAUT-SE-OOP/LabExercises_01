// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
class Complex
{
public:
    explicit Complex(); //no argument constructor
    explicit Complex(double real,double imaginary); //constructor initializes Complex
    Complex add(const Complex &right);  //function to add
    Complex subtract( const Complex &right );   //function to subtract
    void printComplex();    //function to printComplex
    void setComplexNumber( double rp, double ip );  //function to setComplexNumber
private:
    double realPart;    //real part
    double imaginaryPart;   //imaginary part

};
#endif

