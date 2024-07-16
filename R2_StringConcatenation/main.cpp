#include <string>
#include <format>
#include <iostream>
using std::string;
using std::cout;
using std::format;
using std::endl;

int main()
{
	// Declaración tipo string
	string a{ "12" };
	string b{ "34" };
	string c;
	// Concatenación de strings a += b;
	c = a + b;
	// Salida por consola
	cout << format("The concatenation: {}", c) << endl;
	return 0;
}