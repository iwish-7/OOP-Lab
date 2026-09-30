#include <iostream>
using namespace std;

class Counter {
private:
	int value;

public:
	Counter(int initialValue = 0) : value(initialValue) {}

	Counter &operator++() {
		++value;
		return *this;
	}

	Counter operator++(int) {
		Counter previous = *this;
		++value;
		return previous;
	}

	int getValue() const {
		return value;
	}
};

int main() {
	Counter c;

	cout << "Before prefix increment: " << c.getValue() << endl;
	++c;
	cout << "After prefix increment: " << c.getValue() << endl;

	cout << "Before postfix increment: " << c.getValue() << endl;
	c++;
	cout << "After postfix increment: " << c.getValue() << endl;

	return 0;
}
