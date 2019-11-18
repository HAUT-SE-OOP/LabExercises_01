// Lab Exercise 6: SimpleCalculator.h

// class SimpleCalculator definition
class SimpleCalculator
{
public:
   /* Write prototype for add member function */
   SimpleCalculator(double=0.0,double=0.0);
   double add();//function to add
   double subtract( );//function to subtract
   double multiply( );//function to multiply
   /* Write prototype for divide member function */
   double divide();//function to divide
   double getAnswer();//function to get answer
   void setA(double);//function to get A
   void setB(double);//function to get B
   double getA();//function to retrieve A
   double getB();//function to retrieve B
   void setA();//function to set A
   void setB();//function to set B
private:
    double answer;//answer for SimpleCalculator
    double A;//A for SimpleCalculator
    double B;//B for SiimpleCalculator
}; // end class SimpleCalculator

