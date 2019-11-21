// Lab Exercise 6: CalcTest.cpp

#include <iostream>
using namespace std;

#include "SimpleCalculator.h"

int main()
{

   double a,b;
   cout<<"please cin a and b"<<endl;
   cin>>a>>b;
   SimpleCalculator sc;
   sc.setAB(a,b);
   sc.printValues();//printf a,b;
   sc.add(a,b);//Add the two together
   cout << "Adding a and b yields " << sc.getAnswer() << "\n";

   sc.subtract( a, b );//substar  the two together
   cout << "Subtracting b from a yields " << sc.getAnswer() << "\n";

   sc.multiply( a, b );//multiply  the two together
   cout << "Multiplying a by b yields " << sc.getAnswer() << "\n";

  sc.divide(a,b);//divide  the two together
   cout << "Dividing a by b yields " << sc.getAnswer()<< endl;
}
