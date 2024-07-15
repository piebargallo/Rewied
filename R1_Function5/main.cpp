/* Function overloading. */
#include <iostream>
#include <format>
using std::cout;
using std::endl;
using std::format;

auto addNumbers(int number1, int number2)
{
	return number1 + number2;
}

auto addNumbers(double a, double b)
{
	return a + b;
}

int main()
{
	cout << addNumbers(1, 2) << endl; // Calls the integer version
	cout << addNumbers(1.11, 2.22);   // Calls the double version
	return 0;
}