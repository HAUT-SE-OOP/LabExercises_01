// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H
using namespace std;

class Complex
{
public:
    Complex( double=0 , double=0 );  // default constructor
    Complex add( const Complex ); //add two complex numbers
    Complex subtract( const Complex ); //subtract two complex numbers
    void printComplex(); //print result
    void setComplexNumber( double , double ); //set a complex number
private:
    double realPart; //the real part of a complex number
    double imaginaryPart; //the imaginary part of a complex number
};

#endif

