// Lab Exercise 6: SimpleCalculator.h

// class SimpleCalculator definition
class SimpleCalculator
{
public:
   SimpleCalculator(double a = 0.0, double b = 0.0);//fuction to constructor
   double add( double, double ) const;//fuction to add
   double subtract( double, double ) const;//fuction to subtract
   double multiply( double, double ) const;//fuction to multiply
   double divide( double, double ) const;//fuction to divide
private:
    double m;
    double n;
}; // end class SimpleCalculator

