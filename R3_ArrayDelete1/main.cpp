#include <cstddef>
#include <iostream>
using std::cout;
using std::endl;

class Simple
{
public:
	Simple() { cout << "Simple constructor called!" << endl; }
	~Simple() { cout << "Simple destructor called!" << endl; }
};

int main()
{
	Simple* mySimpleArray{ new Simple[1] };
	// Use mySimpleArray...
	delete[] mySimpleArray;
	mySimpleArray = nullptr;


	const size_t size{ 2 };
	Simple** mySimplePtrArray{ new Simple * [size] };

	// Allocate an object for each pointer.
	for (size_t i{ 0 }; i < size; i++) { mySimplePtrArray[i] = new Simple{}; }

	// Use mySimplePtrArray ...

	// Delete each allocated object.
	for (size_t i{ 0 }; i < size; i++) {
		delete mySimplePtrArray[i];
		mySimplePtrArray[i] = nullptr;
	}

	// Delete the array itself.
	delete[] mySimplePtrArray;
	mySimplePtrArray = nullptr;
}

