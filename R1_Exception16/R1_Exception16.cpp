#include <stdexcept>
#include <iostream>
#include <format>
using std::cout;
using std::endl;
using std::format;
using std::invalid_argument;

double divideNumbers(double numerator, double denominator)
{
	if (denominator == 0) {
		throw invalid_argument { "Denominator cannot be 0." };
	}
	return numerator / denominator;
}

int main()
{
	try {
		cout << divideNumbers(2.5, 0.5) << endl;
		cout << divideNumbers(2.3, 0) << endl;
		cout << divideNumbers(4.5, 2.5) << endl;
	}
	catch (const invalid_argument& exception) {
		cout << format("Exception caught: {}", exception.what()) << endl;
	}
}