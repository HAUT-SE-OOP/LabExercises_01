// Lab 1: Account.h
// Definition of Account class.

class Account
{
public:
   Account( int initialBalance); // constructor initializes balance
   void credit( int amount); // add an amount to the account balance
   /* write code to declare member function debit. */
   int getBalance(); // return the account balance
   void detractprice(int price);
private:
   int balance; // data member that stores the balance
}; // end class Account

