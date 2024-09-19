module SpreadsheetCell;

#include <iostream>
#include <memory>
using namespace std;

int main()
{
	unique_ptr<SpreadsheetCell> myCellp{ new SpreadsheetCell { } };
	(*myCellp).setValue(4.4);
	cout << "Cell 1: " << (*myCellp).getValue() << endl;
	return 0;
}