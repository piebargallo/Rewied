#include <cstddef>
#include <iostream>
#include <string>
#include <format>
using std::cout;
using std::format;
using std::string;
using std::endl;

int main()
{
	const string toParse{ "   123USD" };
	size_t index{ 0 };
	// stoi() method
	int value{ stoi(toParse, &index) };
	cout << format("Parsed value: {}", value) << endl;
	cout << format("First non-parsed character: '{}'", toParse[index]) << endl;
}