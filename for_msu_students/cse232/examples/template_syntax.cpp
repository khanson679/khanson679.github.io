/*
 * Template Syntax Example
 * Author: Kenneth Hanson
 * Last modifed 4/14/13
 */

// Template function
template<typename T>
void f(T param) {}

// Template class -- just a wrapper for another object
// Template parameter T must be a type that supports operator= and operator==
template<typename T>
class Thing{
	public:
		// initialize val using default constructor
		Thing() : val() {}
		
		// initialize val from a parameter
	  Thing(T in_val) {val = in_val;}
		
		// test for equality of value of two Things
		bool equals(Thing<T> param);
		
	private:
		T val;
};

// Template member function
template<typename T>
bool Thing<T>::equals(Thing<T> param) {
  return val == param.val;
}

// Test templates
int main()
{
	// invoke template function
	f(3);
	f(3.0);
	
	// instantiate template classes
	Thing<int> A, B(3);
	Thing<double> C, D(5);
	
	// invoke template class member function (just like a normal class)
	A.equals(B);
	C.equals(D);
}