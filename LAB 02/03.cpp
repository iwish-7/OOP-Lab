#include <iostream>
using namespace std;

class calculator{
    int num1, num2;
public:
    void getdata();
    void displaydata();
    void add();
    void subtract();
    void multiply();
    void divide();
};

void calculator::getdata(){
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
}

void calculator::add(){
    cout << "Sum: " << num1 + num2 << endl;
}

void calculator::subtract(){
    cout << "Difference: " << num1 - num2 << endl;
}

void calculator::multiply(){
    cout << "Product: " << num1 * num2 << endl;
}

void calculator::divide(){
    if(num2 != 0){
        cout << "Quotient: " << num1 / num2 << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }
}

int main () {
    calculator c;
    c.getdata();
    c.add();
    c.subtract();
    c.multiply();
    c.divide();
    return 0;
}