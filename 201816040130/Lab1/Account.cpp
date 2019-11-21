// Lab 1: Account.cpp
#include <iostream>
using namespace std;

#include "Account.h"

// initializes data member balance
Account::Account( int initialBalance )
{
   balance = 0;

   // if initialBalance is greater than 0, set this value as the
   // balance of the Account; otherwise, balance remains 0
   if ( initialBalance > 0 )
      balance = initialBalance;

   // if initialBalance is negative, print error message
   if ( initialBalance < 0 )
      cout << "Error: Initial balance cannot be negative.\n" << endl;
}

// credit (add) an amount to the account balance
void Account::credit( int amount )
{
   balance = balance + amount; // add amount to balance
}

void Account::debit(double withdrawalAmount)
{
  if(withdrawalAmount <= balance)
      balance = balance - withdrawalAmount;
  else
    cout << "Debit amount exceeded account balance." << endl;

}

// return the account balance
int Account::getBalance()
{
   return balance; // gives the value of balance to the calling function
}
