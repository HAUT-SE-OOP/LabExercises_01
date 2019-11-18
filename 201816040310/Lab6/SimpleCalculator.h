// Lab Exercise 6: SimpleCalculator.h

// class SimpleCalculator definition
class SimpleCalculator
{
public:
   SimpleCalculator();
   SimpleCalculator(double, double);
   /* Write prototype for add member function */
   double add() ;      // define member funtion add
   double subtract(); // define member funtion subtract
   double multiply() ; // define member funtion multiply
   /* Write prototype for divide member function */
   double divide(); //define member funtion divide
   double getAnswer();
   void printValues();
   void input();

private:
   double a, b, ans;
}; // end class SimpleCalculator
