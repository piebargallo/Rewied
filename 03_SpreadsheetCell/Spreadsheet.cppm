export module spreadsheet;

export import spreadsheet_cell;

import <stdexcept>;
import <utility>;
import <format>;
import <iostream>;

export class Spreadsheet
{
public:
	Spreadsheet(size_t width, size_t height);
	// copy constructor
	Spreadsheet(const Spreadsheet& src);
	// move constructor
	Spreadsheet(Spreadsheet&& src) noexcept;
	~Spreadsheet();
	
	// move assign
	Spreadsheet& operator=(const Spreadsheet& rhs);
	Spreadsheet& operator=(Spreadsheet&& rhs) noexcept;

	// Method swap()
	void swap(Spreadsheet& other) noexcept;
	void setCellAt(size_t x, size_t y, const SpreadsheetCell& cell);
	SpreadsheetCell& getCellAt(size_t x, size_t y);
private:
	void cleanup() noexcept;
	void moveFrom(Spreadsheet& src) noexcept;
	void verifyCoordinate(size_t x, size_t y) const;

	size_t m_width;
	size_t m_height;
	SpreadsheetCell** m_cells{ nullptr };
};

export void swap(Spreadsheet& first, Spreadsheet& second) noexcept;