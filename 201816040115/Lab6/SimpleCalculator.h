// Lab Exercise 6: SimpleCalculator.h

// class SimpleCalculator definition
class SimpleCalculator
{
public:
    explicit SimpleCalculator();
    explicit SimpleCalculator(double a,double b);
   /* Write prototype for add member function */
   double add( double, double ) const;
   double subtract( double, double ) const;
   double multiply( double, double ) const;
   /* Write prototype for divide member function */
   double divide( double, double ) const;
   //getAnswer function
   double getAnswer() const;
   //setAnswer function
   void setAnswer(double a);
   //set lnum and rnum function
   void setLnumAndRnum(double a,double b);
   //print lnum and rnum values
   void printValues() const;
private:
    double lnum;
    double rnum;
    double answer;
}; // end class SimpleCalculator

