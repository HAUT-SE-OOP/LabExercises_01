// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */

#endif

class Complex
{
public:
    Complex(double,double);

    void printComplex();
    void setComplexNumber(double,double);
    Complex add(const Complex &);
   Complex subtract(const Complex &);
    Complex()
    {
         realPart = 0.0;
         imaginaryPart = 0.0;
       };
private:
    double realPart;
    double  imaginaryPart;
   };
