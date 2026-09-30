#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double realPart = 0, double imaginaryPart = 0)
        : real(realPart), imaginary(imaginaryPart) {}

    Complex operator-(Complex& other){
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    void display() const {
        std::cout << real;
        if (imaginary >= 0) {
            std::cout << " + " << imaginary << 'i';
        } else {
            std::cout << " - " << -imaginary << 'i';
        }
    }
};

int main() {
    Complex c1(8, 5);
    Complex c2(3, 2);
    Complex difference = c1 - c2;

    std::cout << "C1 - C2 = ";
    difference.display();
    std::cout << '\n';
    return 0;
}