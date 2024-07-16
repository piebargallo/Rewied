#include <iostream>
#include <string_view>
#include <string>
#include <format>
using std::string;
using std::string_view;
using std::cout;
using std::endl;
using std::format;

int main()
{
	// Concatenation with string_view.
	string str{ "Hello" };
	string_view sv{ " world" };
	auto result1{ str + sv.data() };
	string result2{ str };
	result2.append(sv.data(), sv.size());

	cout << format("The result1 is: {}", result1) << endl;
	cout << format("The result2 is: {}", result2) << endl;
}