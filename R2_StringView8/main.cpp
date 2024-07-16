#include <iostream>
#include <string>
#include <string_view>
using std::string_view;
using std::string;
using std::cout;
using std::endl;

int main() {
    string str = "Hello world";
    string_view vista(str); // Crea una vista de toda la cadena

    std::cout << vista.substr(0, 5) << endl; 
    return 0;
}
