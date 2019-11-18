// Lab Exercise 6: CalcTest.cpp

#include <iostream>
using namespace std;

#include "SimpleCalculator.h"

int main()
{
    double a,b;
   /*double a = 10.0;
   double b = 20.0;*/

   /* Instantiate an object of type Simplecalculator */
   SimpleCalculator sc(10.0,22.0);//initialize data
   cout << "The value of a is: " << sc.getA() << "\n";
   cout << "The value of b is: " << sc.getB() << "\n\n";

   /* Write a line that adds a and b through your SimpleCalculator
      object; assign the result to a variable named addition */
   //double addition = sc.add(a ,b);
   sc.add();
   cout << "Adding a and b yields " << sc.getAnswer() << "\n";

   //double subtraction = sc.subtract( a, b );
   sc.subtract();
   cout << "Subtracting b from a yields " << sc.getAnswer()<< "\n";

   //double multiplication = sc.multiply( a, b );
   sc.multiply();
   cout << "Multiplying a by b yields " << sc.getAnswer() << "\n";

   /* Write a line that divides a and b through the
      SimpleCalculator object; assign the result to a
	  variable named division */
   //double division = sc.divide( a , b );

   sc.divide();
   cout << "Dividing a by b yields " << sc.getAnswer() << endl;

   //scanf two double data
   cout<<"please enter two double data:"<<endl;
   cin>>a>>b;
   sc.setA(a);
   sc.setB(b);
   cout << "The value of a is: " << sc.getA() << "\n";
   cout << "The value of b is: " << sc.getB() << "\n\n";
    sc.add();
   cout << "Adding a and b yields " << sc.getAnswer() << "\n";
   sc.subtract();
   cout << "Subtracting b from a yields " << sc.getAnswer()<< "\n";
   sc.multiply();
   cout << "Multiplying a by b yields " << sc.getAnswer() << "\n";
   sc.divide();
   cout << "Dividing a by b yields " << sc.getAnswer() << endl;
}
