// Lab 2: GradeBookTest.cpp
// Test program for modified GradeBook class.
#include <iostream>
using namespace std;

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// function main begins program execution
int main()
{
    string teacher;
   // create a GradeBook object; pass a course name and instructor name

   GradeBook gradeBook(
      "CS101 Introduction to C++ Programming" ,"Sam Smith");
   // display welcome message and instructor's name
   gradeBook.displayMessage();

   cout<<"Changing instructor to ";

   cin>>teacher;//输入需要修改的老师的名字；
    cout<<endl;

   gradeBook.setInstructorName(teacher);//修改任课老师

    gradeBook.displayMessage();
   /* write code to change instructor's name and output changes */
} // end main
