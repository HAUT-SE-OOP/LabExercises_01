#ifndef HEADERS_H_INCLUDED
#define HEADERS_H_INCLUDED

// Lab 1: Account.h
// Definition of Account class.

class Account
{
public:
   Account( int ); // constructor initializes balance
   void credit( unsigned ); // add an amount to the account balance
   void   debit(int);
   int getBalance(); // return the account balance
private:
   int balance; // data member that stores the balance
}; // end class Account



#endif // HEADERS_H_INCLUDED
