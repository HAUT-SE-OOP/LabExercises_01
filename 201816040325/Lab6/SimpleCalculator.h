// Lab Exercise 6: SimpleCalculator.h

// class SimpleCalculator definition
class SimpleCalculator
{
public:
   SimpleCalculator(double, double);//将double初始化为0
   SimpleCalculator();
   double add() ;
   double subtract() ;
   double multiply() ;
   double divide() ;
   void input();
   void printValues();
private:
    double a;
    double b;
}; // end class SimpleCalculator

