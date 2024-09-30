#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

int main()
{
	string strHello{ "Hello!!" };
	string strWorld{ "The World..." };
	auto position{ strHello.find("!!") };
	if (position != string::npos) {
		// Found the "!!" substring, now replace it.
		strHello.replace(position, 2, strWorld.substr(3, 6));
	}
	cout << strHello << endl;
 }