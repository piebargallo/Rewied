#include <iostream>
#include <format>
using std::cout;
using std::endl;
using std::format;

int main()
{
	//int myInt{};
	// The 0 here is opcional, but reconmened.
	auto myInt{ 0 };
	cout << format("MyInt: {}", myInt) << endl;
	return 0;
}