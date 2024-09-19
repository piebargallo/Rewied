module SpreadsheetCell;

#include <iostream>
#include <memory>
using namespace std;

int main()
{
	SpreadsheetCell* cellPtr1{ new SpreadsheetCell { 4 } };
	SpreadsheetCell* cellPtr2{ new SpreadsheetCell { 4 } };
	cout << "Cell ptr1 " << cellPtr1->getValue() << endl;
	delete cellPtr1; // destroys cellPtr1
	cellPtr1 = nullptr;
	return 0;
} // cellPtr2 is Not destroyed because delete was not called on it.