module SpreadsheetCell;

#include <iostream>

SpreadsheetCell::SpreadsheetCell(double initialValue)
	: m_value { initialValue } {}

SpreadsheetCell::SpreadsheetCell(const SpreadsheetCell &src)
	: m_value { src.m_value } {}

SpreadsheetCell::~SpreadsheetCell()
{
	std::cout << "Destructor called." << std::endl;
}

void SpreadsheetCell::setValue(double value)
{
	m_value = value;
}

double SpreadsheetCell::getValue() const
{
	return m_value;
}