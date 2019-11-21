// Lab 2: GradeBook.h
// Definition of GradeBook class that stores an instructor's name.
#include <string> // program uses C++ standard string class
using namespace std;
class GradeBook
{
public:
   // constructor initializes course name and instructor name
   explicit GradeBook( string, string );
   void setCourseName( string );
   void setInstructorName( string );
   string getCourseName();
   string getInstructorName();
   void displayMessage(); // display welcome message and instructor name
private:
   string courseName; // course name for this GradeBook
   string instructorName; // instructor name for this GradeBook
}; // end class GradeBook
