export module SpreadsheetCell;

export class SpreadsheetCell
{
public:
	SpreadsheetCell() = default;
	void setValue(double value);
	double getValue() const;
private:
	double m_value{ 0 };
};