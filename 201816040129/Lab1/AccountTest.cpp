// Lab 1: AccountTest.cpp
// Create and manipulate Account objects.
#include <iostream>
using namespace std;

// include definition of class Account from Account.h
#include "Account.h"

// function main begins program execution
int main()
{
   int amount1,amount2,balance;//
   Account account1( 50 ); // create Account object
   Account account2( 0 ); // create Account object

   // display initial balance of each object
   cout << "account1 balance: $" << account1.getBalance() << endl;//output the balance
   cout << "account2 balance: $" << account2.getBalance() << endl;

   int withdrawalAmount; // stores withdrawal amount read from user

   cout << "\nEnter withdrawal amount for account1: "; // prompt
   cin >> withdrawalAmount; // obtain user input
   cout << "\nsubtracting " << withdrawalAmount
      << " from account1 balance\n\n";
   /* write code to withdraw money from account1 */
   amount1=account1.debit(withdrawalAmount);//the amount is equal to the balance

   // display balances
   cout << "account1 balance: $" << account1.getBalance() << endl;
   cout << "account2 balance: $" << account2.getBalance() << endl;

   cout << "\nEnter withdrawal amount for account2: "; // prompt
   cin >> withdrawalAmount; // obtain user input
   cout << "\nsubtracting " << withdrawalAmount
      << " from account2 balance\n\n";
   /* write code to withdraw money from account2 */
   amount2=account2.debit(withdrawalAmount);

   // display balances
   cout << "account1 balance: $" << account1.getBalance() << endl;
   cout << "account2 balance: $" << account2.getBalance() << endl;
} // end main
