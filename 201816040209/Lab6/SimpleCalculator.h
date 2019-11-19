// Lab Exercise 6: SimpleCalculator.h

// class SimpleCalculator definition
class SimpleCalculator
{
public:
   SimpleCalculator();
   SimpleCalculator(double,double);
   /* Write prototype for add member function */
   double add( double, double ) const;
   double subtract( double, double ) const;
   double multiply( double, double ) const;
   /* Write prototype for divide member function */
   double divide( double, double );
   double getAnswer();
   void setInput();
   void Calculator();
private:
    double answer;
    double first;
    double last;
}; // end class SimpleCalculator

