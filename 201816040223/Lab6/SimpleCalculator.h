// Lab Exercise 6: SimpleCalculator.h

// class SimpleCalculator definition
class SimpleCalculator
{
public:
    SimpleCalculator(double,double);
   /* Write prototype for add member function */
   void subtract(  ) ;
   void multiply( ) ;
   void addition() ;
   void division() ;
   void setnumber1(double);
   double getnumber1();
      void setnumber2(double);
   double getnumber2();
private:
    double number1;
    double number2;
   /* Write prototype for divide member function */
}; // end class SimpleCalculator

