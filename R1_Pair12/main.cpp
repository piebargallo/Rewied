#include <utility>
#include <iostream>
#include <format>
using std::pair;
using std::cout;
using std::endl;
using std::format;

int main()
{
	
	pair myPair { 1.23, 5 };  // Using CTAD
	cout << format("{} {}", myPair.first, myPair.second);
	return 0;
}
