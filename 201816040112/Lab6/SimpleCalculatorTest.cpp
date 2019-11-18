// Lab Exercise 6: CalcTest.cpp

#include <iostream>
using namespace std;

#include "SimpleCalculator.h"

int main()
{

   double a = 10.0;
   double b = 20.0;
   double addition,subtraction,multiplication,division;
   SimpleCalculator temp;
   addition=temp.addite(a,b);
   subtraction=temp.subtract(a,b);
   multiplication=temp.multiply(a,b);
   division=temp.diviside(a,b);
   /* Instantiate an object of type Simplecalculator */
   cout << "The value of a is: " << a << "\n";
   cout << "The value of b is: " << b << "\n\n";

   /* Write a line that adds a and b through your SimpleCalculator
      object; assign the result to a variable named addition */
   cout << "Adding a and b yields " << addition << "\n";


   cout << "Subtracting b from a yields " << subtraction << "\n";


   cout << "Multiplying a by b yields " << multiplication << "\n";

   /* Write a line that divides a and b through the
      SimpleCalculator object; assign the result to a
	  variable named division */
   cout << "Dividing a by b yields " << division << endl;
}
