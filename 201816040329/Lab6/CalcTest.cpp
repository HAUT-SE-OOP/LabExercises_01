#include <iostream>
using namespace std;

#include "SimpleCalculator.h"

int main()
{

   double a = 10.0;
   double b = 20.0;
   SimpleCalculator Simc;

   cout << "The value of a is: " << a << "\n";
   cout << "The value of b is: " << b << "\n\n";
   cout<<"Adding a and b yields"<<Simc.add(a,b)<<"\n";
   double subtract=Simc.subtract(a,b);


   cout << "Adding a and b yields " << Simc.add(a,b) << "\n";

 double subtraction = Simc.subtract( a, b );
   cout << "Subtracting b from a yields " << subtraction << "\n";
   double multiplication=Simc.multiply(a,b);
   cout<<" multiply a by b yields"<<Simc.multiply(a,b)<<"\n";
   cout << "Dividing a by b yields " << division << endl;
}
