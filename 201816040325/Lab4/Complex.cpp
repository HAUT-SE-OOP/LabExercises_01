// Lab 4: Complex.cpp

#include <iostream>
using namespace std;

#include "Complex.h"

Complex::Complex( double a,double b)
:realpart(a),imaginarypart(b)
{

} // end Complex constructor


void Complex::add(double a,double b)
{
     cout << '(' << realpart << ", " << imaginarypart << ')';
     cout <<" + ";
     cout << '(' << a << ", " << b << ')';
     cout <<" = ";
     realpart=realpart+a;
     imaginarypart=imaginarypart+b;
} // end function add

void Complex::subtract(double a,double b)
{
     cout << '(' << realpart << ", " << imaginarypart << ')';
     cout <<" + ";
     cout << '(' << a << ", " << b << ')';
     cout <<" = ";
     realpart=realpart-a;
     imaginarypart=imaginarypart-b;
} // end function subtract

void Complex::printComplex()
{
   cout << '(' << realpart << ", " << imaginarypart << ')';
} // end function printComplex

void Complex::setComplexNumber( double a, double b)
{
    realpart=a;
    imaginarypart=b;
}
