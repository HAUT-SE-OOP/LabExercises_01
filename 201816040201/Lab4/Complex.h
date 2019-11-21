// Lab 4: Complex.h

#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
public:
    Complex( double=0 , double=0  );
    void   printComplex();
    Complex add( const Complex &  );
    Complex subtract( const Complex & );
    void setComplexNumber( double , double  );
private :
    double realPart;
    double imaginaryPart;
    // Complex x;
};
/* Write class definition for Complex */

#endif

