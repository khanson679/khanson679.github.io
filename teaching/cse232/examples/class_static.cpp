/*
 * Static Class Variables and Functions
 * Author: Kenneth Hanson
 * Last modified 4/14/13
 *
 * This example demonstates the keyword "static" with class variables and
 *   functions. It does not discuss its file and block scope uses.
 */

class Thing {
	private:
		int member_var;
		static int static_var;

	public:
		Thing() {member_var = 0;}
		void member_func();
		static void static_func();
};

// initialize static_var
int Thing::static_var = 0;

// member function can access static and non-static variables and functions
void Thing::member_func() {
	static_func();
	member_var = 1;
	static_var = 1;
}

// static class function can only access static class variables
void Thing::static_func() {
	static_var = 2;
}

int main() {
	Thing t1;
	
	// can call static function on an object or a class, though you should think
	// always of it as being called on the class
	Thing::static_func();
	t1.static_func();
}
