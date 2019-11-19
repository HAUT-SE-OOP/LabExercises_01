// Lab Exercise 6: SimpleCalculator.h

// class SimpleCalculator definition
class SimpleCalculator
{
public:
   SimpleCalculator(double =0,double =0);
   double add(); /* Write prototype for add member function */
   double subtract();
   double multiply();
   double divide();/* Write prototype for divide member function */
   double getanswer();
   void input();
   void printValues();
private:
   double a;
   double b;
}; // end class SimpleCalculator

