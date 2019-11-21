#include <iostream>
using namespace std;

#include "Complex.h"

int main()
{
   //Complex a( 1, 7 ), b( 9, 2 ), c; // create three Complex objects
    Complex a(1,7);
    Complex b(9,2);
    Complex c;
   a.printComplex1(); // output object a
   cout << " + ";
   b.printComplex1(); // output object b
   cout << " = ";
   c = a.add( b ); // invoke add function and assign to object c
   c.printComplex2(); // output object c

   cout << '\n';
   a.setComplexNumber( 10, 1 ); // reset realPart and
   b.setComplexNumber( 11, 5 ); // and imaginaryPart
   a.printComplex1(); // output object a
   cout << " - ";
   b.printComplex1(); // output object b
   cout << " = ";
   c = a.subtract( b ); // invoke add function and assign to object c
   c.printComplex2(); // output object c
   cout << endl;
} // end main


