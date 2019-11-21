// Lab Exercise 6: CalcTest.cpp

#include <iostream>
using namespace std;

#include "SimpleCalculator.h"

int main()
{

   double a = 10.0;
   double b = 20.0;

   /* Instantiate an object of type Simplecalculator */
   SimpleCalculator sc;//instantiate object sc of class of SimpleCalculator

   cout << "The value of a is: " << a << "\n";//output a
   cout << "The value of b is: " << b << "\n\n";//output b

   /* Write a line that adds a and b through your SimpleCalculator
      object; assign the result to a variable named addition */
   double addition=sc.add(a,b);//set addition=a+b
   cout << "Adding a and b yields " << addition << "\n";//output addition
   double subtraction = sc.subtract( a, b );//set subtraction=a-b
   cout << "Subtracting b from a yields " << subtraction << "\n";//output subtraction

   double multiplication = sc.multiply( a, b );//set multiplication = a*b
   cout << "Multiplying a by b yields " << multiplication << "\n";//output multiplication

   /* Write a line that divides a and b through the
      SimpleCalculator object; assign the result to a
	  variable named division */
    double division=sc.divide(a,b);//set division =a/b
   cout << "Dividing a by b yields " << division << endl;//output division
}
