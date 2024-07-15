#include <array>
#include <iostream>
#include <format>
using std::array;
using std::cout;
using std::endl;
using std::format;

int main()
{
	{
		// Structured bindings with array.
		array values{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
		auto [a, b, c, d, e, f, g, h, i] { values };
		cout << format("Last value: {}", values[8]) << endl;
		cout << format("Array size: {}", values.size()) << endl;
		return 0;
	}
}
