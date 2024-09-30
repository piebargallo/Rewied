#include <string>
#include <iostream>
#include <compare>
using std::cout;
using std::endl;
using std::string;

int main()
{
	string a{ "12" };
	string b{ "34" };

	// C++20 improves all this with the three-way comparison operator
	auto result{ a <=> b };
	if (result < 0) { cout << "less" << endl; }
	if (result > 0) { cout << "greater" << endl; }
	if (result == 0) { cout << "equal" << endl; }
	return 0;
}

// Output less