// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
public:
    explicit Complex ( double=0.0, double=0.0 );
    Complex add( const Complex &right );
    Complex subtract( const Complex &right );
    void printComplex();
    void setComplexNumber( double , double  );
private:
    double realPart;
    double  imaginaryPart ;
};
/* Write class definition for Complex */

#endif

