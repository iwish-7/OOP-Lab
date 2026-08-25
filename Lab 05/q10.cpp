#include <iostream>

int process(int a, int b)
{
	return a + b;
}

double process(int a, double b)
{
	return a + b;
}

double process(double a, double b)
{
	return a + b;
}

int process(const int values[], int size)
{
	int total = 0;
	for (int i = 0; i < size; ++i)
		total += values[i];
	return total;
}

int process(const int* first, const int* last)
{
	int total = 0;
	for (const int* current = first; current != last; ++current)
		total += *current;
	return total;
}

int main()
{
	int values[] = {1, 2, 3, 4, 5};

	std::cout << "Two integers: " << process(10, 20) << '\n';
	std::cout << "Integer and floating-point value: "
			  << process(10, 2.5) << '\n';
	std::cout << "Two floating-point values: "
			  << process(1.5, 2.5) << '\n';
	std::cout << "Integer array and size: "
			  << process(values, 5) << '\n';
	std::cout << "Two integer pointers: "
			  << process(values, values + 5) << '\n';

	return 0;
}
