#include <iostream>
using namespace std;

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// function main begins program execution
int main()
{
   // create a GradeBook object; pass a course name and instructor name
   GradeBook gradeBook(
      "CS101 Introduction to C++ Programming!" ,"Sam Spath");

   // display welcome message and instructor's name
   gradeBook.displayMessage();
   cout <<"This course is presented by:" << gradeBook.getInstructorName()<<endl<<endl;
   cout <<"Changing instruct name to July Jones"<< endl;
   gradeBook.setInstructorName("July Jones");
   cout <<"This  course is presented by:" << gradeBook.getInstructorName()<<endl<<endl;
   gradeBook.displayMessage();
   /* write code to change instructor's name and output changes */
} // end main
