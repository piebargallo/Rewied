#include <iostream>
#include <format>
using std::format;
using std::cout;
using std::endl;

constexpr int getArraySize()
{
	return 32;
}

int main()
{
		cout << format("Return of size array: {}", getArraySize()) << endl;
}
