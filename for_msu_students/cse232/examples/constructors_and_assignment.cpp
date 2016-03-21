/*
 * Constructors and Assignment: Parallels Between Primitive and Class Types
 * Author: Kenneth Hanson
 * Last Modified: 2/26/13
 */

/*
 * Name: Thing
 * Purpose: A simple class for demonstrating constructors and assignment.
 *
 * Note: All functions are very short, so they are implemented as
 *   inline functions.
 */
class Thing
{
private:
	int x;

public:
	// default constructor
	Thing() {x = 0;}

	// value constructor
	Thing(int in_x) {x = in_x;}

	/* You can also write the default and value constructor together by
	using default parameters. */
	
	// combined default/value constructor
	//Thing(int in_x = 0) {x = in_x;}

	// copy constructor
	Thing(const Thing & original) {x = original.x;}

	// copy assignment
	Thing & operator=(const Thing & original)
	{
		x = original.x;
		return *this;
	}

	// accessor (getter) and mutator (setter) for member variable x
	int getX() {return x;}
	void setX(int in_x) {x = in_x;}
};

/*
 * Name: main
 * Purpose: demonstrate the parallel between primitive variable declaration
 *          and object construction.
 */
int main()
{
	//                       //
	// Primitive types       // Class types
	//                       //

	//declaration            //default constructor
	int a;                   Thing thing1;

	//init. from constant    //value constructor
	int b(1);                Thing thing2(5);          //constructor notation
	int c = 2;               Thing thing3 = Thing(10); //assignment notation

	//init. from variable    //copy constructor
	int d(c);                Thing thing4(thing3);     //constructor notation
	int e = d;               Thing thing5 = thing4;    //assignment notation

	//assignment             //assignment
	int f = 0;               Thing thing6;
	f = e;                   thing6 = thing5;          //variable assignment
	f = 5;                   thing6 = Thing(15);       //"constant" assignment
}
