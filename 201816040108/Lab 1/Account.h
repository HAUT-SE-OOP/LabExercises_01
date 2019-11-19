// Lab 1: Account.h
// Definition of Account class.

class Account
{
public:
   Account( double ); // constructor initializes balance
   void credit( int ); // add an amount to the account balance
   /* write code to declare member function debit. */
   void debit(double);
   double getBalance(); // return the account balance
private:
   double balance; // data member that stores the balance
}; // end class Account

