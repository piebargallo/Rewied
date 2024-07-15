#include <iostream>
#include <string>
#include <format>
using std::string;
using std::cout;
using std::endl;
using std::format;

int main()
{
	string myString{ "Hello World" };
	cout << format("The value of myString is {}", myString) << endl;
	cout << format("The second letter is {}", myString[1]) << endl;
	return 0;
}