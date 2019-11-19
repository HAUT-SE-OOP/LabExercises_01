// Lab Exercise 6: SimpleCalculator.h

// class SimpleCalculator definition
class SimpleCalculator
{
public:
   SimpleCalculator();
   double add( double, double );//add funtion
   double subtract( double, double );//subtract funtion
   double multiply( double, double ) ;//multipiy funtion
   double divide( double, double );//divide funtion
   double getAnswer();
   void printValues();
   void setAB(double,double);
private:
    double answer;
    double a;
    double b;
}; // end class SimpleCalculator

