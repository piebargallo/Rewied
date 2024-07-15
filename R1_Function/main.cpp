#include <iostream>
#include <format>
using std::cout;
using std::endl;
using std::format;

// Declaració funció void, sense return.
void myFunction(int i, char c)
{
	cout << format("The value of i is {}", i) << endl;
	cout << format("The value of c is {}", c) << endl;
}

int main()
{
	// Crida a la funció. 
	int someInt{ 6 };
	char someChar{ 'c' };
	myFunction(8, 'a');
	myFunction(someInt, 'b');
	myFunction(5, someChar);
	return 0;
}