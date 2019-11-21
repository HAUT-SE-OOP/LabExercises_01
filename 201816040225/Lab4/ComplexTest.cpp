// Lab 4: ComplexTest.cpp
#include <iostream>
using namespace std;

#include "Complex.h"

int main()
{
   Complex a( 1, 7 ), b( 9, 2 ), c(0,0); // three Complex objects

   a.printComplex(); // output a
   cout << " + ";
   b.printComplex(); // output b
   cout << " = ";
   c= a.add( b ); // add to c
   c.printComplex(); // output c

   cout << '\n';
   a.setComplexNumber( 10, 1 ); // new part
   b.setComplexNumber( 11, 5 ); // new part
   a.printComplex(); // output a
   cout << " - ";
   b.printComplex(); // output b
   cout << " = ";
   c = a.subtract( b ); //add function to object c
   c.printComplex(); // output object c
   cout << endl;
} // end main


