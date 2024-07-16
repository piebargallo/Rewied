#include <iostream>
#include <format>
using std::cout;
using std::format;
using std::endl;

consteval double inchToMm(double inch) { return inch * 25.4; }

int main()
{
	constexpr double const_inch{ 6.0 };
	constexpr double mm1{ inchToMm(const_inch) }; // at compile time
	cout << format("The inchToNN is: {}", mm1) << endl;
}