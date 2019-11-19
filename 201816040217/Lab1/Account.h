#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

class Account
{
public:
   Account( int  ); // constructor initializes balance
   void credit( int ); // add an amount to the account balance
   /* write code to declare member function debit. */
   int getBalance(); // return the account balance
   void debit( int );
private:
   int balance; // data member that stores the balance
}; // end class Account

#endif // ACCOUNT_H_INCLUDED
