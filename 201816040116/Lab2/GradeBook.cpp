#include <iostream>
using namespace std;
#include "GradeBook.h"      //包含含有名为GradeBook的类的文件
GradeBook::GradeBook( string course, string instructor )        //初始化类的信息
{
   courseName=course;       //初始化课程名
   setInstructorName( instructor );     //读取课程教师名字
}
string GradeBook::getCourseName()       //获取课程名
{
   return courseName;
}
void GradeBook::setInstructorName(string instructor)        //重载课程教师名
{
    instructorName=instructor;
}
string GradeBook::getInstructorName()       //获取课程教师名
{
   return instructorName;
}
void GradeBook::displayMessage()
{
   cout<<"Welcome to the grade book for\n"<<getCourseName()<<"!"<<endl;     //显示课程信息
   cout<<"This course is presented by: "<<instructorName<<endl;     //显示课程的教师信息
}
