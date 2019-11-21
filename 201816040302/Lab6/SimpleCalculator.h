// Lab Exercise 6: SimpleCalculator.h

// class SimpleCalculator definition
class SimpleCalculator
{
public:
   /* Write prototype for add member function */
   double add(double,double) const;
   double subtract( double, double ) const;
   double multiply( double, double ) const;
   /* Write prototype for divide member function */
   double divide(double,double) const;
private:
    double addition;
    double subtraction;
    double multiplication;
    double division;
}; // end class SimpleCalculator

