// Lab Exercise 6: SimpleCalculator.h

// class SimpleCalculator definition
#include<iostream>
using namespace std;
class SimpleCalculator
{
    double a;
    double b;
public:
    SimpleCalculator(double a0,double b0) {a = a0; b = b0;};
    SimpleCalculator(){a = 0;b = 0;};
    void input(double a0,double b0){a = a0;b = b0;};
    void printValues(){cout << a << b <<endl;}
   /* Write prototype for add member function */
   double add(double, double) const;
   double subtract( double, double ) const;
   double multiply( double, double ) const;
   /* Write prototype for divide member function */
   double divide(double,double);
}; // end class SimpleCalculator
