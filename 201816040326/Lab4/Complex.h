// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
class Complex
{
public:
	Complex( double rp = 0, double ip = 0 );
	Complex add( const Complex &right );
	Complex subtract( const Complex &right );
	void printComplex();
	void setComplexNumber( double rp, double ip );	
private:
	double realPart;
	double imaginaryPart; 
};
#endif
