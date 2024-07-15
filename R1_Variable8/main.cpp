#include <iostream>
#include <format>
using std::cout;
using std::format;
using std::endl;

int main()
{
	// Danger uninitialized. 
	int uninitializedInt;
	int initializedInt{ 0 };

	cout << format("{} is a random value", uninitializedInt) << endl;
	cout << format("{} was assigned an initial value", initializedInt) << endl;
	return 0;
}
