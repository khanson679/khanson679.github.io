/*
 * Using Pointers
 * Author: Kenneth Hanson
 * Last edited 3/16/13
 *
 * This example shows hows the dot (.), arrow (->), reference (&), and
 * dereference (*) operators are used in contexts involving structs/classes.
 *
 * Notes:
 * 1. What I'm doing here is very artificial, and is mainly to
 *   demonstrate syntax.
 * 2. There is no real difference between a struct and a class in C++.
 *   I'm just following convention by using a struct for a type with public
 *   member variables only, and a class for a type with functions and private
 *   members.
 *
 * See also: Course Pack Ex. 18
 */

 
/* Data node for a singly-linked list */
struct Node
{
	int item;
	Node * next;
};


/* Simple class with getter and setter */
class Thing
{
	private:
		int x;
		
	public:
		Thing() {x = 0; }
		int getX() {return x;}
		void setX(int in_x) {x = in_x;}
};


int main()
{
	//
	// Node Example
	//
	
	// Different kinds of variables
	Node a, b;                             // local objects
	Node *c = new Node(), *d = new Node(); // dynamically allocated objects
	Node *curr;                            // just a pointer
	
	// Accessing struct contents
	a.item = 1;    //local object, so use .
	b.item = 2;
	c->item = 3;   // pointer, so use ->
	(*d).item = 4; // a harder way to do the same thing: dereference first
	
	// Pointing to a local object
	curr = &a;
	
	// Accessing a local object indirectly (not particularly useful)
	curr->item;
	(*curr).item;
	
	// Pointing to a dynamically allocated object
	curr = c;
	
	// Accessing a dynamically allocated object through another pointer
	curr->item;
	(*curr).item;
	
	// Linking nodes -- shows every combination of arrow and ampersand
	a.next = &b;
	b.next = c;
	c->next = d;  // <- this is how you will almost always do it
	d->next = &a;
	
	// Accessing a member variable indirectly by going through multiple pointers
	a.next->item;
	b.next->item;
	c->next->item;
	d->next->item;
	
	
	//
	// Member Function Example
	//
	
	Thing thing1, *thing2 = new Thing(), *thingPtr;
	
	/* Basically, functions work exactly like member variables. */
	
	// Members of local objects
	thing1.setX(10);
	thing1.getX();
	
	// Members of dynamically allocated objects
	thing2->setX(20);
	thing2->getX();
	
	// Accessing local objects indirectly (not particularly useful)
	thingPtr = &thing1;
	thingPtr->getX();
	
	// Accessing dynamically allocated objects through another pointer
	thingPtr = thing2;
	thingPtr->getX();
}
	
	