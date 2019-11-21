// Lab 2: GradeBookTest.cpp
// Test program for modified GradeBook class.
#include <iostream>
#include "GradeBook.h"
using namespace std;

// include definition of class GradeBook from GradeBook.h


// function main begins program execution
int main()
{

   // create a GradeBook object; pass a course name and instructor name
   GradeBook gradeBook("CS101 Introduction to C++ Programming" ,"Sam Smith");

   // display welcome message and instructor's name
   gradeBook.displayMessage();
   // cout<<"This course is presented by:"<<gradeBook.getInstructName()<<endl;
    cout<<"This course is presented by:"<<gradeBook.getInstructName()<<endl;
    cout<<"\nChanging instructor name to:";
    string name;
    cin>>name;

    gradeBook.setInstructorName(name);
    cout<<"\nChanging instructor name to:"<<gradeBook.getInstructName()<<endl;
    gradeBook.displayMessage();
    cout<<"This course is presented by:"<<gradeBook.getInstructName()<<endl;
   /* write code to change instructor's name and output changes */
} // end main
