#include <iostream>
#include <string>

using namespace std;

int count(int number)
{
	number = number < 0 ? -number : number;
	if (number == 0)
		return 1;

	int digits = 0;
	while (number != 0)
	{
		++digits;
		number /= 10;
	}
	return digits;
}

int count(const int array[], int size)
{
	return size;
}

int count(const char array[], char character)
{
	int occurrences = 0;
	for (int i = 0; array[i] != '\0'; ++i)
	{
		if (array[i] == character)
			++occurrences;
	}
	return occurrences;
}

int main()
{
	int number = -12345;
	cout << "Number of digits: " << count(number) << endl;

	int numbers[] = {1, 2, 3, 4, 5};
	int size = sizeof(numbers) / sizeof(numbers[0]);
	cout << "Number of elements: " << count(numbers, size) << endl;

	string text = "programming";
	char character = 'm';
	cout << "Occurrences of '" << character << "': "
		 << count(text.c_str(), character) << endl;

	return 0;
}
