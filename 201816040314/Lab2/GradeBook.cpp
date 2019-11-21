// Lab 2: GradeBook.cpp
// Member-function definitions for class GradeBook.
#include <iostream>
using namespace std;

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// constructor initializes courseName and instructorName
// with strings supplied as arguments
GradeBook::GradeBook( string course, string instructor)
{
   setCourseName(course); // initializes courseName
   setInstructorName(instructor) ;// initialiZes instructorName
} // end GradeBook constructor

// function to set the course name
void GradeBook::setCourseName( string name )
{
   courseName = name; // store the course name
} // end function setCourseName
void GradeBook::setInstructorName( string name )
{
   instructorName = name; // store the course name
} // end function setCourseName
void GradeBook::changeInstructorName()
{
    cout<<"Changing instructor name to ";
    string name;
    getline(cin,name);
    if(name!="")
    {
       instructorName = name;
    }
    else
        cout<<endl<<"The name inputed is invalid"<<endl<<endl;
    cout <<endl
     << "Welcome to the grade book for\n" << getCourseName() << "!"
      << endl;
    cout<<"This course is presented by:"<<getInstructorName()<<"!"<<endl<<endl;
    // store the course name
}
string GradeBook::getCourseName()
{
   return courseName;
}
// function to retrieve the course name
string GradeBook::getInstructorName()
{
   return instructorName;
} // end function getCourseName

/* write code to define a get member function for the instructor's name */

/* write code to define a set member function for the instructor's name */

// display a welcome message and the instructor's name
void GradeBook::displayMessage()
{
   // display a welcome message containing the course name
   cout << "Welcome to the grade book for\n" << getCourseName() << "!"
      << endl;
    cout<<"This course is presented by:"<<getInstructorName()<<"!"<<endl<<endl;
    changeInstructorName();
   /* write code to output the instructor's name */
} // end function displayMessage
