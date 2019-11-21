// Lab 7: IntegerSet.cpp
// Member-function definitions for class IntegerSet.
#include <iostream>
#include <iomanip>
using namespace std;

#include "IntegerSet.h"/* Write include directive for IntegerSet.h here */

// constructor creates a set from array of integers
IntegerSet::IntegerSet( int array[], int size)
{
   emptySet();

   for ( int i = 0; i < size; i++ )
      insertElement( array[ i ] );
} // end IntegerSet constructor

void IntegerSet::emptySet()/* Write a definition for emptySet */
{
    for(int i=0;i<=100;i++)
        set[i]=0;
}
// input a set from the user
void IntegerSet::inputSet()
{
   int number;

   do
   {
      cout << "Enter an element (-1 to end): ";
      cin >> number;

      if ( validEntry( number ) )
         set[ number ] = 1;
      else if ( number != -1 )
         cerr << "Invalid Element\n";
   } while ( number != -1 ); // end do...while

   cout << "Entry complete\n";
} // end function inputSet

// prints the set to the output stream
void IntegerSet::printSet() const
{
   int x = 1;
   bool empty = true; // assume set is empty

   cout << '{';

   for (int u = 0; u < 101; u++ )
   {
      if ( set[ u ] )
      {
         cout << setw( 4 ) << u << ( x % 10 == 0 ? "\n" : "" );
         empty = false; // set is not empty
         x++;
      } // end if
   } // end for

   if ( empty )
      cout << setw( 4 ) << "---"; // display an empty set

   cout << setw( 4 ) << "}" << '\n';
} // end function printSet

void IntegerSet::unionOfSets( const IntegerSet &a ,const IntegerSet &b)
{

   // if element is in either set, add to temporary set
   for ( int n = 0; n < 101; n++ )
      if ( a.set[ n ] == 1 || b.set[ n ] == 1 )
         set[ n ] = 1;

} // end function unionOfSets

void IntegerSet::intersectionOfSets( const IntegerSet &a ,const IntegerSet &b)
{

   // if element is in either set, add to temporary set
   for ( int n = 0; n < 101; n++ )
      if ( a.set[ n ] == 1 && b.set[ n ] == 1 )
         set[ n ] = 1;

} // end function unionOfSets


void IntegerSet::insertElement( int k )
{
   if ( validEntry( k ) )
      set[ k ] = 1;
   else
      cerr << "Invalid insert attempted!\n";
} // end function insertElement

void IntegerSet::deleteElement( int k )/* Write definition for deleteElement */
{
    set[ k ]=0;
}

int IntegerSet::isEqualTo( const IntegerSet& a)/* Write definition for isEqualTo */
{
    for(int i=0;i<=100;i++){
        if(set[i]!=a.set[i])
            return 0;
    }
    return 1;
}

// determines if two sets are equal
/*int IntegerSet::isEqualTo( const IntegerSet& a )
{
   for ( int v = 0; v < 101; v++ )
      if ( set[ v ] != a.set[ v ] )
         return 0; // sets are not-equal

   return 1; // sets are equal
} */// end function isEqualTo

