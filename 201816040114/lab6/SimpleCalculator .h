// Lab Exercise 6: SimpleCalculator.h

// class SimpleCalculator definition
class SimpleCalculator
{
public:
   explicit SimpleCalculator (double,double);
   /* Write prototype for add member function */
   double add( double, double ) const;
   double subtract( double, double ) const;
   double multiply( double, double ) const;
   double besides( double, double ) const;
   /* Write prototype for divide member function */
private:
    double addition;
    double subtraction;
    double multiplication;
    double division;
    double a,b;
}; // end class SimpleCalculator

