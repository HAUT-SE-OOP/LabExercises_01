#include <iostream>
using namespace std;
#include "GradeBook.h"      //包含含有名为GradeBook的类的文件
int main()
{
    string instructorName;      //定义教师名字变量
    GradeBook gradeBook( "CS101 Introduction to C++ Programming","Sam smith" );     //初始化类中课程教师信息
    gradeBook.displayMessage();     //显示课程教师信息
    cout<<"Changing instructor name to\n";
    getline(cin,instructorName);        //输入更改的教师名
    gradeBook.setInstructorName(instructorName);        //更改教师名
    gradeBook.getInstructorName();      //获取更改后的教师名
    gradeBook.displayMessage();     //显示更改后课程及教师信息
}
