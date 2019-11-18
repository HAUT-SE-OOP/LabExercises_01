// Lab Exercise 6: SimpleCalculator.h

// class SimpleCalculator definition
class SimpleCalculator
{
public:
   SimpleCalculator(double=0,double =0,double=0);//constructor
   double getAnswer();//get the value of answer
   void input();//input a and b
   void printValues();//print the values of a and b
   /* Write prototype for add member function */
   void add( double, double ) ;
   void subtract( double, double ) ;
   void multiply( double, double ) ;
   void divide( double, double ) ;
   /* Write prototype for divide member function */
private:
    double a;
    double b;
    double answer;
}; // end class SimpleCalculator

