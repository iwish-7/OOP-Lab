#include <iostream>

using namespace std;

int total(const int array[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
		sum += array[i];
	return sum;
}

double total(const double array[], int size)
{
	double sum = 0.0;
	for (int i = 0; i < size; ++i)
		sum += array[i];
	return sum;
}

int total(const int array[], int size, int elements)
{
	int sum = 0;
	for (int i = 0; i < elements && i < size; ++i)
		sum += array[i];
	return sum;
}

int main()
{
	int integerArray[] = {1, 2, 3, 4, 5};
	int n = sizeof(integerArray) / sizeof(integerArray[0]);

	double floatingArray[] = {1.5, 2.5, 3.5, 4.5};
	int m = sizeof(floatingArray) / sizeof(floatingArray[0]);

	int elements = 3;

	cout << "Total of integer array: "
			 << total(integerArray, n) << endl;
	cout << "Total of floating-point array: "
			 << total(floatingArray, m) << endl;
	cout << "Total of first 3 integer elements: "
			 << total(integerArray, n, elements) << endl;

                
	return 0;
}
