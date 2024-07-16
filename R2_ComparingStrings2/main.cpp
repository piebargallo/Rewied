#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

int main()
{
	string a{ "12" };
	string b{ "34" };

	// Cuenta con la función predefinida compare().
	auto result{ a.compare(b) };
	if (result < 0) { cout << "less" << endl; }
	if (result > 0) { cout << "greater" << endl; }
	if (result == 0) { cout << "equal" << endl; }
}
	