#include <iostream>
#include <string>
using namespace std;
#include "Account.h"
int main()
{
    int a1,a2;
    cout<<"please write the balance of account1 and account2"<<endl;
    cin>> a1>>a2;
 Account account1( a1 ); // create Account object
   Account account2( a2 ); // create Account object

   // display initial balance of each object
   cout << "account1 balance: $" << account1.getBalance() << endl;
   cout << "account2 balance: $" << account2.getBalance() << endl;

   int withdrawalAmount; // stores withdrawal amount read from user

   cout << "\nEnter withdrawal amount for account1: "; // prompt
   cin >> withdrawalAmount; // obtain user input
   cout << "\nsubtracting " << withdrawalAmount
      << " from account1 balance\n\n";
   /* write code to withdraw money from account1 */
   account1.credit(withdrawalAmount);
   // display balances
   cout << "account1 balance: $" << account1.getBalance() << endl;
   cout << "account2 balance: $" << account2.getBalance() << endl;

   cout << "\nEnter withdrawal amount for account2: "; // prompt
   cin >> withdrawalAmount; // obtain user input
   cout << "\nsubtracting " << withdrawalAmount
      << " from account2 balance\n\n";
   /* write code to withdraw money from account2 */
   account2.credit(withdrawalAmount);
   // display balances
   cout << "account1 balance: $" << account1.getBalance() << endl;
   cout << "account2 balance: $" << account2.getBalance() << endl;
}
