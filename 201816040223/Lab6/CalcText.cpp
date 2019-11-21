// Lab Exercise 6: CalcTest.cpp

#include <iostream>
using namespace std;

#include "SimpleCalculator.h"

int main()
{



   SimpleCalculator sc(10,20);
   /* Instantiate an object of type Simplecalculator */
   cout << "The value of a is: " << sc.getnumber1() << "\n";
   cout << "The value of b is: " << sc.getnumber2() << "\n\n";

   /* Write a line that adds a and b through your SimpleCalculator
      object; assign the result to a variable named addition */
     // double addition = sc.addition(a,b);
   double  a=sc.addition();
   cout << "Adding a and b yields " << a << "\n";

  // double subtraction = sc.subtract( a, b );
   cout << "Subtracting b from a yields " << sc.subtraction << "\n";

   //double multiplication = sc.multiply( a, b );
   cout << "Multiplying a by b yields " << sc.multiplication << "\n";

   /* Write a line that divides a and b through the
      SimpleCalculator object; assign the result to a
	  variable named division */
	//  double division=sc.division(a,b);
   cout << "Dividing a by b yields " << sc.division << endl;
}
