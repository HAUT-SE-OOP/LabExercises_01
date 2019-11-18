#include <string>
using namespace std;
class GradeBook     //建立名为GradeBook的类
{
public:
   GradeBook( string, string );
   string getCourseName();      //获取课程名
   void setInstructorName(string);      //更改教师名字
   string getInstructorName();      //获取教师名字
   void displayMessage();       //显示课程及教师信息
private:
   string courseName;       //定义课程变量
   string instructorName;       //定义教师变量
};
