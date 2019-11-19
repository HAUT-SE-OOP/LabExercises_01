// Lab Exercise 6: SimpleCalculator.h

// class SimpleCalculator definition
class SimpleCalculator
{
public:
   explicit SimpleCalculator( double , double);
   double add( double, double ) const;
   double subtract( double, double ) const;
   double multiply( double, double ) const;
   double divide( double, double ) const;
private:
    double addition;
    double subtraction;
    double multiplication;
    double division;
   /* Write prototype for divide member function */
}; // end class SimpleCalculator

