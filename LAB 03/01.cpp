#include <iostream>
using namespace std;

int main() {
    int *ptr = new int;
    cout << "Enter an integer: ";
    cin >> *ptr;
    cout << "You entered: \n";
    cout << *ptr << endl;
    delete ptr;
    ptr = nullptr;
    return 0;
}
