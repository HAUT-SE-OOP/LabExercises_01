class Complex
{
public:
    Complex(double=0, double=0);
    Complex add(const Complex &right);
    Complex subtract(const Complex &right);
   void printComplex();
   void  setComplexNumber(double, double);

private:
    double realPart;
    double imaginaryPart;

};
