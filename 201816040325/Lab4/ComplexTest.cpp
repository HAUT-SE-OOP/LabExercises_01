// Lab 4: ComplexTest.cpp
#include <iostream>
using namespace std;

#include "Complex.h"

int main()
{
   Complex a( 1, 7 ),b(10,1); // create three Complex objects

   a.add(9,2);
   a.printComplex();

   cout << '\n';
   b.subtract(11,5);
   b.printComplex();
   cout << endl;
} // end main


