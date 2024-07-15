#include <iostream>
#include <array>
#include <format>
using std::cout;
using std::format;
using std::endl;
using std::array;

int main()
{
	// Class template argument deduction.
	array arr{ 9, 8, 7, 6, 5, 4, 3, 2, 1 };  
	cout << format("Array size = {}", arr.size()) << endl;
	cout << format("five element = {}", arr[4]) << endl;
	return 0;
}