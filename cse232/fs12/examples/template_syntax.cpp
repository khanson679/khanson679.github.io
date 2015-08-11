// Template function
template<typename T>
void g(T par) {}

// Super simple template class
template<typename T>
class thing{
	public:
		void f(thing<T> par);
};

// Template member function
template<typename T>
void thing<T>::f(thing<T> par) {}

// Instantiate the template
int main()
{
	thing<int> A;
	A.f(A);
	
	thing<double> B;
	B.f(B);
	
	g(3);
	g(3.0);
	g(A);
	g(B);
}
