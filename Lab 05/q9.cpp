#include <iostream>

int maximumValue(int first, int second)
{
	return (first > second) ? first : second;
}

int maximumValue(int* first, int* second)
{
	return (*first > *second) ? *first : *second;
}

int maximumValue(int* values, int size)
{
	int maximum = values[0];

	for (int i = 1; i < size; ++i)
	{
		if (values[i] > maximum)
			maximum = values[i];
	}

	return maximum;
}

int main()
{
	int first = 12, second = 27;
	std::cout << "Maximum between two integers: "
			  << maximumValue(first, second) << '\n';

	std::cout << "Maximum between values accessed through pointers: "
			  << maximumValue(&first, &second) << '\n';

	int size = 6;
	int* values = new int[size]{9, 5, 18, 3, 20, 7};

	std::cout << "Maximum value in the array: "
			  << maximumValue(values, size) << '\n';

	delete[] values;
	return 0;
}
