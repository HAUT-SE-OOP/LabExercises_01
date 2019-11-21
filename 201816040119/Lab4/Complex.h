
/* Write class definition for Complex */

class Complex
{
    public:
    Complex(double=0,double=0);
    Complex add( double,double);
    Complex subtract(double,double);
    void printComplex();
    void setComplexNumber(double,double);
    private :
        double realPart;
        double imaginaryPart;
};
