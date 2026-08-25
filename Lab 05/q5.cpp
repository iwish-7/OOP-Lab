// Modify data using overloaded functions.
#include <iostream>
using namespace std;

void modify(int& value, int amount)
{
	value += amount;
}

void modify(float& value, float amount)
{
	value += amount;
}

void modify(int* value, int amount)
{
	if (value != nullptr)
		*value += amount;
}

int main()
{
	int integerValue = 10;
	float floatingValue = 5.5f;
	int pointedValue = 20;

	cout << "Integer before: " << integerValue << '\n';
	modify(integerValue, 5);
	cout << "Integer after: " << integerValue << "\n\n";

	cout << "Floating-point value before: " << floatingValue << '\n';
	modify(floatingValue, 2.5f);
	cout << "Floating-point value after: " << floatingValue << "\n\n";

	cout << "Pointer-based integer before: " << pointedValue << '\n';
	modify(&pointedValue, 10);
	cout << "Pointer-based integer after: " << pointedValue << '\n';

	return 0;
}
