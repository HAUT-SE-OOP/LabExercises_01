// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
class Complex{
public:
	Complex(double, double);
	Complex add(const Complex& );
	Complex subtract(const Complex& );
	void printComplex();
	void setComplexNumber(double , double );
private:
	double real ;
	double imaginary;
};
#endif

