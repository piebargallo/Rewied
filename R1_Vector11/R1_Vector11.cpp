#include <vector>
#include <iostream>
#include <format>
using std::vector;
using std::cout;
using std::endl;
using std::format;

int main()
{
	// Create a vector of integers
	vector myVector { 11, 22 };  // Using CTAD

	// Add some more integers to the vector using push_back()
	myVector.push_back(33);
	myVector.push_back(44);

	// Access elements and size.
	cout << format("1st element: {}", myVector[0]) << endl;
	cout << format("Vector size: {}", myVector.size()) << endl;
	cout << format("4st element: {}", myVector[3]) << endl;
	return 0;
}
