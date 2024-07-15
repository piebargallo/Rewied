#include <iostream>
#include <format>
using std::cout;
using std::cin;
using std::format;
using std::endl;

int main()
{
	auto x{ 0 };
	cout << format("The number x is: {}", x) << endl;

	cout << "Xafa un enter: ";
	int value;
	cin >> value;
	cout << format("Enter xafat: {}", value) << endl;
	return 0;
}