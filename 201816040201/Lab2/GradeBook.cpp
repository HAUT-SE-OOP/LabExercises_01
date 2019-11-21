// Lab 2: GradeBook.cpp
// Member-function definitions for class GradeBook.
#include <iostream>
using namespace std;

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// constructor initializes courseName and instructorName
// with strings supplied as arguments
GradeBook::GradeBook( string course, string instructor )
{
   setCourseName( course ); // initializes courseName
   setInstructorName( instructor ); // initialiZes instructorName
} // end GradeBook constructor
void GradeBook::setInstructorName(string iname)///修改教师名
{
    instructorName=iname;
}
// function to set the course name
void GradeBook::setCourseName( string name )
{
   courseName = name; // store the course name
} // end function setCourseName
string GradeBook::getInstructorName()///显示教师名
{
    return instructorName;
}
// function to retrieve the course name
string GradeBook::getCourseName()
{
   return courseName;
} // end function getCourseName

/* write code to define a get member function for the instructor's name */

/* write code to define a set member function for the instructor's name */

// display a welcome message and the instructor's name
void GradeBook::displayMessage()
{
   // display a welcome message containing the course name
   cout << "Welcome to the grade book for\n" << getCourseName() << "!"  << endl;
      cout<<"This course is presented by:"<<getInstructorName()<<endl;///显示教师
      cout<<endl;
   /* write code to output the instructor's name */
} // end function displayMessage
