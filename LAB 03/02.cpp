#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of integers: ";
    cin >> n;
    
    int* arr = new int[n];
    
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\nThe elements are:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    delete[] arr;
    arr = nullptr;
    
    return 0;
}
