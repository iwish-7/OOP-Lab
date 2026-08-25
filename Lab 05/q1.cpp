 #include <iostream>

int calculate(int a, int b) {
	return a + b;
}

int calculate(int a, int b, int c) {
	return a + b + c;
}

double calculate(double a, double b) {
	return a + b;
}

int main() {
	int a, b, c;
	double x, y;

	std::cout << "Enter two integers: ";
	std::cin >> a >> b;
	std::cout << "Sum of two integers: " << calculate(a, b) << '\n';

	std::cout << "Enter three integers: ";
	std::cin >> a >> b >> c;
	std::cout << "Sum of three integers: " << calculate(a, b, c) << '\n';

	std::cout << "Enter two floating-point values: ";
	std::cin >> x >> y;
	std::cout << "Sum of two floating-point values: "
			  << calculate(x, y) << '\n';

	return 0;
}
