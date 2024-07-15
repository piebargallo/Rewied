// Def struct
struct CircleStruct
{
	int x, y;
	double radius;
};

// Def class
class CircleClass
{
public:
	CircleClass(int x, int y, double radius)
		: m_x{ x }, m_y{ y }, m_radius{ radius } {}
private:
	int m_x, m_y;
	double m_radius;
};

// Def class with array
class MyClass
{
public:
	MyClass() : m_array{ 0, 1, 2, 3 } {}
private:
	int m_array[4];
};

// Def struct employee
struct Employee {
	char firstInitial;
	char lastInitial;
	int  employeeNumber;
	int  salary;
};

int main()
{
	// C++11 uniform initialization
	CircleStruct myCircle1{ 10, 10, 2.5 };
	CircleClass myCircle2{ 10, 10, 2.5 };

	// Uniform initialization can also be used with dynamically allocated arrays
	int* myArray = new int[] {0, 1, 2, 3};
	// int* myArray = new int[4]{0, 1, 2, 3};  // Pre-C++20.
	delete[] myArray;
	myArray = nullptr;

	// Initializing a struct with uniform initialization
	Employee anEmployee2{ 'J', 'D', 42, 80'000 };
}
