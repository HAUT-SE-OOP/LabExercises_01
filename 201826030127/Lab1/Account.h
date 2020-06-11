// Lab 1: Account.h
// Definition of Account class.
#include<iostream>
using namespace std;

class Account
{
public:
   Account( int ); // constructor initializes balance
   void credit( int ); // add an amount to the account balance
    int debit(int);  //member function debit
   int getBalance()  const; // return the account balance
private:
  int balance; // data member that stores the balance
}; // end class Account
