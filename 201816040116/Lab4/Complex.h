#include<string>
using namespace std;
class Complex
{   public:
    Complex(double rp=0,double ip=0);   //Initialize the class
    void setComplexNumber(double,double);   //function set to Complex
    Complex add(const Complex &right);  //function add the data of the class
    Complex subtract(const Complex &right); //function subtract the data of the class
    void printComplex();     //The output data
    private:
        double realPart;    //function define class variables
        double imaginaryPart;   //function define class variables
};
