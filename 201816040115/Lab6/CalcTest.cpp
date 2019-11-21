// Lab Exercise 6: CalcTest.cpp

#include <iostream>

using namespace std;

#include "SimpleCalculator.h"

int main()
{
   double a ;
   double b ;
   cout << "Please input two double number:" << endl;
   cin >> a >> b;

   /* Instantiate an object of type Simplecalculator */
   SimpleCalculator sc(a,b);
   cout << "The value of a and b are: " << endl;
   sc.printValues();

   /* Write a line that adds a and b through your SimpleCalculator
      object; assign the result to a variable named addition */
   sc.setAnswer(sc.add(a,b));
   cout << "Adding a and b yields " << sc.getAnswer() << "\n";

   sc.setAnswer(sc.subtract( a, b ));
   cout << "Subtracting b from a yields " << sc.getAnswer() << "\n";

   sc.setAnswer(sc.multiply( a, b ));
   cout << "Multiplying a by b yields " << sc.getAnswer() << "\n";

   /* Write a line that divides a and b through the
      SimpleCalculator object; assign the result to a
	  variable named division */
   sc.setAnswer(sc.divide(a,b)) ;
   cout << "Dividing a by b yields " << sc.getAnswer() << endl;
}
