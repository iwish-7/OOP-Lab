#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of contact numbers: ";
    cin >> n;
    long long *contacts = new long long[n];

    cout << "Enter " << n << " contact numbers:\n";
    for (int i = 0; i < n; i++) {
        cout << "Contact " << (i + 1) << ": ";
        cin >> *(contacts + i);
    }
    
    long long searchNum;
    cout << "\nEnter the contact number to search: ";
    cin >> searchNum;
    
    long long *ptr = contacts;
    int position = -1;
    for (int i = 0; i < n; i++) {
        if (*ptr == searchNum) {
            position = i + 1; // Position is 1-indexed
            break;
        }
        ptr++;
    }
    
    if (position != -1) {
        cout << "\nContact number found at position: " << position << endl;
    } else {
        cout << "\nContact number not found!" << endl;
    }
    
    delete[] contacts;
    
    return 0;
}
