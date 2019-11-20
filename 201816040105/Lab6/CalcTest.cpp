// Lab Exercise 6: CalcTest.cpp

#include <iostream>
using namespace std; 

#include "SimpleCalculator.cpp"

int main()
{

   double a = 10.0;
   double b = 20.0;
   
   cout << "The value of a is: " << a << "\n";
   cout << "The value of b is: " << b << "\n\n";
   
   SimpleCalculator sc;
   double addition=sc.add(a,b);
   cout << "Adding a and b yields " << addition << "\n";

   double subtraction = sc.subtract( a, b );
   cout << "Subtracting b from a yields " << subtraction << "\n";

   double multiplication = sc.multiply( a, b );
   cout << "Multiplying a by b yields " << multiplication << "\n";
    
   double division=sc.divide(a,b);
   cout << "Dividing a by b yields " << division << endl;
}
