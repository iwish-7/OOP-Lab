#include <iostream>
using namespace std;

void display(int value) {
	cout << "Integer: " << value << endl;
}

void display(double value) {
	cout << "Floating-point number: " << value << endl;
}

void display(char value) {
	cout << "Character: " << value << endl;
}

void display(const int values[], int size) {
	cout << "Integer array: ";
	for (int i = 0; i < size; ++i) {
		cout << values[i] << (i == size - 1 ? '\n' : ' ');
	}
}

void display(const char values[], int size) {
	cout << "Character array: ";
	for (int i = 0; i < size; ++i) {
		cout << values[i] << (i == size - 1 ? '\n' : ' ');
	}
}

int main() {
	int number = 42;
	float decimal = 3.14f;
	char letter = 'A';
	int integerArray[] = {1, 2, 3, 4, 5};
	char characterArray[] = {'H', 'e', 'l', 'l', 'o'};

	display(number);
	display(decimal);
	display(letter);
	display(integerArray, 5);
	display(characterArray, 5);

	return 0;
}
