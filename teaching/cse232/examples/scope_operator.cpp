/*
 * Scope Operator Example
 * Author: Kenneth Hanson
 * Last modified: 2/26/13
 *   This example shows one use of the scope operator, which is to disambiguate
 *   unbound functions from class member functions.
 */

using namespace std;

#include <iostream>

// Declarations
// Normally, these would go in a separate file, but this does not affect
//   the current example
class A
{
public:
	int f();
};

int f();


// Definitions
// ***** This is the critical place in this example *****
int A::f() {return 0; }
int f() {return 1; }


int main()
{
	A a;
	
	cout << a.f() << endl; // prints 0
	cout << f() << endl;   // prints 1
}