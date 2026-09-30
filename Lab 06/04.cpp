#include <iostream>

class Number {
private:
	int value;

public:
	Number(int value) : value(value) {}

	Number operator-() const {
		return Number(-value);
	}

	int getValue() const {
		return value;
	}
};

int main() {
	Number n1 = 25;
	Number n2 = -n1;

	std::cout << "n1 = " << n1.getValue() << '\n';
	std::cout << "n2 = " << n2.getValue() << '\n';
	return 0;
}
