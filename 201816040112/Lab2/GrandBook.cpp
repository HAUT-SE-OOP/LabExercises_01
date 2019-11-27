// Lab 2: GradeBook.cpp
// Member-function definitions for class GradeBook.
#include <iostream>
using namespace std;

// include definition of class GradeBook from GradeBook.h
#include "GrandBook.h"

// constructor initializes courseName and instructorName
// with strings supplied as arguments
GradeBook::GradeBook( string course, string instructor )
{
   setCourseName( course ); // initializes courseName
   setInstructorName( instructor ); // initialiZes instructorName
} // end GradeBook constructor

// function to set the course name
void GradeBook::setCourseName( string name )
{
   courseName = name; // store the course name
} // end function setCourseName
void GradeBook::setInstructorName(string instructor)
{
    instructorName=instructor;
}
// function to retrieve the course name
string GradeBook::getCourseName()
{
   return courseName;
} // end function getCourseName
string GradeBook::getInstructorName()
{
    return instructorName;
}
/* write code to define a get member function for the instructor's name */

/* write code to define a set member function for the instructor's name */

// display a welcome message and the instructor's name
void GradeBook::displayMessage()
{
   // display a welcome message containing the course name
   cout << "Welcome to the grade book for\n" << getCourseName() << "!"<<endl<<
      "This course is presented by "<<getInstructorName()<< endl;
   /* write code to output the instructor's name */
} // end function displayMessage
