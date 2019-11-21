// Lab 4: ComplexTest.cpp
#include <iostream>
using namespace std;

#include "Complex.h"

int main()
{
    Complex a( 1, 7 ), b( 9, 2 ); // create three Complex objects

    a.printComplex(); // output object a
    cout << " + ";
    b.printComplex(); // output object b
    cout << " = ";
    Complex c(a.getRealPart()+b.getRealPart() , a.getImaginaryPart() + b.getImaginaryPart() ); // invoke add function and assign to object
    c.printComplex(); // output object c

    cout << '\n';
    a.setComplexNumber( 10, 1 ); // reset realPart and
    b.setComplexNumber( 11, 5 ); // and imaginaryPart
    a.printComplex(); // output object a
    cout << " - ";
    b.printComplex(); // output object b
    cout << " = ";
    Complex d(a.getRealPart() - b.getRealPart() , a.getImaginaryPart() - b.getImaginaryPart() );  // invoke add function and assign to object c
    d.printComplex(); // output object c
    cout << endl;
} // end main


