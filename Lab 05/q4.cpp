// Element Search using overloaded functions
#include <iostream>
using namespace std;

void search(const int arr[], int size, int element)
{
	for (int i = 0; i < size; ++i) {
		if (arr[i] == element) {
			cout << "Element found at position " << i + 1 << ".\n";
			return;
		}
	}
	cout << "Element not found.\n";
}

void search(const char arr[], int size, char element)
{
	for (int i = 0; i < size; ++i) {
		if (arr[i] == element) {
			cout << "Element found at position " << i + 1 << ".\n";
			return;
		}
	}
	cout << "Element not found.\n";
}

void search(const int arr[], int start, int end, int element)
{
	for (int i = start; i <= end; ++i) {
		if (arr[i] == element) {
			cout << "Element found at position " << i + 1 << ".\n";
			return;
		}
	}
	cout << "Element not found in the specified range.\n";
}

int main()
{
	int intArray[] = {10, 20, 30, 40, 50};
	char charArray[] = {'a', 'e', 'i', 'o', 'u'};

	int integer, start, end;
	char character;

	cout << "Enter an integer to search: ";
	cin >> integer;
	search(intArray, 5, integer);

	cout << "Enter a character to search: ";
	cin >> character;
	search(charArray, 5, character);

	cout << "Enter start and end positions (1-5), then an integer: ";
	cin >> start >> end >> integer;
	if (start >= 1 && end <= 5 && start <= end)
		search(intArray, start - 1, end - 1, integer);
	else
		cout << "Invalid range.\n";

	return 0;
}
