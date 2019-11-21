// Lab Exercise 6: SimpleCalculator.h

// class SimpleCalculator definition
class SimpleCalculator
{
public:
    SimpleCalculator(double=0,double=0);
    void setSimpleCalculator(double,double);
    void setBefore(double);
	double getBefore()const;
    void setLast(double);
    double getLast()const;
   /* Write prototype for add member function */
   double add( double, double ) const;
   double subtract( double, double ) const;
   double multiply( double, double ) const;
   double divide( double, double ) const;
   /* Write prototype for divide member function */
private:
    double right;
    double left;
}; // end class SimpleCalculator

