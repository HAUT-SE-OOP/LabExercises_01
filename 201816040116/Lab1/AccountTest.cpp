#include <iostream>
using namespace std;
#include "Account.h"        //包含以Accout为名字的类的文件
int main()
{
   Account account1( 50 );  //账户1余额
   Account account2( 0 );   //账户2余额
   cout << "account1 balance: $" << account1.getBalance() << endl;  //显示账户1余额
   cout << "account2 balance: $" << account2.getBalance() << endl;  //显示账户2余额
   int withdrawalAmount;    //要取出的钱
   cout << "\nEnter withdrawal amount for account1: ";
   cin >> withdrawalAmount;     //输入要取出的钱
   cout << "\nsubtracting " << withdrawalAmount << " from account1 balance\n\n";
   account1.debit(withdrawalAmount);    //从账户余额进行取钱操作
   cout << "account1 balance: $" << account1.getBalance() << endl;  //显示账户1余额
   cout << "account2 balance: $" << account2.getBalance() << endl;  //显示账户2余额
   cout << "\nEnter withdrawal amount for account2: ";
   cin >> withdrawalAmount;     //要取出的钱
   cout << "\nsubtracting " << withdrawalAmount << " from account2 balance\n\n";
   account2.debit(withdrawalAmount);    //从账户余额进行取钱操作
   cout << "account1 balance: $" << account1.getBalance() << endl;  //显示账户1余额
   cout << "account2 balance: $" << account2.getBalance() << endl;  //显示账户2余额
}
