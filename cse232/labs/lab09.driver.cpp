
/******************************************************************************
  Lab Exercise #9 -- test bed for type "Sequence"
  Modified By Kenneth Hanson (10/29/12)
******************************************************************************/

using namespace std;

#include <iostream>
#include <iomanip>

#include "lab09.sequence.h"

//display contents of a sequence
void display(const Sequence & list);

/*
 * Name:    main
 * Purpose: demonstrate functionality of class "Sequence"
 */
int main()
{
  Sequence A;
  double Item;
  bool Flag;

  cout << boolalpha << showpoint << fixed << setprecision( 1 );
  cout << endl << "***Testing class Sequence***" << endl;
  
  // initial list is empty
  
  cout << endl
    << "Value returned by 'is_empty': " << A.is_empty() << endl
    << "Value returned by 'length':   " << A.length() << endl
    << endl;

  //
  // Create list of length 2 by inserting at back of list
  //
  
  /* Why at the back? Because we need to find out first we can insert
     successfully without shifting the array contents. */
  
  cout << endl << "Inserting 500.0, 300.0" << endl;
  
  Flag = A.insert( 500.0, 0 );
  cout << "First insert succesful: " << Flag << endl;
  
  Flag = A.insert( 300.0, 1 );
  cout << "Second insert successful: " << Flag << endl;

  cout << endl << "Contents of list:" << endl;
  display(A);
  cout << endl;
  
  cout << "Value returned by 'is_empty': " << A.is_empty() << endl
    << "Value returned by 'length':   " << A.length() << endl
    << endl;
  
  cout << "Position of 500.0: " << A.find(500.0) << endl
    << "Position of 300.0: " << A.find(300.0) << endl
    << endl;

  
  //
  // Insert items in front, back, middle
  //
  
  /* This will let us see if shifting items works. */
  
  /* Note: from this point on, we won't bother with find(), length(), and
     is_empty(), since we can be fairly certain that they work. */
  
  cout << endl << "Inserting items at front, back, middle" << endl;
  
  A.insert(400.0, 0);
  
  // TODO: insert at back
  
  // TODO: insert at middle
  
  cout << endl << "Sequence after inserting items:" << endl;
  display(A);
  cout << endl << endl;
  
  
  //
  // Remove items from midle, back, front
  //
  
  /* Note: if your list only had 3 items, you really do need to remove from the
     middle first, back second, and front last. Otherwise, you won't actually
     be testing the middle and back. */
     
  cout << endl << "Removing items from middle, back, front" << endl;
  
  Item = -99.0;
  A.remove(Item, 2);
  cout << Item  << " removed" << endl;
  
  // TODO: remove from back
  
  // TODO: remove from front
  
  cout << endl << "Sequence after removing items:" << endl;
  display(A);
  cout << endl;
  
  cout << endl << "***Testing complete***" << endl << endl;
}


/*
 * Name:    display
 * Receive: sequence to diplay
 * Output:  contents of sequence
 */
void display(const Sequence & list)
{
  double Item;
  for (unsigned I = 0; I < list.length(); I++)
  {
    Item = -99.0;
    list.retrieve(Item, I);
    cout << Item << " ";
  }
}