//实验室1:会计
// Account类的定义
class Account
{
public:
   Account( int );      //构造函数初始化balance
   void credit( int ); //在账户余额上增加一笔金额
   void debit(int);
   int getBalance(); // 返回帐户余额
private:
   int balance; //存储余额的数据成员
}; //结束类账户

