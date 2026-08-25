#include <iostream>
using namespace std;

int compare(int a, int b)
{
	return (a > b) ? a : b;
}

float compare(float a, float b)
{
	return (a > b) ? a : b;
}

bool compare(const int first[], const int second[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (first[i] != second[i])
			return false;
	}
	return true;
}

int main()
{
	const int integer1 = 12, integer2 = 8;
	const float float1 = 4.5f, float2 = 7.2f;

	cout << "Larger integer: " << compare(integer1, integer2) << '\n';

	cout << "Larger floating-point number: " << compare(float1, float2) << '\n';

    
	const int first[] = {1, 2, 3};
	const int second[] = {1, 2, 3};
	const int size = sizeof(first) / sizeof(first[0]);

	cout << (compare(first, second, size)
				 ? "The arrays contain identical elements."
				 : "The arrays do not contain identical elements.")
		 << '\n';

	return 0;
}
