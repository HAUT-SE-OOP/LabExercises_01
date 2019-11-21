// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */

class Complex
{
public:
	Complex();
	Complex(double,double);
	void printComplex();
	void setComplexNumber( double,double);
	Complex add(const Complex &);
	Complex subtract(const Complex &);
private:
	double realPart;
	double imaginaryPart;
};

#endif
