/*
 * Using Pointers
 * Author: Kenneth Hanson
 *
 * This example shows hows the dot (.), arrow (->), reference (&), and
 * dereference (*) operators are used in contexts involving structs/classes.
 *
 * See also: Course Pack Ex. 18
 */
 
/* Note: there is no real difference between a struct and a class in C++.
   I'm just following convention by using a struct for a type with public
   member variables only, and a class for a type with functions and private
   members. */
   
struct Node
{
	int item;
	Node * next;
};

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
	/* Note: what I'm doing here is very artificial, and is mainly to
	   demonstrate syntax. */
	
	//
	// Node Example
	//
	
	// Different kinds of variables
	Node a, b;                             // local objects
	Node *c = new Node(), *d = new Node(); // dynamically allocated objects
	Node *curr;                            // just a pointer
	
	// Accessing struct contents
	a.item = 1;
	b.item = 2;
	c->item = 3;
	d->item = 4;
	
	// Pointing to a local object
	curr = &a;
	
	// Accessing a local object indirectly in two ways
	curr->item;   // curr is a pointer, so use ->
	(*curr).item; // *curr is a local object, so use .
	
	
	// Pointer to a dynamically allocated object
	curr = c;
	
	// Accessing a dynamically allocated object through another pointer
	curr->item;
	(*curr).item;
	
	// Linking nodes -- shows every combination of arrow and ampersand
	a.next = &b;
	b.next = c;
	c->next = d;
	d->next = &a;
	
	// Going through multiple pointers
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
	
	// Accessing local objects indirectly
	thingPtr = &thing1;
	thingPtr->getX();
	
	// Accessing dynamically allocated objects through another pointer
	thingPtr = thing2;
	thingPtr->getX();
}
	
	