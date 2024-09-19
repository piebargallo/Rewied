module spreadsheet;

using namespace std;

Spreadsheet::Spreadsheet(size_t width, size_t height)
	: m_width { width }, m_height { height }
{
	m_cells = new SpreadsheetCell * [m_width];
	for (size_t i{ 0 }; i < m_width; i++) {
		m_cells[i] = new SpreadsheetCell[m_height];
	}
}

Spreadsheet::Spreadsheet(const Spreadsheet& src)
	: Spreadsheet{ src.m_width, src.m_height }
{
	for (size_t i{ 0 }; i < m_width; i++) {
		for (size_t j{ 0 }; j < m_height; j++) {
			m_cells[i][j] = src.m_cells[i][j];
		}
	}
}

Spreadsheet::Spreadsheet(Spreadsheet&& src) noexcept
{
	moveFrom(src);
}

Spreadsheet::~Spreadsheet()
{
	cleanup();
}

Spreadsheet& Spreadsheet::operator=(const Spreadsheet& rhs)
{
	// Check for self assignment
	if (this == &rhs) {
		return *this;
	}

	// Free the old memory
	for (size_t i{ 0 }; i < m_width; i++) {
		delete[] m_cells[i];
	}
	delete[] m_cells;
	m_cells = nullptr;

	// Allocate new memory
	m_width = rhs.m_width;
	m_height = rhs.m_height;

	m_cells = new SpreadsheetCell * [m_width];
	for (size_t i{ 0 }; i < m_width; i++) {
		m_cells[i] = new SpreadsheetCell[m_height];
	}

	// Copy the data
	for (size_t i{ 0 }; i < m_width; i++) {
		for (size_t j{ 0 }; j < m_height; i++) {
			m_cells[i][j] = rhs.m_cells[i][j];
		}
	}

	return *this;
}

Spreadsheet& Spreadsheet::operator=(Spreadsheet&& rhs) noexcept
{
	// Check for self-assigment
	if (this == &rhs) {
		return *this;
	}

	// Free the old memory and move ownership
	cleanup(); 
	moveFrom(rhs);
	return *this;
}

void Spreadsheet::swap(Spreadsheet& other) noexcept
{
	std::swap(m_width, other.m_width);
	std::swap(m_height, other.m_height);
	std::swap(m_cells, other.m_cells);
}

void swap(Spreadsheet& first, Spreadsheet& second) noexcept
{
	first.swap(second);
}

void Spreadsheet::setCellAt(size_t x, size_t y, const SpreadsheetCell& cell)
{
	verifyCoordinate(x, y);
	m_cells[x][y];
}

SpreadsheetCell& Spreadsheet::getCellAt(size_t x, size_t y)
{
	verifyCoordinate(x, y);
	return m_cells[x][y];
}

void Spreadsheet::cleanup() noexcept
{
	for (size_t i{ 0 }; i < m_width; i++) {
		delete[] m_cells[i];
	}
	delete[] m_cells;
	m_cells = nullptr;
	m_width = m_height = 0;
}


void Spreadsheet::moveFrom(Spreadsheet& src) noexcept
{
	m_width = exchange(src.m_width, 0);
	m_height = exchange(src.m_height, 0);
	m_cells = exchange(src.m_cells, nullptr);
}

void Spreadsheet::verifyCoordinate(size_t x, size_t y) const
{
	if (x >= m_width) {
		throw std::out_of_range{ std::format("{} must be less than {}.", x, m_width) };
	} if (y >= m_height) {
		throw std::out_of_range{ std::format("{} must be less than {}.", y, m_height) };
	}
}
