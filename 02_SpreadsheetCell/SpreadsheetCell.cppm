export module SpreadsheetCell;

export class SpreadsheetCell
{
public:
	SpreadsheetCell() = default;
	SpreadsheetCell(double initialValue);
	// copy constuctor
	SpreadsheetCell(const SpreadsheetCell& src);

	// Destructor.
	~SpreadsheetCell();
	
	void setValue(double value);
	double getValue() const;
private:
	double m_value{ 0 };
};