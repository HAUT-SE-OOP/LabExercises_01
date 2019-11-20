#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
class Complex
{
public:
    Complex(double=0,double=0);
    void printComplex1();
    void printComplex2();
    void setComplexNumber(double,double);
    Complex subtract(const Complex &right);
    Complex add(const Complex &right);
private:
    double real;
    double imaginary;
};

#endif

