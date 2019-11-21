//lab4:Complex.cpp
#include <iostream>
using namespace std;
#include "Complex.h"
//constructor realpart, imaginarypart
Complex::Complex(double r, double i)
{
   setComplexNumber(r, i);
}

//fuction to set the number
void Complex::setComplexNumber(double r, double i)
{
    real = r;
    imaginary = i;
}
//fuction to calculate the sum
Complex Complex::add(const Complex& n)
{
    Complex result;
    result.real = real + n.real;
    result.imaginary = imaginary + n.imaginary;
    return result;
}

//fuction to calculate the difference
Complex Complex::subtract(const Complex& n)
{
    Complex result;
    result.real = real - n.real;
    result.imaginary = imaginary - n.imaginary;
    return result;
}

//fuction to print
void Complex::printComplex()
{
   cout << '(' << real << ", " << imaginary << ')';
}
