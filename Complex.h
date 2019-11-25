// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H
using namespace std;
class Complex
{
public:

    Complex(double,double);//constructor initialize complex
    Complex()
    {
        realPart=0.0;
        imaginaryPart=0.0;
    }
    Complex add(const Complex &);//method to add complex

    Complex subtract(const Complex &);//method to subtract complex

    void printComplex();//method to printComplex

    void setComplexNumber(double,double);//method to setComplexNumber
private:

    double realPart; // double data member for the Complex realPart

    double imaginaryPart;// double data member for the Complex imaginaryPart

};
 // end class Employee

#endif

