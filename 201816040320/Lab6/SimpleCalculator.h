// Lab Exercise 6: SimpleCalculator.h

// class SimpleCalculator definition
class SimpleCalculator
{
public:
   SimpleCalculator();
   SimpleCalculator(double , double);
   void printValues();
   /* Write prototype for add member function */
   double add() const;
   double subtract() const;
   double multiply() const;
   /* Write prototype for divide member function */
   double divide() const;
   void input();
private:
    double a,b;
}; // end class SimpleCalculator
