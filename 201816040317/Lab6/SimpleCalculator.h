// Lab Exercise 6: SimpleCalculator.h

// class SimpleCalculator definition
class SimpleCalculator
{
public:
    SimpleCalculator(double,double,double);
    void setSimpleCalculator(double,double,double);
    double getAnswer();
public:
   double answer;
   double a;
   double b;
   double add( double, double ) const;    /* Write prototype for add member function */
   double subtract( double, double ) const;
   double multiply( double, double ) const;
   double divide( double, double ) const;    /* Write prototype for divide member function */
}; // end class SimpleCalculator

