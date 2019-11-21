#include <iostream>
using namespace std;
#include "Account.h"        //包含以Accout为名字的类的文件
Account::Account( int initialBalance )
{
   balance = 0;  //所操作账户余额
   if ( initialBalance > 0 )    //检测输入账户余额合理性
      balance = initialBalance; //若符合则赋予账户余额数值
   if ( initialBalance < 0 )
      cout << "Error: Initial balance cannot be negative.\n" << endl;   //不符合显示操作错误
}
void Account::credit( int amount )  //对帐户进行存钱操作
{
   balance = balance + amount;
}
void Account::debit(int num)    //对帐户进行取钱操作
{
    if(num<=balance)
       balance=balance-num; //比较账户余额和取钱额度
    else
        cout<<"Error:Debit amount exceeded account balance.\n";
}
int Account::getBalance()   //获取账户余额数值
{
   return balance;
}
