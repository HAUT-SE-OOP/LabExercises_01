#include <iostream>
using namespace std;

// include definition of class Account from Account.h
#include "Account.h"

// function main begins program execution
int main()
{
   Account account1( 50 ); // create Account object
   Account account2( 0 ); // create Account object

   // display initial balance of each object
   cout << "account1 balance: $" << account1.getBalance() << endl;
   cout << "account2 balance: $" << account2.getBalance() << endl;

   int withdrawalAmount; // stores withdrawal amount read from user

   cout << "\nEnter withdrawal amount for account1: "; // prompt
   cin >> withdrawalAmount; // obtain user input
   cout << "\nsubtracting " << withdrawalAmount
      << " from account1 balance\n\n";
   /* write code to withdraw money from account1 */

   // display balances
   cout << "account1 balance: $" << account1.debit(withdrawalAmount) << endl;
   cout << "account2 balance: $" << account2.getBalance() << endl;

   cout << "\nEnter withdrawal amount for account2: "; // prompt
   account1.debit1(withdrawalAmount);
   cin >> withdrawalAmount; // obtain user input
   cout << "\nsubtracting " << withdrawalAmount
      << " from account2 balance\n\n";
   /* write code to withdraw money from account2 */
    account2.debit(withdrawalAmount );
     account2.debit1(withdrawalAmount );
   // display balances
   cout << "account1 balance: $" << account1.getBalance() << endl;
   cout << "account2 balance: $" << account2.debit(withdrawalAmount ) << endl;
} // end main
