#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

int main()
{
	// C++20 three-way comparison operator
	string a{ "12" };
	string b{ "34" };
	auto result{ a <=> b };
	if (is_lt(result)) { cout << "less" << endl; }
	if (is_gt(result)) { cout << "greater" << endl; }
	if (is_eq(result)) { cout << "equal" << endl; }
}