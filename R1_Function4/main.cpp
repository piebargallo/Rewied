#include <iostream>
#include <format>
using std::cout;
using std::endl;
using std::format;

// Declaració de funció amb return.
// Current function´s name
auto addNumbers(int number1, int number2)
{
	cout << format("Entering function{}", __func__) << endl;
	return number1 + number2;
}

void result(int number3)
{
	cout << format("The add is: {}", number3) << endl;
}

int main()
{
	// Crida a la primera funció, addNumbers el return passa a la var int sum.
	int sum{ addNumbers(4, 4) };
	// Crida a la segona funció result amb el valor de la var sum.
	result(sum);
	return 0;
}